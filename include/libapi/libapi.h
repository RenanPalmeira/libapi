#ifndef INCLUDE_LIBAPI_LIBAPI_H_
#define INCLUDE_LIBAPI_LIBAPI_H_

#include <curl/curl.h>
#include <string>

namespace libapi {
	struct Response {
		int code;
		std::string body;
	} Response;
	int get(char url);
}

int egg();

#endif