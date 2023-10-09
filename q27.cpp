// parameteric constructor
#include <bits/stdc++.h>
using namespace std;
class Constructor
{
public:
    int num;
    Constructor(int num)
    {
        this->num = num;
    }
};
int main()
{
	cout << "Name: kartik jajoria"<< endl << "Enrollnment no: 08129802021"<<endl;
    Constructor C2(20);
    cout << "This is Parametric Constructor  : " << C2.num << endl; // Parameteric Constructor
}

