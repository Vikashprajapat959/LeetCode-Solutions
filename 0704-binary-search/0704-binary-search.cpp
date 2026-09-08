class Solution {
public:

    int recursiveBS(vector<int>& arr, int s, int e, int target) {

        // Base Case
        if (s > e) {
            return -1;
        }

        // Mid
        int mid = s + (e - s) / 2;

        // Target mil gaya
        if (arr[mid] == target) {
            return mid;
        }

        // Left side mein search
        if (arr[mid] > target) {
            return recursiveBS(arr, s, mid - 1, target);
        }

        // Right side mein search
        else {
            return recursiveBS(arr, mid + 1, e, target);
        }
    }

    int search(vector<int>& arr, int target) {

        int s = 0;
        int e = arr.size() - 1;

        return recursiveBS(arr, s, e, target);
    }
};