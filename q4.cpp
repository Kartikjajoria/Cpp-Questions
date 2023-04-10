#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = kartik jajoria"<<endl<<"enrollment no = 08129802021"<<endl;
	float frac,a;
	int integ;
	cout<<"enter no in decimal form"<<endl;
	cin >>a;
	integ = int(a);
	frac= a-integ;
	cout<<"integer part is "<< integ<< " Fraction Part is "<<frac;
	
}

