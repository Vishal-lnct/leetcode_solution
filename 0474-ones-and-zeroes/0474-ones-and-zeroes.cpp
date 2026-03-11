class Solution {
public:
int dp[601][101][101];

int check(int i, vector<string>& strs, int m, int n, vector<pair<int,int>>& a){

    if(i == strs.size())
        return 0;
           if(dp[i][m][n] != -1)
        return dp[i][m][n];

    int skip = check(i+1, strs, m, n, a);

    int take = 0;

    if(m >= a[i].first && n >= a[i].second){
        take = 1 + check(i+1, strs, m - a[i].first, n - a[i].second, a);
    }

   
    return dp[i][m][n] = max(take, skip);
}



    int findMaxForm(vector<string>& strs, int m, int n) {

      vector<pair<int,int>> a;
memset(dp, -1, sizeof(dp));
    for(int i=0;i<strs.size();i++){

        int zeros=0;
        int ones=0;

        string x = strs[i];

        for(int j=0;j<x.size();j++){
            if(x[j] == '0')
                zeros++;
            else
                ones++;
        }

        a.push_back({zeros, ones});
    }

    return check(0, strs, m, n, a);
}
};


