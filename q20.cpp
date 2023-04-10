#include<iostream>
using namespace std;
class complex
{
    public:
    int real, img;
    complex diff(complex c1,complex c2)
    {
        complex temp;
        temp.real=c1.real - c2.real;
        temp.img = c1.img-c2.img;
        return temp;
    }
    void getdata(int r, int i)
    {
        real=r;
        img-i;
    }
    void print()
    {
        cout<<real<<" + i"<<img;
    }
};
int main()
{
   cout<<"Name = kartik jajoria\nEnrollment no = 08129802021\n";
    complex c1,c2,c3;
    c1.getdata(5,4);
    c2.getdata(3,4);
    c3=c3.diff(c1,c2);
    c3.print();
}

