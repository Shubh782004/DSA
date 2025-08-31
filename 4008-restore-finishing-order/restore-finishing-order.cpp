class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int>st;
        for(int i=0; i<friends.size(); i++){
            st.insert(friends[i]);
        }
        vector<int>ans;
        for(int i=0; i<order.size(); i++){
            if( st.find(order[i])!=st.end()) ans.emplace_back(order[i]);

        }
        return ans;
        
    }
};