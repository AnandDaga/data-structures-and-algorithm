class Solution {
public:
   
    void getXor(vector<int>& nums,int &res){    // get the xor of the whole array
        for(auto itr:nums)
            res^=itr;
    }

    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        
        vector<int> answer;
        int res = 0;
        getXor(nums,res);
        int k = pow(2,maximumBit)-1;
        while(!nums.empty()){
            int maximum=INT_MIN;
            maximum = max(res^k,maximum);
            answer.push_back(maximum);
            res^=nums.back();
            nums.pop_back();
        }
        return  answer;//answer;
    }
};