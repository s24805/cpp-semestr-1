import os
import sys
import hashlib
import json


def main(args):
    grades_file = args[0]
    print('grades from: {}'.format(grades_file))

    grades_source = {}
    with open(grades_file, 'r') as ifstream:
        grades_source = json.loads(ifstream.read())

    meetings = grades_source['meetings']
    print('meetings: {}'.format(', '.join(map(lambda _: _['date'], meetings))))

    for index, data in grades_source['students'].items():
        name = data['name']
        nick = (data['nick'] or None)

        gs = []
        for i, date in enumerate(meetings):
            grade = 2.0
            try:
                grade = data['grades'][i]
            except IndexError:
                pass

            gs.append((date, grade,))

        average_grade = sum(map(lambda _: _[1], gs)) / len(gs)

        print('  s{}: {} ({}): {:4.2f}'.format(
            index,
            name,
            (nick or 'does not have a nick!'),
            average_grade,
        ))

        if nick is None:
            continue

        student_id = '{}+s{}'.format(nick, index)
        student_id = hashlib.sha1(student_id.encode('utf-8')).hexdigest()
        with open(os.path.join('grades', student_id), 'w') as ofstream:
            ofstream.write('nick:  {}\n'.format(nick))
            ofstream.write('ocena: {:4.2f}\n'.format(average_grade))
            ofstream.write('\n')

            ofstream.write('+------------+------\n')
            ofstream.write('|       Data | Ocena\n')
            ofstream.write('+------------+------\n')
            for date, grade in gs:
                ofstream.write('| {} | {:4.2f}\n'.format(date['date'], grade))
            ofstream.write('+------------+------\n')

    return 0


exit(main(sys.argv[1:]))
