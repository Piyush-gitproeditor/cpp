#include <iostream>
using namespace std;
void print(int i,int sum){
    if(i<1){
          cout << "Sum = " << sum;
        return;

    }
    print(i-1,sum+i);
    
}
int main(){
    int n;
    cout<<" enter the value of n : ";
    cin>>n;
    print (n,0);
    return 0;
}
