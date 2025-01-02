// C++ Code to group anagrams together by using sorted
// words as keys

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> anagrams(vector<string> &arr) {
    vector<vector<string>> res;
    unordered_map<string, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        string s = arr[i];
      
        // Find the key by sorting the string
        sort(s.begin(), s.end());
      
        // If key is not present in the hash map, add
        // an empty group (vector) in the result and
        // store the index of the group in hash map
        if (mp.find(s) == mp.end()) {
            mp[s] = res.size();
            res.push_back({});
        }
      
        // Insert the string in its correct group
        res[mp[s]].push_back(arr[i]);
    }
    return res;
}

int main() {
    vector<string> arr = {"act", "god", "cat", "dog", "tac"};
    
    vector<vector<string>> res = anagrams(arr);
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
    return 0;
}