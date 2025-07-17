class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    vector<int> solution;
    stack<int>st;
    int n = nums.size();
    // for (int i = 0; i < n; i++) {
    //     bool found = false;
    //     for (int j = i + 1; j < i + n; j++) {
    //         int ind = j % n;
    //         if (nums[ind] > nums[i]) {
    //             solution.push_back(nums[ind]);
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (!found) {
    //         solution.push_back(-1);
    //     }
    // }
    // return solution;

    //Monotonic stack
    for(int i=2*n-1; i>=0; i--){
        while(!st.empty() && st.top()<=nums[i%n]) st.pop();
        if(i<n){
            if(st.empty()) solution.push_back(-1);
            else solution.push_back(st.top());
        }
        st.push(nums[i%n]);

    }
    reverse(solution.begin(),solution.end());
    return solution;
}

};