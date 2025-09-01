#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force approach
vector<int> pairSumBrute(vector<int> arr, int target)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int majorityEle(vector<int> arr)
{
    int n = arr.size();
    for (int val : arr)
    {
        int count = 0;
        for (int ele : arr)
        {
            if (ele == val)
                count++;
        }
        if (count > n / 2)
            return val;
    }
    return -1;
}

// optimized code for sorted array
vector<int> pairSum(vector<int> arr, int target)
{
    vector<int> ans;
    int n = arr.size(), i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = arr[i] + arr[j];
        if (pairSum > target)
            j--;
        else if (pairSum < target)
            i++;
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int majEleOpt(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int count = 1, ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        else
        {
            count = 1;
            ans = arr[i];
        }
        if (count > n / 2)
            return ans;
    }
    return -1;
}

int mooreVoting(vector<int> arr)
{
    int count = 0, ans = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
            ans = arr[i];
        if (ans == arr[i])
            count++;
        else
            count--;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 5, 6};
    vector<int> arr1 = {1, 2, 2, 1, 2, 2, 1, 6, 2};
    int target = 5;
    vector<int> ans = pairSumBrute(arr, target);
    cout << ans[0] << "," << ans[1] << endl;
    vector<int> pair = pairSum(arr, target);
    cout << pair[0] << "," << pair[1] << endl;
    cout << majorityEle(arr1) << endl;
    cout << majEleOpt(arr1) << endl;
    cout << mooreVoting(arr1) << endl;
    return 0;
}