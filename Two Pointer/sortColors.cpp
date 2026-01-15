// LeetCode 75

/* 
I use three pointers: low for 0s, mid for current, and high for 2s.
As I scan once, I swap 0s to the front and 2s to the back while keeping 1s in the middle.
This maintains clear invariants and sorts the array in one pass with constant space.
*/

/* 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0; 
        int mid = 0; 
        int high = n - 1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
*/





