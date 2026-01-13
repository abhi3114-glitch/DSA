class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max=LLONG_MIN;
        long long secmax=LLONG_MIN;
        long long thirdmax=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                thirdmax=secmax;
                secmax=max;
                max=nums[i];
            }
            else if(nums[i]>secmax && nums[i]!=max){
            thirdmax=secmax;
            secmax=nums[i];
            }
            else if(nums[i]>thirdmax && nums[i]!=secmax && nums[i]!=max){
                thirdmax=nums[i];
            }

        }
        if (thirdmax == LLONG_MIN) {
        return max;
        } 
        else {
        return thirdmax;
        }
       
        
    }
};