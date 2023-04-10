#include <iostream> 
using namespace std; 
class base    //single base class
{
   public:
     int x;
   void getdata()
   {
     cout << "Enter the value of x = "; cin >> x;
   }
 };
class derive : public base    //single derived class
{
   private:
    int y;
   public:
   void readdata()
   {
     cout << "Enter the value of y = "; cin >> y;
   }
   void product()
   {
     cout << "Product = " << x * y << endl;
   }
 };
 
 int main()
 {
    derive a;     //object of derived class
    a.getdata();
    a.readdata();
    a.product();
    cout<<"Name: Kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
    return 0;
 }   

