#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int mixed_tail = m+n-1;

        while(m>0 && n>0){
            if (nums1[m-1] > nums2[n-1]){
                nums1[mixed_tail] = nums1[m-1];
                m--;
                mixed_tail--;
            }
            else{
                nums1[mixed_tail] = nums2[n-1];
                n--;
                mixed_tail--;
            }                   
        }   
        while(m==0){
            for (int i=0;i<n;i++){
                nums1[i]=nums2[i];
            }
            break;
        }    

    }
};

int main(){
    //input1
    // vector<int> nums1 = {1,2,3,0,0,0};
    // vector<int> nums2 = {2,5,6};
    // int m = 3;
    // int n = 3;

    // //input2
    // vector<int> nums1 = {1};
    // vector<int> nums2 = {};
    // int m = 1;
    // int n = 0;

    //input3
    vector<int> nums1 = {2,0};
    vector<int> nums2 = {1};
    int m = 1;
    int n = 1;

    Solution s;
    s.merge(nums1,m,nums2,n);
    for (int &v:nums1)
        cout<<v<<endl;
}