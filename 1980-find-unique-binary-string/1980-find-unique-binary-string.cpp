class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

       
        string x = "";

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i][i] == '0')
                x += '1';
            else
                x += '0';
        }

        return x;
        
    }
};