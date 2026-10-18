class Solution {
public:
//TWO POINTER 
    int maxArea(vector<int>& height) {
        int left = 0 , right = height.size() - 1 , maxWater = 0;
        while (left < right) {
            // Calculate the area
            int currentArea = min(height[left], height[right]) * (right - left);//hight * length 
            // Update the maximum area
            maxWater = max(maxWater, currentArea);
            // Move the pointer pointing to the shorter line
            //highet is variable and length is constant area directly proportiona to length , ans can be maximized 
            if (height[left] < height[right])left++;
            else {right--;}
        }
        return maxWater; 
    }
};