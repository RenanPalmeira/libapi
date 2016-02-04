CXX=g++

LIBAPI_BUILD=main.o
CXXFLAGS=-Wall -fPIC -c
CXXINCLUDE=-Iinclude
LIBAPI_SOURCE = source/libapi.cpp

all:
	$(CXX) $(CXXINCLUDE) $(CXXFLAGS) $(LIBAPI_SOURCE) -o libapi.o
	# -I/usr/include/python2.7
	# -Icurl
	$(CXX) -shared -o libapi.so libapi.o

run:
	$(CXX) demo/main.cpp -o $(LIBAPI_BUILD) -Iinclude -Llibapi
	./$(LIBAPI_BUILD)

clean:
	rm -f libapi.so libapi.o $(LIBAPI_BUILD)