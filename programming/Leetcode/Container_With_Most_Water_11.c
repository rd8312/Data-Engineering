int maxArea(int* height, int heightSize){
    
    int max = 0, left = 0, right = heightSize - 1;
    
    while(left < right)
    {
        int width = right - left;
        int high = 0;
        
        if (height[left] < height[right])
        {
            high = height[left];
            left++;
        }
        else
        {
            high = height[right];
            right--;
        }
        
        int tmp = width*high;
        
        if (tmp > max)
        {
            max = tmp;
        }
    }
    
    return max;
        
}