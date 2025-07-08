#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
    public:
    int MaxSum(vector<int>& arr) 
    {
      int size = arr.size();
      int max_sum = INT_MIN;
      int cur_sum = 0;

      for(int value:arr) 
      {
         cur_sum += value;                      //kadane's Algorithm
         max_sum = max(cur_sum,max_sum);        // algo works on "small positive no. + large negative no. = large negative" approach
               
         if(cur_sum < 0)
         {
            cur_sum = 0;                       //So, we can do one thing, make large negative = 0
         }                                     //because, large negative will always reduce the sum
      }

      return max_sum;
    }
};

int main() {
    vector<int> arr = {2,3,-8,7,-1,2,3};
    Solution sol;
    int max_sum = sol.MaxSum(arr);
    cout << max_sum;

    return 0;
}
