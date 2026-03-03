#include "../DSA_Master.h"

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int stable = 0;
        for (size_t i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[stable])
            {
                stable++;
                nums[stable] = nums[i];
            }
        }
        return stable+1;
    }
};

// swap wi with i
void runTestCase(vector<int> nums)
{
    Solution sol;

    cout << "Original: [ ";
    for (int x : nums)
        cout << x << " ";
    cout << "]" << endl;

    int k = sol.removeDuplicates(nums);

    cout << "Modified: [ ";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "] (k = " << k << ")" << endl;
    cout << "-----------------------------" << endl;
}

int main()
{
    // Case 1: Standard sorted array with duplicates
    //          {       j     i                               
  //runTestCase({0, 1,| 0, 1, 1, 2, 2, 3, 3, 4});
    //          {0   1  2  3  4  5  6  7  8  9}

    // Case 2: Array where all elements are the same
    runTestCase({1, 1, 1, 1});

    // Case 3: Empty array
    runTestCase({});

    return 0;
}
