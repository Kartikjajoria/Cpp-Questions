#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout<<"Name = kartik jajoria"<<endl<<"enrollment no = 08129802021"<<endl;
	class employee
	{
		public: int employee_id;
		protected : string name,address;
		private: int age;
		public:void getdata()
		{
			cout<<"Enter name, employee id, age, address of a employee\n";
			cin>>name>>employee_id>>age>>address;		
		}
		void showdata()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Id = "<<employee_id<<endl;
			cout<<"Age = "<<age<<endl;
			cout<<"Address = "<<address<<endl;
		}
	};
	employee e1;
	e1.getdata();
	e1.showdata();
}

