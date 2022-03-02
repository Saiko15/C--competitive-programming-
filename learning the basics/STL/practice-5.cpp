// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7
#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;


vector<int> maxSlidingWindow(vector<int>& nums, int k) {
	vector<int> ret;

	if ((int)nums.size() < k)
		return ret;

    multiset<int> st;
    for (int i = 0; i < k; ++i) {
		st.insert(-nums[i]);
	}
    ret.push_back(-*st.begin());

    for (int i = k; i < (int)nums.size(); ++i) {
    	st.erase(st.find(-nums[i-k]));
    	st.insert(-nums[i]);
    	ret.push_back(-*st.begin());
	}
    return ret;
}

// vector<int> q;

// vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//     for (int i = 0; i <nums.size() - k ; i++){
//         int max= -9;
//         for (int j = i; j < k+i; ++j){
//             if (nums[j] > max)
//                 max = nums[j];
//             q.push_back(max);
//         }
//     }
//     return q;
// }

int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> n = maxSlidingWindow( nums,  k);
    for ( int i : n)
        cout << i << " ";
        
}