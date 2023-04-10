#include <iostream>
using namespace std;
class prime
{
    int num;

  public:
    prime(int n)
    {
        num = n;
    }
    void check_prime()
    {
        int flag = 1;
        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            cout << "Entered number is prime number" << endl;
        else
            cout << "Entered number is not a prime number" << endl;
    }
    void display()
    {
    }
};

int main()
{
    int n;
    cout << "Enter a number:\t";
    cin >> n;
    prime p(n);
    p.check_prime();
    p.display();
    cout<<"Name: kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
    return 0;}

