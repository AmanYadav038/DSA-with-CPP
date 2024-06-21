class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size(), satisfied = 0;
        for(int i = 0; i < n; i++) {
            if(grumpy[i] == 0) {
                satisfied += customers[i];
                customers[i] = 0;
            }
        }

        int i = 0, sum = 0, max = 0;
        while(i < minutes) {
            sum += customers[i];
            i++;
        }
        max = sum;

        while(i < n) {
            sum -= customers[i - minutes];
            sum += customers[i];
            max = std::max(sum, max);
            i++;
        }
        return max + satisfied;
    }
};