#include<iostream>
using namespace std;

int num(int n,int p)
{
 if(p<=n)
  {
   cout << p << "\n";
   return (num(n,++p));
  }
 return 1;
}

int main()
{
int n;
cout << "Enter a number : ";
cin >> n;
cout << num(n,1);
}
