class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
      int n=nums.size(); 
       int k=0; 
       for(int i=1;i<n;i++)
       {
           if(nums[k]!=nums[i])
           {
               k++;
               nums[k]=nums[i];
           }
       }
       
       
     return n==0?0:k+1;
        
    }       
    
};
