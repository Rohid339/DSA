#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the size of the array: ";
    cin>>m;
    vector<int> arr(m);
    int n=arr.size();
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}