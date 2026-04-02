#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,pair<int,int>> mpp;
    mpp[1]={10,20};
    mpp[2]={11,21};
    mpp[3]={12,22};
    for (auto it: mpp){
        cout<<it.first<< " "<< it.second.first <<" "<<it.second.second <<" ";
    }



    return 0;
}
