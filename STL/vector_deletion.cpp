#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v ={10,20,30,40,50,60};
    // to erase the elements of index number 2, 3 will be deleted 
    v.erase(v.begin()+2, v.begin()+4);
    // to print the resulting elements in the vector 
   for (auto x : v) {
    cout << x << " ";
}


    return 0;
}