class Solution {
public:
    int minSetSize(vector<int>& arr) {

        unordered_map<int,int>ans;
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        vector<int>v;
        for(auto &x:ans){
            v.push_back(x.second);
        }

        sort(v.rbegin(),v.rend());
 
        int p=arr.size()/2;
        int x=p;
      int z=arr.size();
      int i=0;
      int count=0;
        while(z>p && i<v.size()){
            z-=v[i];
            i++;
            count++;


        }
       return count;
        
    }
};