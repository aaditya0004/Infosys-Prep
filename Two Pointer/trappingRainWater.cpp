// LeetCode 42

/* 
Water trapped at index i depends ONLY on
the highest bar to its left and
the highest bar to its right.

water[i] = max(0, min(maxLeft[i], maxRight[i]) - height[i])
*/

/*
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0; 
        int r = n-1;
        int maxLeft = 0, maxRight = 0, water = 0;
        while(l < r){
            if(height[l] <= height[r]){
                if(height[l] >= maxLeft)    maxLeft = height[l];
                else    water += maxLeft - height[l];
                l++;
            }
            else{
                if(height[r] >= maxRight)   maxRight = height[r];
                else    water += maxRight - height[r];
                r--;
            }
        }
        return water;
    }
};
*/