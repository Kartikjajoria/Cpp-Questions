#include<iostream>
using namespace std;
class B
{     public:
		B(int a)
		{  cout << "One-argument constructor of the base class B .";
		} };
class D : public B
{    public:
		D(int a) : B(a)
		{ cout << "\nOne-argument constructor of the derived class D ."<< endl;
		}};
int main()
{
	D obj(5);
	cout<<"Name: Kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
}

