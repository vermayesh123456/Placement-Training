#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsAllCharacters(string &s, int mid) {
       int low=0;
       int right=mid;
       while(right<=s.size()){
           string t = s.substr(low,mid);
           if((t.find('1') != string::npos) &&
               (t.find('2') != string::npos) &&
               (t.find('3') != string::npos)){
                   return true;
               }
               low++;
               right++;
       }
       return false;
    }
};

int main() {
    Solution sol;
    int t;
    cin>>t;
    while(t--){
    string s;
    cin >> s;
    int low = 0;
    int high = s.size();
    int ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (sol.containsAllCharacters(s, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans<<endl;
    }
    return 0;
}
