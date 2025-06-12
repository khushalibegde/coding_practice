int maxTotalCoins(vector<int> arr, int n, int k) 
{
    deque<int> dq;
    int total = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while (!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();

        dq.push_back(i);

        if (i >= k - 1 && i - (k - 1) < n) {
            total += arr[dq.front()];
        }
    }

    return total;
}
