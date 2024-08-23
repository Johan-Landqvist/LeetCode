class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::vector<int> temp = nums;
        int k = 0;

        for(int i = 0; i < nums.size();i++){
            if(nums[i] == nums[i+1]){
                temp[i] = nums[i];
                k++;
            }
            else{
                temp[i]=nums[i];
            }

        }
        
        return k;
    }
};