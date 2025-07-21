class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n= asteroids.size();
        stack<int>st;
        for(int i=0; i<n; i++){
            if(asteroids[i]>0) st.push(asteroids[i]);
            else{
                while(!st.empty() && st.top()>0 && st.top()< -asteroids[i]){
                    st.pop();
                }
                if(st.empty() || st.top()<0){
                    st.push(asteroids[i]);
                }
                if(!st.empty() && st.top()==-asteroids[i]){
                    st.pop();
                }

            }

        }
        vector<int>ans(st.size());
        while(!st.empty()){
            for(int i= st.size()-1; i>=0; i--){
                ans[i]=st.top();
                st.pop();
            }
        }
        return ans;

        
        
    }
};