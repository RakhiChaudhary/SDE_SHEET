class Solution {
public:
    int majorityElement(vector<int>& nums) {
         /*      int count =0;
        int element =0;
        for(int i=0;i<nums.size();i++)
        {
            if(count ==0)
                element = nums[i];
            if(nums[i]==element)
                count +=1;
            else 
                count -=1;
        }
        return element;*/
        
        map<int,int>m;
int max ;
for (int i=0;i<nums.size();i++){
++m[nums[i]];
if(m[nums[i]]>nums.size()/2)
max=nums[i];
}
return max;
    }
};