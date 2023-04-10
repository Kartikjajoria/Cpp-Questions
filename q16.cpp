#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = kartik jajoria"<<endl<<"enrollment no = 08129802021"<<endl;
	int a=10;
	int &z=a;
	cout<< "Now Both z and a will refer tovalue of a\n";
	cout<<"The value of a is : "<<a<<endl;
	cout<<"The value of z is also : "<<z;
}

