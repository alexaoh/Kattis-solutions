#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    vector<int> nums = {0, 0, 0};
    int a, b, c;
    cin >> a >> b >> c;
    nums[0] = a;
    nums[1] = b;
    nums[2] = c;

    sort(nums.begin(), nums.end());
    vector<int> differences = {0, 0, 0};
    adjacent_difference(nums.begin(), nums.end(), differences.begin());

    int diff = 0;
    if (differences[1] == differences[2])
    {
        diff = differences[1];
    } 
    else if (differences[1] < differences[2])
    {
        diff = differences[2]/2;
    } 
    else
    {
        diff = differences[1]/2;
    }

    vector<int> nums2;
    int i = 0;
    while (i < 4)
    {
        nums2.push_back(nums[0]+diff*i);
        i++;    
    }

    auto p = mismatch(nums.begin(), nums.end(), nums2.begin());

    cout << *p.second;

}
