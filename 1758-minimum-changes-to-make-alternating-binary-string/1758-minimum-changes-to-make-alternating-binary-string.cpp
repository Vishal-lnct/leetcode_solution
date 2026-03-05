class Solution {
public:
    int minOperations(string s) {
        
         int n = s.size();
        int x = 0;
        int  y = 0;

        for(int i = 0; i < n; i++) {
            
           
            if(i % 2 == 0) {
                if(s[i] != '0') x++;
            } else {
                if(s[i] != '1') x++;
            }

            if(i % 2 == 0) {
                if(s[i] != '1') y++;
            } else {
                if(s[i] != '0')y++;
            }
        }

        return min(x, y);
    }
};