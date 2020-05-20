//Contributed by prat31'

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(auto x : nums){
            if(upper_bound(nums.begin(), nums.end(), x)-lower_bound(nums.begin(), nums.end(), x)==1)    return x; 
        }
        return -1;
    }
};