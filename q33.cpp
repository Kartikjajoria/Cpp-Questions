#include <iostream>
using namespace std;

// function with float type parameter
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}
// function with int type parameter
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}
int main() {
     // call function with int type parameter
    cout << "Absolute value of -8 = " << absolute(-8) << endl;

    // call function with float type parameter
    cout << "Absolute value of 9.6 = " << absolute(9.6f) << endl;
    cout<<"Name: kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
    return 0;  }

