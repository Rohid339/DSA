#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    int s=arr.size();
    cout<<"Enter the element in array: ";
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    for(int i=s-2;i>=0;i--)
    {
        bool swapped=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
        break;
    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }


 }