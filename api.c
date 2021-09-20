#include "api.h"

//	Internal API function (not callable outside of this translation unit)
static void internal_hello(int n)
{
	printf("internal_hello: %d\n", n);
}

//	Non-static API function
void api_hello(int n)
{
	printf("api_hello: %d\n", n);
	internal_hello(n);
}
