class Solution {
public:
    string compressedString(string word) {
        int i=1;
        string comp;
        char c;
        c=word[0];
        int count=1;

        while(i<=word.length()){
            //c=word[i];
            if(c!=word[i]|| count==9 ){
               // cout<<count<<c;
                 //char cc=char(count);
                  comp.push_back(count+48);
                  comp.push_back(c);
                count =0 ;

            }
            count++;
            c = word[i];
            i++;

        }
        return comp;
    }
};