// LeetCode 904
// Core Idea : Find the longest subarray with at most 2 distinct numbers

/* Sliding Window Template for “at most K distinct”
Use a hashmap / frequency map
Expand right pointer
If distinct > 2 → shrink from left
Track max window size
*/

// CODE:-
/* 
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();

        unordered_map<int, int> freq;
        int i = 0;
        int ans = INT_MIN;

        for(int j = 0; j < n; j++){
            freq[fruits[j]]++;

            while(freq.size() > 2){
                freq[fruits[i]]--;
                if(freq[fruits[i]] == 0) freq.erase(fruits[i]);
                i++;
            }
            ans = max(ans, j - i + 1);
        } 
        return ans;
    }
};
 */