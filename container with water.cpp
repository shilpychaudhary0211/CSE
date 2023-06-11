class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;

        int l=0;
        int r = height.size() -1;

        while(l<r){
            int lh = height[l];
            int rh = height[r];

            int min_h = min(lh,rh);

            maxArea = max(maxArea, min_h*(r-l));

            if(lh<rh){
                l++;
            }
            else{
                r--;
            }
        }
        return maxArea;
   
    } 
    
};

