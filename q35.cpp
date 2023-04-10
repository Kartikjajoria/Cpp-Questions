#include <iostream>  
using namespace std;  
  
class Complex {  
public:  
    int real; // To store real part of complex number  
    int imaginary; // To store imaginary part of complex number  
  
    Complex()  
    {  
    // Initial values are zero   
        real = 0;  
        imaginary = 0;  
    }  
    Complex(int r, int i)  
    {  
        real = r; // r is initialized during object creation  
        imaginary = i; // i is initialized during object creation  
    }  
  
    Complex addComplexNumber(Complex C1, Complex C2)  
    {  
  
        Complex res; // result object of complex class  
  
        // adding real part of complex numbers  
        res.real = C1.real + C2.real;  
  
        // adding Imaginary part of complex numbers  
        res.imaginary = C1.imaginary + C2.imaginary;  
  
        // returning the sum  
        return res;  
    }  
    
    Complex mulComplexNumber(Complex C1, Complex C2)  
    {  
  
        Complex res1; // result object of complex class  
  
        // multiplying real part of complex numbers  
        res1.real = C1.real * C2.real;  
  
        // multiplying Imaginary part of complex numbers  
        res1.imaginary = C1.imaginary * C2.imaginary;  
  
        // returning the product  
        return res1;  
    }  
    
};  
  
// Main Class  
int main()  
{  
  
    // First Complex number  
    Complex C1(10, 13);  
  
    // printing first complex number  
    cout << "Complex number 1 : " << C1.real << " + i" << C1.imaginary << endl;  
  
    // Second Complex number  
    Complex C2(6, 4);  
  
    // printing second complex number  
    cout << "Complex number 2 : " << C2.real << " + i" << C2.imaginary << endl;  
  
    // for Storing the sum  
    Complex C3;  
  
    // calling addComplexNumber() method  
    C3 = C3.addComplexNumber(C1, C2);  
  
    // printing the sum  
    cout << "Sum of complex number : " << C3.real << " + i" << C3.imaginary;  
  
    cout << endl;  
    // for Storing the multiplication  
    Complex C4;  
  
    // calling addComplexNumber() method  
    C4 = C4.mulComplexNumber(C1, C2);  
  
    // printing the sum  
    cout << "Product of complex number : " << C4.real << " + i" << C4.imaginary;  
  
    cout << endl; 
	cout<<"Name: kartik jajoria"<<endl<<"Enrollment no: 08129802021"<<endl;
    return 0;
	 
}

