class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int water = 0;
        while(i<j) {
            int minh  = min(height[i] , height[j]);
            water = max(water,minh*(j-i));
            while(i<j && height[i]<=minh) i++;
            while(i<j && height[j]<=minh) j--;
        }
        return water;
    }
};