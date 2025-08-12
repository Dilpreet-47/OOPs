#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int rollno;
    char section;
};

int main(){
    Student s1;
    int i ;
    cout<<"Enter your name : "<<endl;
    cin>>s1.name;
    cin>>s1.rollno;
    cin>>s1.section;
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.section<<endl;
    
    return 0;
}