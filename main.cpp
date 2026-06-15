#include<iostream>
using namespace std;
// Functions are set of code which performs something
// Function are used to modularise code
// Function are used to increase readability
// Function are used to use similar code multiple times
// void -> which does not returns anything
// return 
// parameterised
// non parameterised

// Pass by Value
void doSomething(string s) {
	s[0] = 't';
	cout << s << endl;
}

int main() {
	string s = "raj";
	doSomething(s);
	cout << s << endl;
	return 0;
}
