#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

double add(double a, double b){
    return a * b;
}

int add(int a, int b, int c){
    return max(a, max(b, c));
}

int main(){
    cout << add(1,2) << endl;        
    cout << add(2.5,3.0) << endl;    
    cout << add(1,2,3) << endl;      
    return 0;
}
