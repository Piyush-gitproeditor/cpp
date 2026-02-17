#include <bits/stdc++.h>
using namespace std;
int main(){
    string cars[5]={"volvo","bmw","audi","mercedes","land rover"};
    for (int i=0;i<5;i++){
        cout<<cars[i]<<"\n";
    }
int size=sizeof(cars)/sizeof(cars[0]);
cout<<"the size of array is : "<<size;


    return 0;

}