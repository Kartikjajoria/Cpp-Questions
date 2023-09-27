// print fibonacci series
#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = kartik jajoria"<<endl<<"enrollment no = 08129802021"<<endl;
	int n,n1=0,n2=1,next;
	cout<<"Enter the no of terms upto which you want to display the fibonacci series : \n";
	cin>>n;
	cout<<n1<<" "<<n2<<" ";
	for(int i=3;i<=n;i++)
	{
		next=n1+n2;
		cout<<next<<" ";
		n1=n2;
		n2=next;	
	} 
}

