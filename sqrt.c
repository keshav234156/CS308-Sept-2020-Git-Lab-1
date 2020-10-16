/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
bool validnumber(int number) {
	if(number < 0) 
		return false;
	return true;
}

void negativeSupport(int n)  {
	n = -1 * n;
	printf("NEGSUPPORT:Sqrt of %d is %fi\n", n, sqrt(n));
	printf("NEGSUPPORT:End of program. Exiting\n");
	return;
}

int main(int argc, char* argv[]) {	
	if (argc != 2) {
		printf("NEGSUPPORT:Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(!validnumber(input)) {
		negativeSupport(input);
		return(0);
	}
	printf("NEGSUPPORT:Sqrt of %d is %f\n",input,sqrt(input));
	printf("“NEGSUPPORT:End of program. Exiting in negativeSupport branch.”");
	return(0);

} // end main
