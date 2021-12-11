#include <iostream>
#include <conio.h>

using namespace std;

int fibo(int n)
{
	if (n <= 1)
	
		return n;
		
	else
		
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	cout << "please enter a fibo number: "<<endl;
	cin >> n;
	cout << fibo(n) <<endl;
	return 0;
}
