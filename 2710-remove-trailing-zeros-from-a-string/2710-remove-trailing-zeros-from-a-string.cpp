class Solution {
public:
    string removeTrailingZeros(string num) {
        int j=num.size()-1;
        while(num[j]=='0'){
            j--;
        }
        string x;
        for(int i=0;i<=j;i++){
            x+=num[i];
        }
        return  x;
        
    }
};