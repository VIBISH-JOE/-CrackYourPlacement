class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        int sum1 = 0;
        int maxScore = 0;
        for (int i = 0; i < k; i++) {
            sum1 += cardPoints[i];
        }
        maxScore = sum1;
        for (int i = k - 1; i >= 0; i--) {
            sum1 -= cardPoints[i];
            sum1 += cardPoints[cardPoints.size() - (k - i)];
            maxScore = max(maxScore, sum1);
        }

        return maxScore;
    }
};