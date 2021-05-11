#include<iostream>
using namespace std;
int main()
{
	int i,a,count=0;
	for(i=1;i<=10;i++)
{
		cout<<"enter the "<<i<<" "<<"number";
		cin>>a;
		if(a>99 && a<1000)
	{
		 if(a%2!=0)
	{
		 count++;
	}
		}	
}
	cout<<"the count of 3 digits  odd integers number is :"<<count;	
	return 0;
}
