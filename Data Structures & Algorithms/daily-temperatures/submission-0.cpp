class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //intuition
        /*
        We can do this by counting the next element bigger than current element and breaking the loop,
        pushing the count into the array. 
        */
        int n = temperatures.size();

        vector<int> ans(n);

        for(int i = 0 ; i <n ; i++)
        {
            int count = 1;

            int j =i+1;
            while(j<n)
            {
                if(temperatures[j] > temperatures[i])
                {
                    break;
                }
                j++;
                count++;
            }
            count = (j==n) ? 0:count;
            ans[i] =  count;
        }
        return ans;
    }
};
