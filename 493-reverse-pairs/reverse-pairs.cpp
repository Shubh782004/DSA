class Solution {
public:
    int cnt=0;
    void merge(vector<int>&a,int p, int q, int r){
        int n1=q-p+1, n2=r-q;
        vector<int>L(n1),R(n2);
        for(int i=0; i<n1; i++){
            L[i]=a[p+i];
        }
        for(int i=0; i<n2; i++){
            R[i]=a[q+i+1];
        }
        int x=0,y=0;
        while(x<n1 && y<n2){
            if(L[x]>2LL*R[y]){
                cnt+=n1-x;
                y++;
            }
            else x++;
        }
        int i=0,j=0,k=p;
        while(i<n1 && j<n2){
            if(L[i]>=R[j]){
                a[k]=R[j];
                j++;
            }
            else{
                a[k]=L[i];
                i++;
            }
            k++;
        }
        while (i < n1) {
            a[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            a[k] = R[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>&a,int p, int r){
        if(p>=r) return;
        int q= p+(r-p)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        merge(a,p,q,r);

    }

    int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return cnt;
        
    }
};