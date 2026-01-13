// LeetCode 76
// Find the smallest window in s that satisfies a frequency requirement given by t.

/* 
class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";

        unordered_map<char, int> window;
        unordered_map<char, int> need;
        int formed = 0; 
        int minlen = INT_MAX;
        
        for(int i = 0; i < t.length(); i++){
            need[t[i]]++;
        }
        int required = need.size();

        int i = 0;
        int start = 0;
        for(int j = 0; j < s.length(); j++){
            window[s[j]]++;

            if(window[s[j]] == need[s[j]])  formed++;

            while(i <= j && formed == required){
                if(j-i+1 < minlen){
                    minlen = j-i+1;
                    start = i;
                }

                window[s[i]]--;
                if(need.count(s[i]) && window[s[i]] < need[s[i]])   formed--;

                i++;
            }
        }

        return minlen == INT_MAX ? "" : s.substr(start, minlen);
    }
}; 
*/