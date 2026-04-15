#include <iostream>
using namespace std;
class solution {
    public:
    void print(int i){
        if (i<1){
            return ;
        }
        cout<<i<<"\n";
        print(i-1);
       
    }

};
int main(){
    solution obj;
    int n;
    
    cout<<"enter till the number u wanna print : ";
    cin>>n;
    obj.print(n);
    return 0;
}