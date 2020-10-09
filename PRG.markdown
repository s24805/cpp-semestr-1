# zjazd 0

- przedstawienie się
- lista studentów, lista obecności
- zwolnienie z zajęć (CV, doświadczenie)
- dystrybucja VM
- prezentacja narzędzi (Github, Git, konsola, GCC)

# lekcja 0

- wstęp historyczny do komputerów:
    - co to jest komputer? (CPU, pamięć, urządzenia I/O)
    - jak działa CPU? (load, decode, execute, retire)
    - `mov eax, 0`

- wstęp historyczny do języków programowania (od Charles Babagge'a)
- czym jest język programowania (duch w maszynie)
- jakie są języki programowania:
    - funkcyjne (OCaml, Standard ML)
    - obiektowe (Smalltalk, Erlang)
    - strukturalne (C, Rust)
    - wieloparadygmatowe (C++)
    - inne paradygmaty
- języki mogą być kompilowane (np. C++ i Rust) lub
  wykonywane dynamicznie (np. Python i Ruby), lub trochę tak, a
  trochę tak (Java, Javascript)

- podstawowe składniki języka: czyli jak relizowane są podstawowe czynności?
  (Jackson Structured Programming)
    - Michael Jackson, 1975; Principles of Program Design
    - *sequence* (sekwencja, kolejność)
    - *selection*, *alternative* (wybór, alternatywa)
    - *iteration* (iteracja)
    - fajne, ale nadaje się do opisania algorytmów, a to nie wszystko

- dodatkowe składniki języka: czyli jak relizowane są niektóre bardziej
  zaawansowane operacje?
    - Warnier/Orr
    - Jean-Dominique Warnier, 1976; Logical construction of programs
    - Kenneth Orr, 1977; Structured systems development
    - *recursion* (rekurencja): czyli jak wykonać tą samą operację z jej środka;
      da się to załatwić iteracją, ale rekurencja często jest bardziej elegancka
    - *concurrency* (współbieżność): czyli jak zapewnić wykonywanie kilku rzeczy
      naraz
    - panowie mieli spoko pomysł, ale czegoś tu jeszcze brakuje

- ja bym dorzucił do tego jeszcze... czyli jak realizowane są programy, które są
  nieco bardziej skomplikowane niż szkolne algorytmy
    - *error handling* (obsługa błędów): czyli jak obsługiwane są sytuacje, w
      których coś poszło nie tak; moim zdaniem dobrą praktyką jest wydzielenie
      obsługi błędów z uwagi na jej znaczenie dla pisania odpornych ("robust")
      na awarie programów
    - *I/O* (obsługa wejścia i wyjścia): czyli jak program komunikuje się ze
      światem zewnętrznym; ponieważ programy nie działają same dla siebie

- jak to wygląda w C++?
    - *sequence*: stwierdzenia są wykonywane po kolei, a oddzielane są
      najczęściej znakiem
    - *selection*: stwierdzenia `if-else` oraz `switch-case`
    - *iteration*: pętle `for`, `while`, oraz `do-while`
    - *recursion*: funkcje (mogą wołać same siebie)
    - *concurrency*: wątki (lub procesy, ale te drugie są zapewniane przez
      POSIX, a nie standard C++)
    - *error handling*: wyjątki (lub kody błędu, ale to jest mechanizm
      odziedziczony po C i miesza zwracanie wartości z funkcji z obsługą
      błędów)
    - *I/O*: strumienie `iostream`, `fstream`, itd. (moim zdaniem bardziej
      eleganckie są *file descriptors*, ale te znów dostarcza POSIX)

- abstrakcje i sposoby organizacji kodu:
    - funkcje (sposób na opakowanie zestawu instrukcji w "jedną")
    - struktury (sposób na opakowanie zestawu danych w "jedną")
    - przestrzenie nazw (`namespace`, sposób na opakowanie powiązanych
      abstrakcji)

- programy:
    - instrukcje, operujące na danych
    - standardowe wejście
    - standardowe wyjście
    - standardowe wyjście błędów
    - dodatkowe strumienie I/O otwierane przez program
    - kod wynikowy (kod błędu)
    - (funkcje są dokładnie takie same: mają dane na wejściu, wynik, i mogą
      zakończyć się błędem)

- zastrzeżenia:
    - zakaz używania `using namespace std;`
    - zaliczenia tylko na Linux
    - zaliczenie prezentacją projektu (plus minimalna obecność)

# lekcja 2

- "Hello, World!"
- "Hello, ...!"

# lekcja 3

- add, subtract, multiply, divide

# lekcja 4

- guessing game
