#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&arr,int n,int m,int maxallowedpages)
{
    int students=1,pages=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxallowedpages)
            return false;
        
            if(pages+arr[i]<=maxallowedpages)
                pages+=arr[i];
            else{
                students++;
                pages=arr[i];
            }
    }
    return students > m? false: true;
}

int allocate_books(vector<int>&arr,int n,int m)
{
    if(m>n)
        return -1;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int ans=-1;
    int start=0,end=sum;//RANGE OF THE POSSIBLE ANSWERS
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(isValid(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr={2,1,3,4};
    int n=4,m=2;
    cout<<allocate_books(arr,n,m)<<endl;

}