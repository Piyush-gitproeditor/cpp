#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    string name;
    int empID;

public:
    void setEmployee(string n, int id) {
        name = n;
        empID = id;
    }

    void displayEmployee() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
    }
};

class Manager : public Employee {
private:
    double basicSalary;
    double bonus;

public:
    void setManagerData(double bSalary, double b) {
        basicSalary = bSalary;
        bonus = b;
    }

    double calculateTotalSalary() {
        return basicSalary + bonus;
    }

    string performanceLevel() {
        double total = calculateTotalSalary();

        if (total >= 100000) return "Excellent";
        else if (total >= 70000) return "Very Good";
        else if (total >= 50000) return "Good";
        else return "Average";
    }

    void display() {
        displayEmployee();  
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << calculateTotalSalary() << endl;
        cout << "Performance: " << performanceLevel() << endl;
    }
};

int main() {
    Manager m;

    m.setEmployee("Piyush", 101);
    m.setManagerData(60000, 15000);

    m.display();

    return 0;
}
