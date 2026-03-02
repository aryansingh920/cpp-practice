#include "../DSA_Master.h"

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int current_count = 0;
        int current_candidate = 0;
        int current_element;
        for (size_t i = 0; i < nums.size(); i++)
        {
            current_element = nums[i];
            if (current_count == 0)
            {
                current_candidate = current_element;
                current_count++;
            }
            else
            {
                if(current_element == current_candidate){
                    current_count++;
                }
                else
                {
                    current_count--;
                }
            }
        }
        return current_candidate;
    }
};

int main()
{
    Solution sol;

    // Example 1: [3, 2, 3]
    vector<int> nums1 = {3, 2, 3};
    cout << "Majority Element of [3, 2, 3]: " << sol.majorityElement(nums1) << endl;

    // Example 2: [2, 2, 1, 1, 1, 2, 2]
    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element of [2, 2, 1, 1, 1, 2, 2]: " << sol.majorityElement(nums2) << endl;

    return 0;
}
