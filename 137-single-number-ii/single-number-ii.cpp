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
    // int ans=0;
    // for(int bitInd=0; bitInd<32; bitInd++){
    //     int cnt=0;
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i]&(1<<bitInd)) cnt++;
    //     }
    //     if(cnt%3) ans=ans|(1<<bitInd);
    // }
    // return ans;
    // }

    //Another Solution using sorting O(NlogN) +O(N) better than O(32N) as logN=32 will be for N=2^32 which is very large input size
    // sort(nums.begin(),nums.end());
    // for(int i=1; i<nums.size(); i+=3){
    //     if(nums[i]!=nums[i-1]) return nums[i-1];
    // }
    // return nums[nums.size()-1];
    

    //Optimal using buckets not intuitive 
    int ones=0,twos=0;
    for(int i=0; i<nums.size(); i++){
        ones=(ones^nums[i])&~twos;
        twos=(twos^nums[i])&~ones;

    }
    return ones;
}
};