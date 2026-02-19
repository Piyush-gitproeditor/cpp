#include <bits/stdc++.h>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    void setname(string n){
        name=n;
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

        cout<<"name of person : "<< name <<endl;
        cout<<"age of the person : "<<age <<endl;
    }
};
class salary{

    private:
    double basic;
    double bonus;

    public:
    void setsalary(double B, double b){
        basic =B;
        bonus =b;

    }
    void displaysalary(){
        cout<<" basic pay: "<<basic<<endl;
        cout<<"bonus given: "<<bonus<<endl;
    }
    double calculatetotalsalary(){

        
        double total=basic +bonus ;
        return total;
    
    }
};
class manager:public salary, public person{
    private:
    string department;

    public:
    void setdepartment(string d){
        department=d;
    }
    string getdepartment(){
        return department;
    }
    void displaymanagerdetail(){
        cout<<"Name: "<<getname()<<endl;
        cout<<"Age: "<<getage()<<endl;
        cout<<"Department: "<<getdepartment()<<endl;
        cout<<"Total salary: "<<calculatetotalsalary()<<endl;
    }
};
int main(){
    manager m;
    m.setname("piyush saini");
    m.setage(25);
    m.setdepartment("peon");
    m.setsalary(30000,5000);
    
    m.displaymanagerdetail();
    
    return 0;
}
