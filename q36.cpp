#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		demo()
		{
			cout << "This is a constructor...."<<endl;
		}
    ~demo()
     {
	    cout << "This is a destructor...."<< endl;
	    cout<<"Name: kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
     }
};

int main()
{
	demo d1;
    return 0;
}

