CXX=g++
CXXSTD=c++17
CXXWARNINGS=\
		   -Wall \
		   -Wextra \
		   -Wpedantic \
		   -Werror \
		   -Wfatal-errors
CXXINCLUDES=\
			-I./include

CXXFLAGS=\
		 -std=$(CXXSTD) \
		 $(CXXWARNINGS) \
		 $(CXXINCLUDES)

all:\
	build/0-hello-world.bin

format:
	@find ./src -name '*.cpp' | xargs -n 1 --no-run-if-empty --verbose clang-format -i
	@find ./include -name '*.h' 2>/dev/null | xargs -n 1 --no-run-if-empty --verbose clang-format -i

build/%.bin: build/%.o
	$(CXX) $(CXXFLAGS) -o $@ $<

build/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<
