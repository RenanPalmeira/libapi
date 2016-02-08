#ifndef INCLUDE_LIBAPI_API_H_
#define INCLUDE_LIBAPI_API_H_

#include <curl/curl.h>
#include <string>

namespace API {
	typedef struct {
		int code;
	} Response;

	Response get();
}
#endif