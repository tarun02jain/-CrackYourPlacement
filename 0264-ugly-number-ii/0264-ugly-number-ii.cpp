class Solution {
public:
    int nthUglyNumber(int n) {
        if(n == 1) return 1;

        vector<int>ans(n);
        ans[0] =1;
        int pt2 = 0;
        int pt3 = 0;
        int pt5 = 0;

        for(int i = 1; i<n; i++){
            
            ans[i] = min({2*ans[pt2] , 3*ans[pt3] , 5*ans[pt5]});
            if(ans[i] == 2 * ans[pt2]) pt2++;
            if(ans[i] == 3 * ans[pt3]) pt3++;
            if(ans[i] == 5 * ans[pt5]) pt5++;
        }
        return ans[n-1];
    }
};