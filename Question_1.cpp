#include<iostream>
using namespace std;

int power(int base, int exponent)
{
    if(exponent != 1)
    return (base * power(base , exponent-1));
    else
        return base;
}
int main()
{
    int base, exponent;
    cout << "Enter base & exponent respectively : ";
    cin >> base >> exponent;
    cout << "\n" << power(base,exponent);
    return 0;
}
