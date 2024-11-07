class Solution {
public:
    int largestCombination(vector<int>& candidates) {  
        int bit;
        vector<int> bitCount(24,0);
        for(int i=0;i<candidates.size();i++){
            bit=candidates[i];//cout<<"Candidate: "<<bit<<endl;
            int index = 0;//cout<<"Index ";
            while(bit!=0){                
                if(bit&1){
                    bitCount[index]++;//cout<<index<<" ";
                }                    
                index++;                
                bit = bit >> 1;
            }//cout<<endl;
        }
        int ans=INT_MIN;
        for(int i=0;i<bitCount.size();i++)
            ans = max(ans,bitCount[i]);
        
        return ans;
    }
};