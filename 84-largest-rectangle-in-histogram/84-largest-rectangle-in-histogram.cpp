class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       /* int maxArea=0;
         int n=heights.size();
        for(int i=0;i<n;i++){
           int minHeight=INT_MAX;
            for(int j=i;i<n;j++){
                minHeight=min(minHeight,heights[j]);
                maxArea=max(maxArea,minHeight*(j-i+1));
            }
        }
        return maxArea;*/
      /*  int maxArea = 0;
        int n=arr.size();
  for (int i = 0; i < n; i++) {
    int minHeight = INT_MAX;
    for (int j = i; j < n; j++) {
      minHeight = min(minHeight, arr[j]);
      maxArea = max(maxArea, minHeight * (j - i + 1));
      }
    }
  return maxArea;*/
        
        int n=heights.size();
        stack<int>st;
        int left[n],right[n];
        for(int i=0;i<n;i++){
            while(!st.empty()&& heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty())
                left[i]=0;
            else
                left[i]=st.top()+1;
            st.push(i);
        }
        
        while(!st.empty()){
            st.pop();
        }
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
                right[i]=n-1;
            else
                right[i]=st.top()-1;
            st.push(i);
        }
        
        int maxA=0;
        for(int i=0;i<n;i++){
             maxA = max(maxA, heights[i] * (right[i] - left[i] + 1));
        }
        return maxA;
    }
};