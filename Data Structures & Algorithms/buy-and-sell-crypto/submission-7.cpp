class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = left + 1;
        int maxProfit = 0;

        while(right < prices.size()){
            if (prices[left] > prices[right]){
                left = right;
                right++;
            } else {
            int localProfit = prices[right] - prices[left];
            maxProfit = std::max(maxProfit, localProfit);
            right++;
            }
        }
        return maxProfit;
    }
};
