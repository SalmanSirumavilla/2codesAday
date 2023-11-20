// ====================== Sum Pair closest to X =======================
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int left = 0, right  = arr.size()-1;
        int closest = INT_MAX;
        std::vector<int> result = {0, 0};
        int current = 0;
        
        while (left<right){
            current = arr[left]+arr[right];
            if(std::abs(x-current)<std::abs(x-closest)){
                closest = current;
                result[0] = arr[left];
                result[1] = arr[right];
            }
            
            if(x<current){
                right--;
            }else{
                left++;
            }
        }
        return result;
    }
};

// Driver Code
int main() {
    int t;
    cout<<"Enter the # of test cases ... : ";
    cin >> t;
    while (t--) {
        int n, x;
        cout<<"Enter the values of n and x : ";
        cin >> n >> x;
        vector<int> arr(n);
        cout<<"Enter the values of input array : ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout<<"Sum Pair closest to X: ";
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

