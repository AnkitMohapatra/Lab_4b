#include<iostream>
using namespace std;

int num(int n,int p,int s)
{
 if(p<=n)
  {
   s = s + p;
   return (num(n,++p,s));
  }
 return s;
}

int main()
{
int n;
cout << "Enter a number : ";
cin >> n;
cout << num(n,1,0);
}
