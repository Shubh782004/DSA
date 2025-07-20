class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int n= num.size();
        for(int i=0; i<n; i++){
            while(!st.empty() && k>0 && (st.top()-'0') >(num[i]-'0')){
                st.pop();
                k=k-1;
            }
            st.push(num[i]);
        }
        //Remove remaining elements if iteration is done
        while(k){
            k=k-1;
            st.pop();
        }
        //If k==n means all items are popped
        if(st.empty()) return"0";

        //storing result in new string from the stack
        string res="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        //Removing trailing 0s from back as string is reversed
        while(res.size()!=0 && res.back()=='0'){
            res.pop_back();
        }
        reverse(res.begin(),res.end());
        if(res.empty()) return "0";
        else return res;



        
        
    }
};