#include<iostream>
using namespace std;


bool prime(int num){
    for (int i=2;i<num;i++){
        if (num%i==0)
            return false;
    }
    return true;
}
int main(){
    int ser;
    cout<<"Enter the Series of Prime Number:-";
    cin>>ser;
    cout<<endl;
    cout<<"Prime Number Series:{";
    for(int i=2;i<=ser;i++){
        if(prime(i)){
            cout<<i<<",";
        }
    }
    cout<<"\b}"<<endl;
}