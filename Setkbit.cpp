//Program to set a bit
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"Enter position:";
	cin>>pos;
	int res;
	res=num|(1<<(pos-1));
	cout<<"After seting the "<<pos<<" bit set,the value is="<<res;
    return 0;	
}
