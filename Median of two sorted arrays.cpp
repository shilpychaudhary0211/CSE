class Solution {
public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int m = nums1.size();
       int n = nums2.size();
       vector<int> merged;
        int i = 0, j = 0; // pointers for nums1 and nums2
        while (i < m && j < n) { // while both arrays have values remaining
        if (nums1[i] < nums2[j]) {
        merged.push_back(nums1[i]);
        i++;
        } else {
        merged.push_back(nums2[j]);
        j++;
        }
}
// add any remaining values from nums1 or nums2
        while (i < m) {
        merged.push_back(nums1[i]);
        i++;
        }
        while (j < n) {
        merged.push_back(nums2[j]);
        j++;
        }
        int size = merged.size();
        if (size % 2 == 1) { // if size is odd 
        return merged[size / 2];
        } else { // if size is even
        return (merged[size / 2] + merged[size / 2 - 1]) / 2.0;
        }
        }
};
