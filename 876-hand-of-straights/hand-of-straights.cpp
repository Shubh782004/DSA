class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(hand.size() % groupSize!=0) return false;
        unordered_map<int,int>mpp;
        for(int i=0; i<n ; i++){
            mpp[hand[i]]++;
        }
        sort(hand.begin(),hand.end());
        
        for(int i=0; i<n; i++){
            int val=hand[i];
            if(mpp[val]==0) continue;
            for(int j=val; j<val+groupSize; j++ ){
                if(mpp[j]==0) return false;
                mpp[j]--;
            }
        }
        return true;
    }
};