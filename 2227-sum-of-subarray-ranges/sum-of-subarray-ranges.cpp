class Solution {
public:
    vector<int> findNSE(vector<int>&arr){
        int n= arr.size();
        stack<int>st;
        vector<int>nse;
        for(int i= n-1; i>=0; i-- ){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            if(st.empty()) nse.push_back(n);
            else nse.push_back(st.top());
            st.push(i);
        }
        reverse(nse.begin(), nse.end());

        return nse;
    }

    vector<int> findPSEE(vector<int>&arr){
        int n= arr.size();
        stack<int>st;
        vector<int>psee;
        for(int i= 0; i<n; i++ ){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            if(st.empty()) psee.push_back(-1);
            else psee.push_back(st.top());
            st.push(i);
        }
        return psee;
    }
    vector<int> findNGE(vector<int>&arr){
        int n= arr.size();
        stack<int>st;
        vector<int>nge;
        for(int i= n-1; i>=0; i-- ){
            while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
            if(st.empty()) nge.push_back(n);
            else nge.push_back(st.top());
            st.push(i);
        }
        reverse(nge.begin(), nge.end());

        return nge;
    }

    vector<int> findPGEE(vector<int>&arr){
        int n= arr.size();
        stack<int>st;
        vector<int>pgee;
        for(int i= 0; i<n; i++ ){
            while(!st.empty() && arr[st.top()]<arr[i]) st.pop();
            if(st.empty()) pgee.push_back(-1);
            else pgee.push_back(st.top());
            st.push(i);
        }
        return pgee;
    }
    
    long long sumSubarrayMins(vector<int>& arr) {
        int mod= 1e9+7;
        long long sum=0;
        int n= arr.size();

        vector<int>psee;
        vector<int>nse;
        nse= findNSE(arr);
        psee=findPSEE(arr);
        for(int i=0; i<n; i++){
            long long left= i-psee[i];
            long long right= nse[i]-i;
            sum=(sum+(left*right*arr[i]));
        }
        return sum;
    }

    long long sumSubarrayMaxs(vector<int>& arr) {
        int mod= 1e9+7;
        long long sum=0;
        int n= arr.size();

        vector<int>pgee;
        vector<int>nge;
        nge= findNGE(arr);
        pgee=findPGEE(arr);
        for(int i=0; i<n; i++){
            long long left= i-pgee[i];
            long long right= nge[i]-i;
            sum=(sum+(left*right*arr[i]));
        }
        return sum;
    }
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        sum= sumSubarrayMaxs(nums)- sumSubarrayMins(nums);
        return sum;
    
    
        
    }
};