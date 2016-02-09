#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
#include "libapi/api.h"

using namespace std;

int main(void) {
	API::Response y = API::get();
	int r = y.code;
	printf("Its worked\n");
	return 0;
}
