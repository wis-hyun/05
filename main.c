#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c;
	int num=0;
	printf("input a string :");

	while ((c = getchar()) != '\n') {
		if (c>='0' && c<='9') {
			num += 1;
		}
	}
	printf("the number of digits is %d", num);
	
	return 0;
	
}
