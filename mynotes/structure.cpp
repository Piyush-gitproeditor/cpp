#include <iostream>
#include <string>
using namespace std;

struct GFG{
    int G1;
    string G2;
    char G3;
};

int main(){
    GFG geek={2,"lord piyush",'b'};
    cout<<geek.G1<<endl;
    cout<<geek.G2<<endl;
    cout<<geek.G3;
    return 0;
}
