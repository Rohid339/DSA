#include<iostream> 
#include<vector>
using namespace std;

int partition(vector<int>&arr,int start,int end)
{
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(vector<int>&arr,int start,int end)
{
    if(start>=end)
        return;
    int pivot=partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}

int main()
{
    int m;
    cout<<"Enter the size of the array:";
    cin>>m;
    vector<int> arr(m);
    cout<<"Enter the array elements\n";
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

    quicksort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

}