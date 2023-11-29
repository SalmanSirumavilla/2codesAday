#include "lib.hpp"

namespace decCodes{

    vector<int> duplicates(long long arr[], int n){
        std::unordered_set<int> seenSet;
        std::unordered_set<int> duplicatesSet;
        
        for (int i; i<n; i++) {
            if (seenSet.count(arr[i]) > 0) {
                duplicatesSet.insert(arr[i]);
            } else {
                seenSet.insert(arr[i]);
            }
        }

        std::vector<int> result(duplicatesSet.begin(), duplicatesSet.end());
        std::sort(result.begin(), result.end());
    
        return result.empty() ? std::vector<int>{-1} : result;
    }
}
