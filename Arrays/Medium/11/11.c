int maxArea(int* height, int heightSize){
    int l = 0, r = heightSize - 1;
    int area = 0;
    while(l < r){
        int dist = r - l;
        int temp = height[l] < height[r] ? height[l] : height[r];
        area = area < temp * dist ? temp * dist : area;
        if(height[l] < height[r]){
            l++;
        }else{
            r--;
        }
    }
    return area;
}