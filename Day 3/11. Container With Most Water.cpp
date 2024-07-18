class Solution {
public:
    int maxArea(vector<int>& height) {
        /*int len=height.size();
        int max=0;
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(height[i]<height[j]){
                    if((height[i]*abs(i-j))>max){
                        max=height[i]*abs(i-j);
                    }
                }else{
                    if((height[j]*abs(i-j))>max){
                        max=height[j]*abs(i-j);
                    }
                }
            }
        }
        return max;*/
        int max=0,l=0,r=height.size()-1,ht;
        while(l<r){
            if(height[l]<height[r]){
                ht=height[l];
            }else{
                ht=height[r];
            }
            int area=(r-l)*ht;
            if(area>max){
                max=area;
            }
            if(height[l]<height[r]){
                l+=1;
            }else{
                r-=1;
            }
        }
        return max;
    }
};