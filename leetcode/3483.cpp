#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int>& v, vector<bool>& used, int len, int num, set<int>& s) {
        
        
        if(len == 3) {
            if(num % 2 == 0) {   
                s.insert(num);
            }
            return;
        }

        for(int i = 0; i < v.size(); i++) {

            if(used[i]) continue;   

           
            if(len == 0 && v[i] == 0) continue;

            
            if(len == 2 && v[i] % 2 != 0) continue;

            used[i] = true;

            solve(v, used, len + 1, num * 10 + v[i], s);

            used[i] = false; 
        }
    }

    int Numbers(vector<int> v) {
        set<int> s;
        vector<bool> used(v.size(), false);

        solve(v, used, 0, 0, s);

        return s.size();
    }
};

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    Solution obj;
    cout << "Count of numbers: " << obj.Numbers(v);

    return 0;
}