class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(); 
        for (int lo = 0, hi = m*n; lo < hi; ) {
            int mid = lo + (hi - lo)/2; 
            if (matrix[mid/n][mid%n] < target) lo = mid + 1; 
            else if (matrix[mid/n][mid%n] == target) return true; 
            else hi = mid; 
        }
        return false; 
    }
};