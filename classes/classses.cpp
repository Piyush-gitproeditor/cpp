#include <bits/stdc++.h>
using namespace std;

class myClass {
public:
    string name;
    int age;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    myClass c;
    c.name = "piyush saini";
    c.age = 20;
    c.display();
    return 0;
}
