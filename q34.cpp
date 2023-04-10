#include<iostream>
using namespace std;
class complex
{
    float real,imag;
public:
    complex()
    {
        cout<<"default constructor"<<endl;
        real=0;
        imag=0;
    }
   complex(float r, float i)

    {
    cout<<"parameterized constructor"<<endl;
    real=r;
    imag=i;
    }
    complex(complex &c)
    {
        cout<<"copy constructor"<<endl;
        real=c.real;
        imag=c.imag;

    }
    void getData()
    {
        cout<<"the complex number are: "<<real<<"+"<<imag<<"i"<<endl;

    }
    void showData()
    {
        cout<<"the sum is: ";
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    complex addition(complex x,complex y)
    {
        complex temp;
        temp.real=x.real+y.real;
        temp.imag=x.imag+x.imag;
        return temp;

    }
};

int main()
{
    complex c2(5,4),c3(c2),c1;
    c2.getData();
    c3.getData();
    c1=c1.addition(c2,c3);
    c1.showData();
    cout<<"Name: kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
    return 0;
}

