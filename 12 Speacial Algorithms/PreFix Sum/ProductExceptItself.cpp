#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();

    vector<int> ans(n);

    // Step 1: prefix products
    ans[0] = 1;
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Step 2: suffix product and final answer
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    // Output
    cout << "Product except self: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
