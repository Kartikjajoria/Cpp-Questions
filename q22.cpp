// real and imagenary
# include<iostream>
using namespace std;
class complex{
    public:
    float real,img,result,result2;
    void getdata(int r,int i)
    {
        real=r;
        img=i;
    }
    void mul(complex c1,complex c2)
    {
        real= c1.real * c2.real;
        img= (c1.img * c2.img);
        result = real - img;
        result2= (c1.img * c2.real) + (c1.real * c2.img);
    }
    void print()
    {
        cout<<result<<" + "<<result2<<"i";
    }
}; 
int main()
{
    complex c1,c2,c3;
    c1.getdata(8,6);
    c2.getdata(5,4);
    c3.mul(c1,c2);
    c3.print();
}

