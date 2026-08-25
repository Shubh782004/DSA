class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int n=fruits.size();
        int l=0,r=0;
        int cnt=0;
        while(r<n){
            mp[fruits[r]]++;
            while(mp.size()>2 & l<=r){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
            cnt=max(cnt,r-l+1);
            r++;

        }
        return cnt;
    }
};