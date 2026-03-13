class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {

        int mini=arr[0].front();
        int maxi=arr[0].back();
        int ans=0;

        for(int i=1;i<arr.size();i++){
            int currmin=arr[i].front();
            int currmax=arr[i].back();

            int x=abs(maxi-currmin);
            ans=max(x,ans);
             int y=abs(mini-currmax);
             ans=max(y,ans);

             mini=min(mini,currmin);
             maxi=max(maxi,currmax);

        }
        return ans;
    }
};