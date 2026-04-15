#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void print(int n) {
        if(n == 0) return;

        print(n - 1);
        cout << n << "\n";
    }
};

int main() {
    Solution obj;
    obj.print(10);
    return 0;
}