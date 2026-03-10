class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string x;
        for(int i=0;i<words.size();i++){
            string p=words[i];
            x+=p[0];
        }

        if(x==s){
            return true;
        }

        return false;
        
    }
};