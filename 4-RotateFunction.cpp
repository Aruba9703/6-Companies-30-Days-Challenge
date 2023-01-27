#include <iostream>
using namespace std;

class Solution
{
public:
    int maxRotateFunction(vector<int> &nums)
    {
        int nums = [ 4, 3, 2, 6 ];
        int sum = 0, sum1 = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            sum1 += (i * nums[i]);
        }
        ans = sum1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            sum1 += sum - (nums[i] * nums.size());
            ans = max(ans, sum1);
        }
        return ans;
    }
};

// It does this by first calculating the sum of the elements in the input vector, and the initial value of F(i) when the vector is not rotated. It then rotates the vector by one element at a time and updates the value of F(i) for each rotation, keeping track of the maximum value of F(i) seen so far.