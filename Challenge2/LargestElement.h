#ifndef LargestElement_h
#define LargestElement_h

#include <queue>
#include <vector>

using namespace std;

class KthLargest {
public:
    KthLargest(int k);
    long long add(long long value);

private:
    int k;
    priority_queue<long long, vector<long long>, greater<long long>> minHeap;
};
#endif