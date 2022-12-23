/*********************************************
 * https://leetcode.com/problems/binary-search/description/?envType=study-plan&id=algorithm-i
**********************************************/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = -1 , max = nums.size(), mid =  nums.size() /  2 , min = -1;

        while(index == -1 && mid > min && mid < max ) {
            if(target == nums[mid]) index = mid ;

            else if(target < nums[mid]) { 
                max = mid;
                mid = (min + mid) / 2 ;
            }

            else {
                min = mid ;
                mid = (max + mid) / 2 ;
            }

            // cout << index << endl ;
            // cout << min << endl ;
            // cout << max << endl ;
            // cout << mid << endl ;
        }

        return index;
       
        
    }
};