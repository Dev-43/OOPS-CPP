#include<iostream>
using namespace std;
int main() 
{
    int ch;
    double a,b,result;
    cout<<"Welcome to simple Arithmetic calculator"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
    do {
        cout<<"Enter your choice:";
        cin>>ch;

        if(ch>=1&&ch<=4){
            cout<<"Enter two numbers:"<<endl;
            cin>>a>>b;
        }
        switch(ch){
            case 1:
            result=a+b;
            cout<<a<<" + "<<b<<" = "<<result<<endl;
            break;
            case 2:
            result=a-b;
            cout<<a<<" - "<<b<<" = "<<result<<endl;
            break;
            case 3:
            result=a*b;
            cout<<a<<" * " <<b<<" = "<<result<<endl;
            break;
            case 4:
            if(b==0){
                cout<<"Error: Division by zero is not allowed."<<endl;
            } 
            else {
                result=a/b;
                cout<<a<<" / "<<b<<" = "<<result<<endl;
            }
            break;
            case 5:
            cout<<"Exiting the calculator."<<endl;
            break;
            default:
            cout<<"Invalid choice. Please try again."<<endl;
            }
    } while(ch != 5);
        return 0;
}
