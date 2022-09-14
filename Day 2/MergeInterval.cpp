//==>Method 1

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int len=intervals.size();
        if(len<=1)
            return intervals;
        sort(intervals.begin(),intervals.end()); 
        vector<vector<int>> res;
        for(int i=0;i<len;i++){
            int a=intervals[i][0];
            int b=intervals[i][1];
            for(int j=i+1;j<len;j++){
                int c=intervals[j][0];
                int d=intervals[j][1];
                if(b>=c){ 
                    b=max(b,d);
                    i=j;
                }
            } 
            res.push_back({a,b});
        }
        return res;
    }
};


//==>Method 2

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int len=intervals.size();
        if(len<=1)
            return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res; 
        res.push_back(intervals[0]);
        for(int i=1;i<len;i++){
            if(res.back()[1]>=intervals[i][0])
                res.back()[1]=max(res.back()[1], intervals[i][1]);
            else
                res.push_back(intervals[i]);
        }
        return res;
    }
};
