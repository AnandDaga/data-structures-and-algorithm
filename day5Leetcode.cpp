class Solution {
public:
    bool sortedArray(vector<int> sample){
        for(int i=0;i<sample.size()-1;i++)
            for(int j=i+1;j<sample.size();j++)
                if(sample[i]>sample[j])
                    return false ;           
        return true;
    }
    void swapSort(vector<int>& nums ,vector<int>& setbit){
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(setbit[i]!=setbit[j]) break;
                if(setbit[i]==setbit[j] && nums[i]>nums[j])
                    swap(nums[i],nums[j]);  
            }                  
        }
    }

    bool canSortArray(vector<int>& nums) {       
       
        if(sortedArray(nums))   return true;

        vector<int> setbit;
        for(int i=0;i<nums.size();i++){
            int count = 0;
            int bit = nums[i];
            while(bit != 0){                
                if(bit%2==1)
                    count++;
                bit = bit>>1;
            }          
            setbit.push_back(count);
        }
        swapSort(nums,setbit);
        return  sortedArray(nums);
    }
};