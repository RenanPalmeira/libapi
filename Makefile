CXX=g++

CXXFLAGS=-Wall -fpic
CXXINCLUDE=-Iinclude
API_OUTPUT=api.o
OUTPUT=main.out
SRC = source/libapi.cpp

all: build

# -Icurl
# -I/usr/include/python2.7
build: output
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(API_OUTPUT) $(CXXINCLUDE)


output:
	$(CXX) demo/main.cpp $(API_OUTPUT) -o $(OUTPUT) $(CXXINCLUDE) 
	
run: output
	./$(OUTPUT)

test:
	make build
	make run

clean:
	rm -f libapi.so libapi.o $(LIBAPI_BUILD)