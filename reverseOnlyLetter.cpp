class Solution {
public:

    string reverseOnlyLetters(string s) {
        //string str=s;
        char temp;
        int i=0,j=s.length()-1;
        while(i<j){
            while(  !(s[i]>=65&&s[i]<=90) && !(s[i]>=97 && s[i]<=122) && i<j ){
                i++;
            }
            while( !(s[j]>=65&&s[j]<=90) && !(s[j]>=97 && s[j]<=122) && i<j){
                j--;
            }
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;j--;

        }       
        return s;

    }
};