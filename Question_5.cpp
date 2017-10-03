#include<iostream>
using namespace std;

int num0(int n,int p,int s)
{
 if(p<=n)
  {
   if(p%2==0)
    s = s + p;
   return (num0(n,++p,s));
  }
 return s;
}

int num1(int n,int p,int s)
{
 if(p<=n)
  {
   if(p%2!=0)
    s = s + p;
   return (num1(n,++p,s));
  }
 return s;
 }


int main()
{
int n,p;
cout << "Enter a number : ";
cin >> n;
cout << "Enter 0 OR 1 to get sum of all even numbers OR odd numbers respectively : ";
cin >> p;
if(p==0)
cout << num0(n,1,0);
if(p==1)
cout << num1(n,1,0);
}
