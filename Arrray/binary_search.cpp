#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>&arr,int size,int key)
{
    int start=0,end=size-1;
    
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
            start=mid+1;
        else 
            end=mid-1;
    }

    return -1;
}

int main()
{
    int m;
    cout<<"Enter the size of the array: ";
    cin>>m;
    vector<int> arr(m);
    int k;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key value what have to search: ";
    cin>>k;
    cout<<binary_search(arr,arr.size(),k);

}