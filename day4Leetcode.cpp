class Solution {
public:
    int minChanges(string s) {
        int count = 0;
        int i=1;
        
        while(i<s.length() ){
            if(s[i-1]!=s[i]){
                count++;
            }
            i+=2;
        }
        return count;
    }
};