class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
           int mod= ((nums[i]%value)+value)%value;
           mpp[mod]++;

        }
        int i = 0;
        while (true) {
            int mod = i % value;
            if (mpp[mod] == 0) return i;
            mpp[mod]--;
            i++;
        }
        return i;


        
    }
};