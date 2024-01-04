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

        int o = nums3.size()/2;
        if (nums3.size() % 2 != 0)
        {
            return (double) nums3[o];

        }
        else
        {
            double median = ((double)nums3[o] + (double)nums3[o - 1]) /2;
            return median;
        }
    }
};
