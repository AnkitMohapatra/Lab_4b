#include<iostream>
using namespace std;

int rev(int n,int r)
{
 while(n!=0)
{
     r = (r*10) + (n%10);
     return rev((n/10),r);
}

}

int main()
{
int n;
cout << "Enter a number : ";
cin >> n;
if(rev(n,0) == n)
 cout << "Palindrome";
else
 cout << "Not Palindrome";
}
