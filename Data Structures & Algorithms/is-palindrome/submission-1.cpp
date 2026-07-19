class Solution {
public:
    bool isPalindrome(string s) {

        string newS="";
        for(int i=0;i<s.length();i++){
            if((!isalpha(s[i])&&!isdigit(s[i]))){
               continue;
            }
            else{
                newS+=tolower(s[i]);
            }
        }

// cout<<newS;

        int i=0,n=newS.length()-1;
        while(i<=n){
            if(newS[i++]!=newS[n--]){
                return false;
            }
        }

        

        return true;
        
    }
};
