class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>mpp;
        //here keeping(0,1) is necessary to give a perfect sum
        mpp[0]=1;
        int prefsum = 0 , cnt=0;
        for(int i = 0 ; i<nums.size(); i++){
            prefsum +=nums[i];
            int remove = prefsum - k;
            cnt+=mpp[remove];
            //mtlb jaise presum aaya 6 toh hash map mai agr 6 h alrerady toh 6,2 krdo...pehle 6,1 tha
            mpp[prefsum]+=1; 
        }
        return cnt;
        
    }
};