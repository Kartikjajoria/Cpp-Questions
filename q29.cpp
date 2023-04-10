#include<iostream>
using namespace std;
class square
{
   private:
        int n,r;
        float n1,r1;
        public:
                void input();
        void calc();
                void display();
};

inline void square::input()
{
        cout<<"Enter an integer :: ";
        cin>>n;
        cout<<"\nEnter a float no. :: ";
        cin>>n1;

}
inline void square::calc()
{
        r=n*n;
        r1=n1*n1;
}
inline void square::display()
{
        cout<<"\nSquare of integer [ "<<n<<" ] = "<<r<<"\n";
        cout<<"\nSquare of float [ "<<n1<<" ] = "<<r1<<"\n";
}
int main ()
{
        square s;
        s.input();
        s.calc();
        s.display();
        cout<<"Name: kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
        return 0;
}

