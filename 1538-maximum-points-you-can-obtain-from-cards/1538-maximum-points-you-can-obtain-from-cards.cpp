class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxPoints = 0;
        int n = cardPoints.size();
        int totalsum = 0;
        for(int i = 0; i<n; i++){
            totalsum += cardPoints[i];
        }
        if(k == n)return totalsum;
        int i = 0;
        int j = 0;
        int sum = 0;
        while(j<n){
             sum += cardPoints[j];
            if((j-i+1)== (n-k)){
                maxPoints = max(maxPoints , (totalsum - sum));
                sum -= cardPoints[i];
                i++;
            }
            j++;
        }
        return maxPoints;
    }
};