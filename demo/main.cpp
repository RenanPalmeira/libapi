
#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
#include "libapi/api.h"

using namespace std;

int main(void) {
	API::Response y = API::get();
	printf("Its worked\n");
	return 0;
}
