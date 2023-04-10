#include<bits/stdc++.h>
using namespace std;
class counter{
    public:
    static int count;
    counter(){
        count++;
        cout<<"Object no : "<<count<<endl;
    }
};
int counter :: count;
int main(){
    cout<<"Name = kartik jajoria"<<endl<<"enrollment no = 08129802021"<<endl;
    counter o1;
    counter o2;
}

