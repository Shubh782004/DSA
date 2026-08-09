class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int n= prices.size()-1;
        int m= discounts.size()-1;
        int i=n,j=m;
        double total_price=0;
        while(i>=0 && j>=0){
            double discount_price=(double)(prices[i])*(100-discounts[j]);
            total_price+= discount_price/100;
            i--;
            j--;
        }
        while(i>=0){
            total_price+=prices[i];
            i--;
        }
        return total_price;


        
    }
};