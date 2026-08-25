class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int>st(arr.begin(),arr.end());
        int i=1;
        while(k){
            if(st.find(i)==st.end()) k--;
            i++;
        }
        return i-1;
        

        
    }
};