#include <stdio.h>

#define OUT	0
#define IN	1

main () {
	int c, state;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t') {
			if (state == IN) {
				state = OUT;
				putchar(' ');
			}
		}
		else {
			state = IN;
			putchar(c);
		}
	}	
}
