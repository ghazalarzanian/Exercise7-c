#include <iostream>
#include <conio.h>

using namespace std;

unsigned long fibo(unsigned long number);

int main()
{
	int n;
	cout << "Enter Number:";
	cin >> n;
	cout << "Fibonacci(" << n << "):" << fibo(n);
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