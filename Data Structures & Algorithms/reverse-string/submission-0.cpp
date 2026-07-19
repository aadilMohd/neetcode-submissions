class Solution {
public:
    void reverseString(vector<char>& s) {

        int i=0;
        int n=s.size()-1;

        while(i<n){
            cout<<i<<n<<endl;
            char  c = s[i];
            s[i]=s[n];
            s[n]=c;
            i++;
            n--;
        }
        
    }
};