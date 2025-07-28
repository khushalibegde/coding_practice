class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        int N = A.size(), res = N + 1;
        deque<int> d;
        vector<long> prefix(N + 1, 0);

        for (int i = 0; i < N; i++)
            prefix[i + 1] = prefix[i] + A[i];

        for (int i = 0; i <= N; i++) {
            while (!d.empty() && prefix[i] - prefix[d.front()] >= K) {
                res = min(res, i - d.front());
                d.pop_front();
            }
            while (!d.empty() && prefix[i] <= prefix[d.back()])
                d.pop_back();
            d.push_back(i);
        }
        return res <= N ? res : -1;
    }
};
