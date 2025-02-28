#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }

    for(int i=0;i<nums.size()-1;i++)
    {
        int  index=i;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]<nums[index])
            index=j;
        }
        swap(nums[i],nums[index]);
    }

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    
}