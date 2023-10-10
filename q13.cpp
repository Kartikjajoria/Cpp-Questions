//  calculate factorial
#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = kartik jajoria"<<endl<<"enrollment no = 08129802021"<<endl;
	int n,fact=1;
	cout<<"Enter no to calculate for factorial\n";
	cin>>n;
	for(int i=1;i<=n;i++)
		fact*=i;
	cout<<"The factorial of "<<n<<" is : "<<fact;
}

