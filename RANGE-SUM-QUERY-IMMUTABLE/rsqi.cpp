#include <iostream>
#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        int l = nums.size();
        prefix.resize(l);
        int prev = 0;
        for (int i = 0; i < l; i++) {
            prev += nums[i];
            prefix[i] = prev;
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) return prefix[right];
        return prefix[right] - prefix[left - 1];
    }
};

int main() {
    vector<string> commands = {"NumArray", "sumRange", "sumRange", "sumRange"};
    vector<vector<int>> inputs = {{-2, 0, 3, -5, 2, -1}, {0, 2}, {2, 5}, {0, 5}};

    NumArray obj(inputs[0]);
    vector<int> results;
    results.push_back(0); // constructor placeholder
    results.push_back(obj.sumRange(inputs[1][0], inputs[1][1]));
    results.push_back(obj.sumRange(inputs[2][0], inputs[2][1]));
    results.push_back(obj.sumRange(inputs[3][0], inputs[3][1]));

    for (int i = 1; i < results.size(); i++) {
        cout << results[i] << " ";
    }
    cout << endl;

    return 0;
}
