#Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#You must implement a solution with a linear runtime complexity and use only constant extra space.

# code :

class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int n=nums.size();
     int temp=nums[0];   
     for(int i=1;i<n;i++)
     {
        temp=temp^nums[i];
     }
        
       return temp;  
        
    }
}; 
