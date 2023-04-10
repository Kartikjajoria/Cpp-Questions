#include<iostream> 
using namespace std;
int main()
{
	int a,c,b,choice,value;
	c=1;
	while(c){
		cout<<"enter the value of two operands\n";
		cin>>a>>b;
		cout<<endl<<"Enter operant (+,-,*,/,%) you want to perform between operands"<<endl;
		cout<<"Press 1 for addition"<<endl;
		cout<<"Press 2 for multiplication"<<endl;
		cout<<"Press 3 for division"<<endl;
		cout<<"Press 4 for remainder"<<endl;
		cout<<"Press 5 for substraction"<<endl;
		cout<<"Press 6 for substraction"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"the addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
				break;
			case 2:
				cout<<"the multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
				break;
			case 3:
				cout<<"the division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
				break;	
			case 4:
				cout<<"the remainder of "<<a<<" and "<<b<<" is "<<a%b<<endl;
				break;
			case 5:
				cout<<"the substraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
				break;
			case 6:
				c=0;
				break;
		}
	}
}

