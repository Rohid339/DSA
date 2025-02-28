#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int start,int mid,int end)
{
    vector<int> temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++,left++;

        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    //left
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++,left++;
    }
    //right
    while(right<=end)
    {
        temp[index]=arr[right];
        index++,right++;
    }
    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }
}

void mergesort(vector<int>&arr,int start,int end)
{
    if(start==end)
        return; 

    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main()
{
    int m;
    cout<<"Enter the size of the array: ";
    cin>>m;

    vector<int> arr(m);
    int n=arr.size();
    cout<<"Enter the size of the array\n";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}