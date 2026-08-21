class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // Sirf odd numbers ke liye array (size n/2)
        // isPrime[i] represent karta hai number (2*i + 1) ko
        vector<bool> isPrime(n / 2, true);
        int count = 1; // 2 ko prime count kar liya

        for (int i = 1; 2 * i + 1 < n; i++) {
            if (isPrime[i]) {
                count++;
                long long val = 2LL * i + 1;
                // Marking shuru hogi val * val se
                if (val * val < n) {
                    for (long long j = (val * val) / 2; j < n / 2; j += val) {
                        isPrime[j] = false;
                    }
                }
            }
        }

        return count;
    }
};