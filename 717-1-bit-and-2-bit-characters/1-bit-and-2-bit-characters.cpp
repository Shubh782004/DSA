class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        int last_ch=0;
        while(last_ch<n-1){
            if(bits[last_ch]==0) last_ch++;
            else if(bits[last_ch]==1) last_ch+=2;
        }
        if(last_ch==n-1) return true;
        else return false;



        
    }
};