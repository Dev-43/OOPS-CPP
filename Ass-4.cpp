#include<iostream>
#include<string>
#include<windows.h>
#include<vector>
using namespace std;

class Student {
    int age;
    string name;
    int m1,m2,m3;
    float per;
    public:
    int rollno;
    Student();
    void input();
    inline void display(const vector<Student>& s,int rollno);
    friend void marks(vector<Student>& s,int rollno);
};



Student::Student(){
    rollno=0;
    age=0;
    per=0.0;
    name="Untitled";
}

void Student::input(){
    cin.ignore();
    cout<<"Enter Name Of Student:-";
    getline(cin,name);
    cout<<"Enter Rollno:-";
    cin>>rollno;
    cout<<"Enter Age OF Student:-";
    cin>>age;

}

void marks(vector<Student>& s,int rollno){
    bool flag=false;
    for (int i=0;i<s.size();i++){

        if(s[i].rollno==rollno){
            flag=true;
            cout<<"Marks Entering For Student:-"<<s[i].name<<endl;
            cout<<"Rollno:-"<<s[i].rollno<<endl;
            cout<<"**Marks OF Three Subject of Student(50 Outoff)**"<<endl;
            cout<<"Enter OOP Marks:-";
            cin>>s[i].m1;
            cout<<"Enter DM Marks:-";
            cin>>s[i].m2;
            cout<<"Enter DSA Marks:-";
            cin>>s[i].m3;

    //Percentage calculate
            s[i].per=float((s[i].m1+s[i].m2+s[i].m3)/150.0*100);
            break;
        }
        
        cout<<"\n\n";
    }
    if(!flag){
            cout<<"Student Not Found"<<endl;
            cout<<"Press Enter"<<endl;
            cin.ignore();
            cin.get();
        }
    
}

void Student::display(const vector<Student>& s, int rollno) {
    bool flag = false;
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i].rollno == rollno) {
            flag = true;
            cout << "**Student Details**" << endl;
            cout << "Name:-" << s[i].name << endl;
            cout << "Rollno:-" << s[i].rollno << endl;
            cout << "Age:-" << s[i].age << endl;
            cout << "Percentage of Student:-" << s[i].per << "%" << endl;
            break;
        }
    }
    if (!flag) {
        cout << "Student Not Found" << endl;
    }
    cout << "Press Enter" << endl;
    cin.ignore();
    cin.get();
}

int main(){
    int choice,roll;
    vector<Student> s;
    cout<<"**Student Management System**"<<endl;
    cout<<"1.Add Student"<<endl;
    cout<<"2.Add Marks For specific Student"<<endl;
    cout<<"3.Display Student"<<endl;
    cout<<"4.Delete Student"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"\n";
    while(true){
    cout<<"Enter Your Choice:-";
    cin>>choice;
    switch(choice){
        case 1: {
            Student temp;
            temp.input();
            s.push_back(temp);
            break;
        }
        case 2: {
            cout<<"Enter Rollno of Student:-";
            cin>> roll;
            marks(s, roll);
            break;
        }
        case 3: {
            cout<<"Enter Rollno of Student:-";
            cin>> roll;
            if(!s.empty())
                s.back().display(s,roll);
            break;
        }
        case 4: {
            cout<<"Enter Rollno of Student to delete:-";
            cin>>roll;
            bool found=false;
            for (int i=0;i<s.size();i++){
                if(s[i].rollno==roll){
                    s.erase(s.begin()+i);
                    cout<<"Student Deleted Successfully"<<endl;
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"Student Not Found"<<endl;
            }
            break;
        }
        case 5: {
            exit(0);
        }
        default: {
            cout<<"Enter Valid Choice"<<endl;
        }
    }
    }
  
}
