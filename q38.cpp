#include <iostream>
using namespace std;
class person //single base class
{
    public:
    int x;
 	void getdata()
 	{
    	cout << "Enter age of kartik= "; cin >> x;
 	}
};
class student : public person // derived class from base class
{
 	public:
 	int y;
 	void readdata()
 	{
 	    cout << "\nEnter age of SG= "; cin >> y;
 	}
};
class exam : public student   // derived from class derive1
{
 	private:
 	int z;
 	public:
 	int g;
	void indata()
 	{
    	cout << "\nEnter age of SGS= "; cin >> z;
 	}
 	int sum()
 	{
 		g=x+y+z;
 		cout << "\nThe sum of entered ages= " << g<<endl;
	}
};
int main()
{
     exam a;      //object of derived class
     a.getdata();
     a.readdata();
     a.indata();
     a.sum();
     cout<<"Name: Kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
     return 0;
}     

