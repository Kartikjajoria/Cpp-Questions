#include<iostream>
using namespace std;
class B1
{	public:
		B1()
		{cout << "\n No argument constructor of the base class B1 ." << endl;
		}};
class B2
{	public:
		B2()
	     { cout << "\n No argument constructor of a base class B2 ." << endl;
		}};
class D : public B1, virtual B2
{	public:
		D() : B1(),B2()
		{    cout << "\n No argument constructor of the derived class D ." << endl;
		}};
int main()
{      D objd;
	cout<<"Name: Kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;  }

