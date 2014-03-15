/*
 * main.c
 *
 *  Created on: Mar 15, 2014
 *  Author: William Oliveira <sudowilliam@gmail.com>
 *
 */

#include <stdio.h>

int main(int argc, char **argv) {
	char s[] = "some string";

	for (char * cp = s; *cp; ++cp) {
		printf("char is %c\n", *cp);
	}
	return 0;
}



