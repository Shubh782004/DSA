class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>mpp;
        for(int i=0; i<bulbs.size();i++){
            mpp[bulbs[i]]++;
        }
        vector<int>ans;
        for(auto it:mpp){
            if(it.second%2) ans.push_back(it.first);
        }
        return ans;
    }
};