class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        int a,b,c=1,d=0,j;
        int i=0;            //declaring
        while (i<=n-2){
        a=nums[i];
        b=target-a;
        j=i+1;
        while(j<=n-1){
            if (b==nums[j]){
                c=j;                //inner loop for getting indexes of nums if true
                d=i;
                break;
            }else{
            
            }
            j++;
        }      
            j=0;    //resetting the inner loop
            i++;
        }
        return {d,c};
    }
}; 


//takes the first element form the loop ie 0 from i's value, checks it against all elements w/ j's value
//if none, i increments, and j repeats after reset
