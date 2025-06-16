#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if it's possible to place cows with at least 'minDist' distance apart
bool canPlaceCows(const vector<int>& stalls, int N, int C, int minDist) {
    int lastPlacedCow = stalls[0]; // Place the first cow in the first stall
    int count = 1; // One cow is placed

    // Try to place the remaining cows
    for (int i = 1; i < N; ++i) {
        if (stalls[i] - lastPlacedCow >= minDist) {
            count++; // Place a cow here
            lastPlacedCow = stalls[i]; // Update the position of the last placed cow
            if (count == C) {
                return true; // All cows have been placed successfully
            }
        }
    }
    return false; // Not all cows could be placed with the given minimum distance
}

int largestMinDistance(vector<int>& stalls, int N, int C) {
    sort(stalls.begin(), stalls.end()); // Sort the stalls

    int low = 1; // The minimum possible distance
    int high = stalls[N - 1] - stalls[0]; // The maximum possible distance

    int best = 0; // Variable to store the best (largest minimum) distance

    // Binary search to find the largest minimum distance
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, N, C, mid)) {
            best = mid; // Update the best distance
            low = mid + 1; // Try for a larger minimum distance
        } else {
            high = mid - 1; // Try for a smaller minimum distance
        }
    }

    return best;
}

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> stalls(N);
    for (int i = 0; i < N; ++i) {
        cin >> stalls[i];
    }

    cout << largestMinDistance(stalls, N, C) << endl;

    return 0;
}
