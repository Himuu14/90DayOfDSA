//==>Method 1
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxdif=0;
        for(int i(0);i<prices.size();++i){
            for(int j(i+1);j<prices.size();j++){
                int tempdif = prices[j]- prices[i];
                maxdif = max(maxdif, tempdif);
            }
        }
        return maxdif;
    }
};




//==> method 2 (Leetcode pai ye hi chlega)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxdif=0 ,minprice=INT_MAX;
        for(int i(0);i<prices.size();i++){
            minprice =min(minprice, prices[i]);
            maxdif = max(maxdif, prices[i] - minprice);
        }
        return maxdif;
    }
};