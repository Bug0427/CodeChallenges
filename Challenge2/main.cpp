/*
Problem: Kth Largest Element in a Stream

Description: You are given an integer k and a stream of integers 
arriving one-by-one. After each new number arrives, output the 
kth largest element seen so far. If fewer than k numbers have been
seen, output "NA" (or None, depending on your choice).

🎯 Constraints:
	•	1 ≤ k ≤ 100,000
	•	1 ≤ n ≤ 200,000 (number of stream events)
	•	-10^9 ≤ x ≤ 10^9
	•	Time target: O(n log k)
	•	Space target: O(k)

Language: C++
*/
#include <iostream>
#include "LargestElement.h"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cout << "Enter number of elements to be streamed: ";
    cin >> n;
    cout << "Please enter largest element rank: ";
    cin >> k;

    KthLargest tracker(k);

    for (int i = 0; i < n; i++) {
        long long x;
        cout << "Enter next value: ";
        cin >> x;

        long long ans = tracker.add(x);

        // If fewer than k numbers have been seen, output NA
        if (i + 1 < k) {
            cout << "NA\n";
        } else {
            cout << ans << "\n";
        }
    }

    return 0;
}