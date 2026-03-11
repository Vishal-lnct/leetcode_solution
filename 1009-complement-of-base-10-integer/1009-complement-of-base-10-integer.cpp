class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }

       string s;
       while(n>0){
        s+=n%2+'0';
        n=n/2;
       }

       reverse(s.begin(),s.end());

       for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            s[i]='1';
        }else{
            s[i]='0';
        }
       }

       long long x=0;

       for(int i=0;i<s.size();i++){
        x=x*2+s[i]-'0';
       }

       return x;
    }
};