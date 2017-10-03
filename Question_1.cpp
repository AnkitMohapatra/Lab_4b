#include<iostream>
using namespace std;

int power(int base, int exponent)
{
    if(exponent == 0)
    return 1;
    else
        return (base * power(base , exponent-1));
}
int main()
{
    int base, exponent;
    cout << "Enter base & exponent respectively : ";
    cin >> base >> exponent;
    cout << "\n" << power(base,exponent);
    return 0;
}
