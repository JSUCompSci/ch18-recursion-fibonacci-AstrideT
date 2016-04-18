//***********************************************************************************************************
//This program prints out the fibonacci sequence fronm f0 to fnum you desire and clearly states out
//the fibonacci of that num
//***********************************************************************************************************
#include<iostream>
using namespace std;
int Fibonacci(int n);
int main() {
	int num;
	cout << "Write the number whose fibonacci you are looking for ";
	cin >> num;
	cout << endl;
	cout << "The fibonacci sequence from F0 to F" << num << " is " << endl;
	for (int counter = 0; counter <= num; counter++)
	{
		cout << Fibonacci(counter) << ",";
	}
	cout << " ..." << endl << endl << endl;
	cout << "F" << num << " is " << Fibonacci(num) << endl;
}
int Fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);

}