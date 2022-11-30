#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int mini = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        mini = min(prices[i], mini);
        profit = max(profit, (prices[i] - mini));
    }
    return profit;
}
int main()
{
    vector<int> prices = {1, 2, 4};
    cout<<maxProfit(prices);
    return 0;
}
