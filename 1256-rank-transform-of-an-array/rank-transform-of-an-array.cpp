class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.size()==0) return{};
        vector<int>copy(arr.size(),0);
        for(int i=0; i<arr.size(); i++){
            copy[i]=arr[i];
        }
        sort(copy.begin(),copy.end());
        unordered_map<int,int>mpp;
        int rank=1;
        mpp[copy[0]]=1;
        for(int j=1; j<arr.size(); j++){
            if(copy[j]!=copy[j-1]) rank++;
            mpp[copy[j]]=rank;
            
        }
        vector<int>ans(arr.size(),0);
        for(int k=0; k<arr.size();k++){
            ans[k]=mpp[arr[k]];
        }
        return ans;
    }
};