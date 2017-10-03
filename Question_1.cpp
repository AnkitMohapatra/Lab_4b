#include<iostream>
using namespace std;

int power(int base, int exponent)
{
    int p;
    if(exponent == 0)
    p = 1;
    else
        p = (base * power(base , exponent-1));
    return p;
}
int main()
{
    int base, exponent;
    cout << "Enter base & exponent respectively : ";
    cin >> base >> exponent;
    cout << "\n" << power(base,exponent);
    return 0;
}
