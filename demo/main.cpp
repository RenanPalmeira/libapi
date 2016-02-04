#include <stdio.h>
#include <curl/curl.h>
#include "libapi/libapi.h"

int main(void) {
	API::Response r = API::egg();
	printf("Its worked\n");
	return 0;
}
