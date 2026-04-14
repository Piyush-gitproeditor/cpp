#include <bits/stdc++.h>
using namespace std;
void name(int n){
if (n==0){
    return; 
}

    name(n-1);
    cout<<"piyush " <<endl;
}
int main(){
    name(5);
    return 0;
}