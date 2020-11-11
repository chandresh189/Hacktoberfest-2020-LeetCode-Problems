/**
Solution to Flipping an Image at LeetCode in C++
author: chandresh189
ref: https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/565/week-2-november-8th-november-14th/3526/
**/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n=A.size();
        for(int i=0;i<n;i++){
            reverse(A[i].begin(),A[i].end());
        }
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[i].size();j++){
                if(A[i][j]==1)
                    A[i][j]=0;
                else
                    A[i][j]=1;
            }
        }
        return A;
    }
};
