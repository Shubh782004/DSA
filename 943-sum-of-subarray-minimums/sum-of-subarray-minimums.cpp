class Solution {
public:
    vector<int> fpsee(vector<int>& arr){
        stack<int>st;
        vector<int>psee(arr.size(),-1);
        for(int i=0; i<arr.size(); i++){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            if(!st.empty()) psee[i]=st.top();
            else psee[i]=-1;
            st.push(i);
        }
        return psee;

    }
    vector<int> fnse(vector<int>& arr){
        stack<int>st;
        vector<int>nse(arr.size(),arr.size());
        for(int i=arr.size()-1; i>=0; i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            if(!st.empty()) nse[i]=st.top();
            else nse[i]=arr.size();
            st.push(i);
        }
        return nse;

    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int>nse;
        nse=fnse(arr);
        vector<int>psee;
        psee= fpsee(arr);
        int mod=1e9+7;
        long long sum=0;
        for(int i=0; i<arr.size(); i++){
            long long left= i-psee[i];
            long long right=nse[i]-i;
            sum=(sum+(left*right*arr[i])%mod)%mod;
        }
        return sum;


        
    }
};