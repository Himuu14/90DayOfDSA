
//==>Method 1

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
	    // Brute Force Solution Time O(N^2) & Auxiliary Space O(N^2)
        int len=matrix.size();
        vector<vector<int>> B;
        B=matrix;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                B[j][len-i-1]=matrix[i][j];
            }
        }
        matrix=B;  
    }     
};


//==>>Method 2

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
		// Optimal Solution Time O(N^2) & Auxiliary Space O(1)
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};