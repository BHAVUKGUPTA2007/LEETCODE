class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        int indx1 = -1;
        int n = nums.size();
        for(int i = n-2 ;i>=0;i--){
            if(nums[i] < nums[i+1]){
                indx1 = i;
                break;
            }
        }
        if(indx1<0){
            reverse(nums.begin() , nums.end());
        }
        else{
            int indx2 = 0;
            for(int i = n-1 ; i>=0 ; i--){
                if(nums[i] > nums[indx1]){
                    indx2 = i;
                    break;
                }
            }
            swap(nums[indx1] , nums[indx2]);
            reverse(nums.begin()+indx1+1,nums.end());
        }
       


        
    }
};