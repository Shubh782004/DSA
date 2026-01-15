class Solution {
public:
    double areaUnder(vector<vector<int>>&squares,double y){
        double ar=0;
        for(int i=0; i<squares.size(); i++){
            double y1=(double)squares[i][1];
            double l=(double)squares[i][2];
            double yt= y1+l;
            if(yt<=y){
                ar+=l*l;
            }
            else if(y>y1 && y<yt){
                ar+=l*(y-y1);
            }
            else continue;
        }
        return ar;
    }
    double separateSquares(vector<vector<int>>& squares) {
        double area=0;
        int y_min=INT_MAX, y_max=INT_MIN;
        for(int i=0; i<squares.size(); i++){
            area+=(double)squares[i][2]*(double)squares[i][2];
            y_min=min(y_min,squares[i][1]);
            y_max=max(y_max,squares[i][1]+squares[i][2]);
        }
        double target=area/2.0;

        double low=(double)y_min;
        double high=(double)y_max;
        while((high-low)>=0.00001){
            double mid=low+(high-low)/2;
            double a= areaUnder(squares,mid);
            if(a<target){
                low=mid;
            }
            else high=mid;
        }
        return high;

        


        
    }
};