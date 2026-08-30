class Solution {
public:
    string reorganizeString(string s) {
        vector<int>hash(26,0);
        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']++;
        }
        priority_queue<pair<int,char>>pq;
        for(int i=0; i<26; i++){
            if(hash[i]>0) pq.push({hash[i],char(i+'a')});
        }
        string ans="";
        while(pq.size()>1){
            char c1=pq.top().second;
            int freq1=pq.top().first;
            ans+=c1;
            pq.pop();
            if(freq1!=0) freq1--;
            char c2=pq.top().second;
            int freq2=pq.top().first;
            ans+=c2;
            pq.pop();
            if(freq2!=0) freq2--;
            if(freq1>0)pq.push({freq1,c1});
            if(freq2>0)pq.push({freq2,c2});
        }
        if(pq.size()==1){
            if(pq.top().first==1){
                ans+=pq.top().second;
                return ans;
            }
            else return "";
        }
        return ans;


        
    }
};