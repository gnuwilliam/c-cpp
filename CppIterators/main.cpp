/*
 *
 * 	Cpp Iterators
 * 	Author: William Oliveira <sudowilliam@gmail.com>
 *
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	string cppstring = "This is a C++ string";

	cout << cppstring << endl;

	for (auto it = cppstring.begin(); it != cppstring.end(); ++it) {
		printf("%c\n", *it);
	}

	return 0;
}
