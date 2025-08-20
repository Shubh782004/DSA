class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Brute force
    //     unordered_map<int,int>mpp;
    //     for(int i=0; i<nums.size(); i++){
    //         mpp[nums[i]]++;
    //     }
    //     for(auto it: mpp){
    //         if(it.second==1) return it.first;
    //     }
    //     return -1;
    // }

    //Better Solution O(32N)
    int ans=0;
    for(int bitInd=0; bitInd<32; bitInd++){
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]&(1<<bitInd)) cnt++;
        }
        if(cnt%3) ans=ans|(1<<bitInd);
    }
    return ans;
    }
};