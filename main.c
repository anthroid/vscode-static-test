#include "main.h"

//	Call a visible API function
void call_api_function(int n)
{
	api_hello(n);
}

int main(int argc, char **argv)
{
	//	Call a visible API function
	call_api_function(123);
	
	/*	Try calling internal_hello() here.
	 *	It will autocomplete and display the function prototype (minus the static keyword),
	 *	but will then fail to compile and link because the function is not valid in this context.
	 */
	
	return 0;
}
