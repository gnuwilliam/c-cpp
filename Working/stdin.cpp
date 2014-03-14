#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	string response;
	cout << "Type a string: " << flush;
	getline(cin, response);
	cout << "The string is: " << response << endl;
	return 0;
}
