class Solution {
public:
    int maxProfit(vector<int>& prices) {


        // set both to be the start of the prices array
        int i = 0;
        int valley = prices[0];
        int peak = prices[0];
        int maxProfit = 0;
        int oneBeforeEndofPrices = prices.size() - 1;
        while(i < oneBeforeEndofPrices)
        {
            // find valley
            while(i < oneBeforeEndofPrices && prices[i+1]<= prices[i])
                i++;
            valley = prices[i];
            //find peak
            while(i < oneBeforeEndofPrices && prices[i+1] >= prices[i])
                i++;
            peak = prices[i];

            int profit = peak - valley;

            maxProfit = maxProfit + profit;


        }
        return maxProfit;



    }
};
