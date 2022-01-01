#include <iostream>

using namespace std;

unsigned long fibo(unsigned long number);

int main()
{
	for (int i = 0;i <= 1000;i++) {
		cout << "Fibonacci (" <<i<< ") = " << fibo(i) << endl;
	}
	return 0;
}

unsigned long fibo(unsigned long number) {
	if ((number == 0) || (number == 1)) {
		return number;
	}
	else {
		return fibo(number - 1) + fibo(number - 2);
	}
}