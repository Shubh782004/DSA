class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        string num= to_string(n);
        for(int i=0; i <num.size(); i++){
            if(num[i]!='0'){
                int n1= num[i]-'0';
                ans.push_back(n1 * pow(10,num.size()-i-1));
                
            }
        }
        return ans;
        
    }
};