#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
 
    for(int col =0; col <mCols; col++){
        if(col&1){
            // odd- bott to top
            for(int row = nRows-1; row>=0; row--){
                // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }

        else{
            // o or even- top to bot
            for(int row = 0; row< nRows; row++){
                // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}