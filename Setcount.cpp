//Program to count number of set bits
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter a number:";
	cin>>num;
	while(num!=0)
	{
		if(num&1==1)
		{
			count++;
		}
		num=num>>1;
	}
	cout<<"Total set bits are "<<count;
    return 0;	
}
