#include <iostream>
#include <vector>
using namespace std;

void uniqueVal(vector<int> nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
    }
    cout << ans;
}

int main()
{
    vector<int> vec(5, 1);
    vector<int> nums = {1, 2, 3};
    vector<int> arr = {1, 2, 1, 2, 3};

    nums.push_back(5);
    nums.push_back(15);
    nums.push_back(25);
    nums.pop_back();

    for (int val : nums)
        cout << val << " ";
    cout << endl;
    for (int val : vec)
        cout << val << " ";

    cout << "\nSize is:" << nums.size() << "\ncapacity is:" << nums.capacity();
    cout << "\nFront is:" << nums.front();
    cout << "\nBack is:" << nums.back();
    cout << "\nAt index is:" << nums.at(4) << endl;

    uniqueVal(arr);
    return 0;
}