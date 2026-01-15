// LeetCode 977

/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l = 0; 
        int r = n-1;
        int i = n-1;
        vector<int> v(n);
        while(i >= 0){
            if(abs(nums[l]) <= abs(nums[r])){
                v[i] = nums[r] * nums[r];
                r--;
            }
            else{
                v[i] = nums[l] * nums[l];
                l++; 
            }
            i--;
        }
        return v;
    }
};
*/

