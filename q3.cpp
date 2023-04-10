#include<iostream>
using namespace std;
int main()
{
		cout<<"Name= karik jajoria"<<endl<<"Enrollment no= 08129802021"<<endl;
		int s, u, t, a;
	cout << "enter the value of initial velocity, time and accerlation respectively" << endl;
	cin >> u >> t >> a;
	s = (u*t)+ (a*(t*t));
	cout << "Displacement = " << s << endl;
}
