class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> nums3;

        for (int i = 0; i < n; i++)
        {
            nums3.push_back(nums1[i]);
        }

        for (int i = 0; i < m; i++)
        {
            nums3.push_back(nums2[i]);
        }

        sort(nums3.begin(), nums3.end());
        int o = nums3.size();
        if (o % 2 == 1)
        {
            return static_cast<double>(nums3[o / 2]);
        }
        else
        {
            int middle1 = nums3[o / 2 - 1];
            int middle2 = nums3[o / 2];
            return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        }
    }
};