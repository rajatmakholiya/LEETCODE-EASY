#include <unordered_set>
#include <vector>

class Solution {
public:
    bool checkIfExist(std::vector<int>& arr) {
        std::unordered_set<int> s;

        for (int i : arr) {
            if (s.count(i * 2)) {
                return true;
            }
            if (i % 2 == 0 && s.count(i / 2)) {
                return true;
            }
            s.insert(i);s
        }
        return false;
    }
};
