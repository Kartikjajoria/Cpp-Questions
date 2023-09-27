// armstrong numbers
#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = kartik jajoria"<<endl<<"enrollment no = 08129802021"<<endl;
	int n,r,d=0,t;
	cout<<"Enter the digit no to check for armstrong\n";
	cin>>n;
	t=n;
	while(n!=0)
	{
		r=n%10;
		d+=r*r*r;
		n=n/10;
	}
	if(t==d)
		cout<<t<<" is armstrong no";
	else
		cout<<t<<" is not armstrong no";
}

