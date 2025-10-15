#include<iostream>
#include <ostream>
#include <stdexcept>
#include<string>
using namespace std;

void ATM_PinCheck(){
    string correct_pin="4353";
    string pin;
    int amount;

    cout<<"\nEnter Your Card:"<<endl;
    cout<<"Enter Amount to Withdraw:";
    cin>>amount;
    cout<<"Enter Your Pin:";
    cin>>pin;
    
    try{

        for(char c :pin){
            if(!isdigit(c))
                throw runtime_error("Pin must only Include Numbers");
        }

        if(pin.length()!=4){
            throw runtime_error("Invalid Pin Length. Pin must be 4 digits.");
        }
        
        if(pin!=correct_pin)
            throw runtime_error("Wrong Pin!!!");

        cout<<"Amount Withdrawn:"<<amount<<endl;
        cout<<"Please Take Your Card and Cash!!"<<endl;
    }

    catch(const runtime_error& e){
        cerr<<e.what()<<endl;
        cerr<<"Transtion Cancelled!!!"<<endl;
        cout<<"Please Take your card!"<<endl;
    }
}

void Gmail_Login(){
    string correct_mailId="dev9@gmail.com";
    string correct_pass="Dev@4353";
    string mailId,pass;

    cout<<"\nGmail Login:"<<endl;
    cout<<"Enter Mail Id:";
    cin>>mailId;
    try{
        if(mailId.find('@')==string::npos || mailId.find('.')==string::npos){
            throw runtime_error("Invaild Mail Format!!!");
        }

        if(mailId!=correct_mailId){
            throw runtime_error("Email id Not Matched!!!");
        }
        
    }
    catch(const runtime_error& e){
        cerr<<e.what()<<endl;
        cerr<<"Login Failed!!!"<<endl;
        return;
    }

    cout<<"Enter Password:";
    cin>>pass;
    try{
        if(pass.length()<8){
            throw runtime_error("Password must be at least 8 characters long.");
        }

        if(pass!=correct_pass){
            throw runtime_error("Password Not Matched!!!");
        }
    }

    catch(const runtime_error& e){
        cerr<<e.what()<<endl;
        cerr<<"Login Failed!!!"<<endl;
    }
}

int main(){
    ATM_PinCheck();
    Gmail_Login();

    return 0;
}