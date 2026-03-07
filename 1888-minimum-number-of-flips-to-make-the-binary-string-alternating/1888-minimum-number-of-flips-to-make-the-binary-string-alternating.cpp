class Solution {
public:
    int minFlips(string s) {


      string x = s + s;
        int n = s.size();

        int left = 0;
     int x1 = 0; 
        int x2 = 0;

        int mini = INT_MAX;

        for(int right = 0; right < x.size(); right++){

        if(right % 2 == 0){
                if(x[right] != '0') x1++;
                if(x[right] != '1') x2++;
        }else{
                if(x[right] != '1') x1++;
                if(x[right] != '0') x2++;
            }

        if(right - left + 1 > n){

                if(left % 2 == 0){
                    if(x[left] != '0') x1--;
                    if(x[left] != '1') x2--;
                }else{
                    if(x[left] != '1') x1--;
                 if(x[left] != '0') x2--;
                }

                left++;
            }

            if(right - left + 1 == n){
                mini = min(mini, min(x1, x2));
            }
        }

        return mini;
    }
};