class Solution {
public:
    bool rotateString(string s, string goal) {
        //static char ch;
        if(goal.length()!=s.length())   return false;
        //string dup = s;
        for(int i=0;i<goal.length();i++){
            char ch = s[i];
            s.push_back(ch);
            if(s.find(goal) != string::npos){
                return true;
            }
        }
        return false;
        
    }
};