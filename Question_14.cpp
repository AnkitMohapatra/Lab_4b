#include <iostream>
using namespace std;

void printfunc(int num[],int c,int size)
{
	if(c<size)
  {
		cout<<num[c]<<endl;
		printfunc(num,++c,size);
  }
}

int main()
{
  int size;
  cout<<"Enter the size of array: ";
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++)
  {
		cout<<"Enter your element:";
		cin>>arr[i];
	}
  printfunc(arr,0,size);
  return 0;
}
