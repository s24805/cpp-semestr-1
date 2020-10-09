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

build/%.bin: build/%.o
	$(CXX) $(CXXFLAGS) -o $@ $<

build/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<
