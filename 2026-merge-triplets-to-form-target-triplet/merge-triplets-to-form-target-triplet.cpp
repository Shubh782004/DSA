class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int t1=target[0];
        int t2=target[1];
        int t3=target[2];
        bool flag1=false,flag2=false,flag3=false;
        for(int i=0; i<triplets.size(); i++){
            if(triplets[i][0]<=t1 && triplets[i][1]<=t2 && triplets[i][2]<=t3){
                if(triplets[i][0]==t1) flag1=true;
                if(triplets[i][1]==t2) flag2=true;
                if(triplets[i][2]==t3) flag3=true;
            }
        }
        return flag1 && flag2 && flag3;
    }
};