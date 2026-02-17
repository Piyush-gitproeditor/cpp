#include <bits/stdc++.h>
using namespace std;
int factorial(int a){
    if (a<=1){
        return 1;
    }
    return a* factorial(a-1);
}
int main(){
    int k;
    cout<<"enter a number : "<<endl;
    cin>>k;
    cout<<"the factorial of "<<k<<" is :"<< factorial(k);
    return 0;

}