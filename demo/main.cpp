
#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
#include "libapi/api.h"

using namespace std;

int main(void) {
	int y = API::get();
	cout << y << "\n";
	printf("Its worked\n");
	return 0;
}
