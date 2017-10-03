#include<iostream>
using namespace std;

int num0(int n,int p)
{
 if(p<=n)
  {
   if(p%2==0)
   cout << p << "\n";
   return (num0(n,++p));
  }
 return 1;
}

int num1(int n,int p)
{
 if(p<=n)
  {
   if(p%2!=0)
   cout << p << "\n";
   return (num1(n,++p));
  }
 return 1;
 }


int main()
{
int n,p;
cout << "Enter a number : ";
cin >> n;
cout << "Enter 0 OR 1 to get all even numbers OR odd numbers respectively : ";
cin >> p;
if(p==0)
cout << num0(n,1);
if(p==1)
cout << num1(n,1);
}

