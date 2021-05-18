//Program tp check given position is set or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"Enter position:";
	cin>>pos;
	if(num&((pos-1)<<1))
	{
		cout<<"It is a set bit";
	}
	else{
		cout<<"Not a set bit";
	}
    return 0;	
}
