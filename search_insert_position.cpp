#include<iostream>
#include<vector>
using namespace std;

int search_position(vector<int> &arr,int target)
{
    int start=0,end=arr.size()-1,ans=arr.size(),mid;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<target)
            start=mid+1;
        else{
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the array elements\n";
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    
    int result=search_position(arr,target);

    cout<<"The index of the target value is: "<<result;
}