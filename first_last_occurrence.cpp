#include<iostream>
#include<vector>
using namespace std;
vector<int> binary_search(vector<int>&arr,int size,int key)
{
    int first=-1,last=-1;

    //FIRST INDEX
    int start=0,end=size-1;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
        }
        
        else if(arr[mid]<key)
            start=mid+1;
        else 
            end=mid-1;
    }
    //LAST INDEX
     start=0,end=size-1;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            last=mid;
            start=mid+1;
        }
        
        else if(arr[mid]<key)
            start=mid+1;
        else 
            end=mid-1;
    }

    vector<int>a(2);
    a[0]=first;
    a[1]=last;

    return a;
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
    vector<int> result=binary_search(arr,arr.size(),k);
    cout<<"First Index= "<<result[0];
    cout<<"Second Index= "<<result[1];

}