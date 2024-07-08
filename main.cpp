#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void segregate(vector<int>& nums) {
        int i = 0;
        int j = 0;

        while (j < nums.size()) {
            if ((nums[j] & 1) == 0) {
                rotate(nums, i, j);
                i++;
                j++;
            }
            j++;
        }
    }

    void rotate(vector<int>& nums, int start, int end) {
        int temp = nums[end];
        while (end > start) {
            nums[end] = nums[end - 1];
            end--;
        }
        nums[start] = temp;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 5, 6};

    sol.segregate(nums);

    for (int i = 0; i < 6; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
   

//     vector<int> nums = {1, 2, 3, 4, 5, 6};
//     int n=nums.size();

//     for(int i=0;i<n;i++){
//         if(nums[i]%2==0){
//             nums.push_back(nums[i]);
//         }
//     }
    
//     for(int i=0;i<n;i++){
//         if(nums[i]%2==1){
//             nums.push_back(nums[i]);
//         }
//     }
    

//     for (int i = n; i < nums.size(); i++) {
//         cout << nums[i] << " ";
//     }
//     return 0;
// }

