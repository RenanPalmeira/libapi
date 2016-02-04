#ifndef INCLUDE_LIBAPI_LIBAPI_H_
#define INCLUDE_LIBAPI_LIBAPI_H_

#include <curl/curl.h>
#include <string>

namespace API {
	typedef struct {
		int code;
	} Response;

	Response egg();
	int get(char url);
}


#endif