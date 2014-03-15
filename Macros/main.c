/*
 * main.c
 *
 *  Created on: Mar 15, 2014
 *  Author: william
 *
 */

#include <stdio.h>

#define MACRO1(a, b) (a * b)
#define MACRO2(a, b) (a + b)
#define MACRO3(a, b) ((a) > (b) ? (a) : (b))

int main(int argc, char **argv) {
	int first = 5;
	int second = 5;
	printf("MACRO1\nfirst number: %d\nsecond: %d\nmacro result: %d\n",
			first, second, MACRO1(first, second));
	printf("MACRO2\nfirst number: %d\nsecond: %d\nmacro result: %d\n",
			first, second, MACRO2(first, second));
	printf("MACRO3\nfirst number: %d\nsecond: %d\nmacro result: %d\n",
			first, second, MACRO3(first, second));
	return 0;
}
