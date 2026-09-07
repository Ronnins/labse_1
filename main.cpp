#include <iostream>
#include "Complex.h"

using namespace std;

void print_string(const string& s) {
	cout << s << endl;
}

int main() {
	Complex null_compl, some_complex(1.5, 2.3);
	print_string("null_complex= " + null_compl.toString());
	print_string("some_complex= " + some_complex.toString());

	null_compl.add(some_complex);
	print_string("null + some = " + null_compl.toString());

	null_compl.sub(some_complex);
	print_string("null - some = " + null_compl.toString());

	null_compl.add(some_complex);
	print_string("null + some = " + null_compl.toString());

	null_compl.mul(some_complex);
	print_string("null * some = " + null_compl.toString());

	null_compl.div(some_complex);
	print_string("null / some = " + null_compl.toString());

	
	print_string("null conj: " + null_compl.conj().toString());

	return 0;
}
