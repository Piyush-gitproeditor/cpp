#include <bits/stdc++.h>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    void setname(string n){
        name =n;
    }
    string getname(){
        return name;
    }
    void setage(int a){
        age=a;
    }
    int getage(){
        return age;
    }
    void displayperson(){
        cout<<"the name and age of the person is :"<<endl;
    }
};
int main(){
    Person p;
    p.setname("piyush saini");
    p.setage(20);

    cout<<"The name of the student is : "<<p.getname()<<endl;

    cout<<"the age of the student is : "<<p.getage()<<endl;






    return 0;

}
    
