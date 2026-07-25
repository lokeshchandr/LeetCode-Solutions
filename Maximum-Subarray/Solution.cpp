class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
        int maxi = arr[0];
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            
        if (sum > maxi) {
            maxi = sum;
        }
            if (sum < 0) {
                sum = 0; // if the sum  wil be less 
                then 0 then there is no need
                         // of that
                // elemnt
            }
            //  maxi = max(maxi, sum);
        }
        // To consider the sum of the empty subarray
        // uncomment the following check:

        // if (maxi < 0)
        //     maxi = 0;
        return maxi;
    }
};
