#include <iostream>
using namespace std;

int array(int x[],int n)
{
  int sum;
  if(n==0)
     sum=0;
  else
     sum=x[n-1]+array(x,n-1);
  return (sum);
}

int main()
{
   int n[100],l;
   cout << "Enter the number of element of array(0 to 100) : ";
   cin >> l;
   cout << "Enter element of array(0 tom 100) : ";
   for(int k=0;k<l;k++)
     cin >> n[k];
   cout << endl<<"Sum of the  element of the array : "<<array(n,l);
   return 0;
}
