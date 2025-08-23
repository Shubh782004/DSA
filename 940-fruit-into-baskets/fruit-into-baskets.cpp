class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n= fruits.size();
        int r=0,l=0;
        int maxlen=0;
        unordered_map<int,int>mpp;
        while(r<n){
            mpp[fruits[r]]++;
            while(mpp.size()>2 && l<=r){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};