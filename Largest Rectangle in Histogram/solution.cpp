class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n=height.size();
        stack<int> s;
        int maxh = 0;
        int curr;
        for(int i=0;i<n;i++) {
            if(s.empty() || height[i]>height[s.top()])
                s.push(i);
            else {
                while(!s.empty() && height[i]<height[s.top()]) {
                    int index = s.top();
                    s.pop();
                    if(s.empty()) curr = (i)*height[index];
                    else curr=(i-s.top()-1)*(height[index]);
                    if(curr>maxh)
                        maxh=curr;
                }
                s.push(i);
            }
        }
        int tindex = n-1;
        while(!s.empty()) {
            int index = s.top();
            s.pop();
            if(s.empty()) curr=(tindex+1) *height[index];
            else curr=(tindex-s.top())*height[index];
            if(curr>maxh)
                maxh=curr;
        }
        return maxh;
    }
};