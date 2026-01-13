// LeetCode 1004 
// Sliding window 
// Binary Array so no need hashmap save space use Zeroes count only

// CODE:-
/* 
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int zeros = 0;
        int ans = INT_MIN;
        int i = 0; 
        for(int j = 0; j < n; j++){
            if(nums[j] == 0) zeros++;

            while(zeros > k){
                if(nums[i] == 0) zeros--;
                i++;
            }
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};
 */