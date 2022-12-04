
//503. Next Greater Element II
//leetcode



/*


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
       vector<int> nge(n);
        stack <int> st;
        for(int i=2*n-1;i>=0;i--)
        {
            while((st.empty()==false) && (st.top()<=nums[i%n]))
            {
                st.pop();
            }
            
                if(st.empty()==false)
                {
                    nge[i%n]=st.top();
                }
                else
                {
                    nge[i%n]=-1;
                }
                
             
            st.push(nums[i%n]);
        }
        return nge;
        
    }
};
*/