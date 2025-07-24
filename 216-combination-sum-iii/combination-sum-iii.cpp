class Solution {
public:
    void combo(int k, int n,int sum, int ind,vector<int>&num, vector<int>&temp, vector<vector<int>>&ans){
        if (sum > n || temp.size() > k) return;
        if(ind==num.size()){
            if(temp.size()==k && sum==n){
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(num[ind]);
        sum+=num[ind];
        combo(k,n,sum,ind+1,num,temp,ans);
        temp.pop_back();
        sum-=num[ind];
        combo(k,n,sum,ind+1,num,temp,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>num={1,2,3,4,5,6,7,8,9};
        vector<int>temp;
        vector<vector<int>>ans;
        combo(k,n,0,0,num,temp,ans);
        return ans;
        
    }
};