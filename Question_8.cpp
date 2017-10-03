#include<iostream>
using namespace std;

int sum(int n,int s)
{
while(n!=0)
{
     s = s + (n%10);
     return sum(n/10,s);
}

}

int main()
{
int n;
cout << "Enter a number : ";
cin >> n;
cout << sum(n,0);
}
