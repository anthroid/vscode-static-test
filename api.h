#include <stdio.h>

//	Internal API function (not callable outside of this translation unit)
static void internal_hello(int n);

//	Non-static API function
void api_hello(int n);
