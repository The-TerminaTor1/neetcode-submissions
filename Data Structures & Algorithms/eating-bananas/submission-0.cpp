class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int speed =1;

        while(1)
        {
            long long total =0;

            for(int pile :  piles)
            {
                total +=  (pile + speed -1) / speed;
            }
            if(total <= h)
            {
                return speed;
            }
            speed++;
        }
    }
};
