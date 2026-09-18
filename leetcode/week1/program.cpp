#include <iostream>
#include <vector>
using namespace std;


// 121. Best Time to Buy and Sell Stock
// works but time limit exceed
// int main() {

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxProfit = 0;

//     for(int i = 0; i < n - 1; i++) {

//         if(arr[i] < arr[i + 1]) {

//             int profit = 0;

//             for(int j = i + 1; j < n; j++) {

//                 if(arr[j] - arr[i] > profit) {
//                     profit = arr[j] - arr[i];
//                 }
//             }

//             if(profit > maxProfit) {
//                 maxProfit = profit;
//             }
//         }
//     }

//     cout << maxProfit;

//     return 0;
// }

// optimal solution
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};

// Move Zeroes (#283)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        // Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }

        // Fill remaining positions with zero
        while (index < nums.size()) {
            nums[index] = 0;
            index++;
        }
    }
};


// shuffle array
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);       // xi
            ans.push_back(nums[i + n]);   // yi
        }

        return ans;
    }
};