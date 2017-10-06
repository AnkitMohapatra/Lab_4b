#include <iostream>
using namespace std;

int lcm(int num1,int num2,int c)
{
	if(c%num1==0 && c%num2==0)
		cout<<"LCM of the 2 numbers:"<<c;
	else
		lcm(num1,num2,++c);
}

int main()
{
	int num1,num2,c;
	cout << "Enter two numbers : ";
	cin >>num1 >> num2;
	c = max(num1,num2);
	lcm(num1,num2,c);
	return 0;
}
