#include <stdio.h>

int function(int cond);

int main()
{
	int cond = 1;
	function(cond);
	cond = 0;
	function(cond);
}

int function(int cond)
{
	if ( cond ) {
		printf("Condition is true...!\n");
	} else {
		printf("Condition is false...!\n");
		return(1);
	}
	printf("End of program\n");
	return(0);
}
