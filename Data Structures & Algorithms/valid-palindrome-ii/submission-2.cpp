class Solution {
        bool isPalindrome(string s, int l, int r) {

            while(l<r){
                if(s[l++]!=s[r--]){
                    return false;
                }

                
            }

            return true;
        
    }

public:
    bool validPalindrome(string s) {

        
         
         int i=0,j=s.length()-1;

         if(isPalindrome(s,0,s.length()-1)) return true;

         while(i<=j){
            if(s[i]!=s[j]){

                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }
            i++;
            j--;
         }

         return false;
    }
};