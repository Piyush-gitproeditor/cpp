#include <bits/stdc++.h>
using namespace std;
class person{
    private:
    string name ;
    int age ;
    public:
    void setname(string n){
        name=n;
    }
    string getname (){
        return name;
    }
    void setage(int a){
        age =a;
    }
    int getage(){
        return age;
    }
    void display(){
        cout<<"name of person:"<<getname()<<endl;
        cout<<"age of the person:"<<getage()<<endl;
    }

};
class student:public person{
    private:
    int rollnumber ;
    int marks[5];
    public:
    void setrollnumber(int r){
        rollnumber =r;
    }
    int getrollnumber(){
        return rollnumber;
    }
    void input(){
        cout<<"enter the marks in all 5 subjects: \n";
        for (int i=0;i<5;i++){
            cin>> marks[i];
        }
    }
    void display(){
        person::display();
        cout<<"roll number :"<<rollnumber<<endl;
        cout<<"marks are : \n";
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"the total marks are : "<<getsum()<<endl;
        cout<<"the average is: "<<getaverage()<<endl;
        cout<<"grade obtained : "<<getgrade()<<endl;
    }
    int getsum(){
        int total=0;
        for (int i=0;i<5;i++){
            total +=marks[i];
        }
        return total;
    }
    double getaverage(){
        return getsum() /5.0;
    }
    char getgrade(){
        double avg =getaverage();
        if (avg>=90) return 'A';
        else if(avg>=75) return 'B';
        else if(avg>=60) return 'C';
        else if(avg>=50) return 'D';
        else return 'F';
    }
    
    
};
int main(){
    student obj;
     obj.setname("Piyush");
    obj.setage(20);
    obj.setrollnumber(101);
    obj.input();        
    obj.display(); 
    void display();
    return 0;
}
