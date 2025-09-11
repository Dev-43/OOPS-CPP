#include<iostream>
using namespace std;
class Complex{
    private:
    double real,imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(double r, double i){
        real=r;
        imag=i;
    }
    Complex operator+(Complex &c2) {
        return Complex(real+c2.real,imag+c2.imag);
    }
     Complex operator-(Complex &c2) {
        return Complex(real-c2.real,imag-c2.imag);
    }
     Complex operator*(Complex &c2) {
        return Complex(real*c2.real-imag*c2.imag,real*c2.real+imag*c2.imag);
    }
     Complex operator/(Complex &c2) {
        double denominator=c2.real*c2.real+c2.imag*c2.imag;
        if(denominator==0){
            throw runtime_error("Division by zero complex number!");
        }
        return Complex((real*c2.real+imag*c2.imag)/denominator,(real*c2.real-imag*c2.imag)/denominator);
    }
    friend ostream &operator<<(ostream &out, const Complex &c){
        out<<c.real;
        if(c.imag>=0) out<<"+"<<c.imag<<"i";
        else out<<"-"<<-c.imag<<"i";
        return out;
    }
    friend istream &operator>>(istream &in,Complex &c){
        cout<<"Enter real part:";
        in>>c.real;
        cout<<"Enter imaginary part:";
        in>>c.imag;
        return in;
    }
};
int main(){
    Complex c1,c2;
    cout<<"Enter first complex number:\n";
    cin>>c1;
    cout<<"Enter second complex number:\n";
    cin>>c2;
    cout<<"\nResults:\n";
    cout<<"c1 + c2 = "<<(c1+c2)<<endl;
    cout<<"c1 - c2 = "<<(c1-c2)<<endl;
    cout<<"c1 * c2 = "<<(c1*c2)<<endl;
    cout<<"c1 / c2 = "<<(c1/c2)<<endl;
    return 0;
}