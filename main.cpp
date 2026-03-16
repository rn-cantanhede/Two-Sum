#include <unordered_map>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mapIndex;

        for (int i = 0; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            auto it = mapIndex.find(temp);

            if (it != mapIndex.end())
            {
                return {it->second, i};
                break;
            }
            else
            {
                mapIndex[nums[i]] = i;
            };
        };
        return {};
    };
};

int main()
{
    int target = 5;
    vector<int> list{1, 2, 3, 4};

    Solution mySolution;
    mySolution.twoSum(list, target);

    return 0;
};
