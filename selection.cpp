// #include<iostream>
// using namespace std;
// //SPACE COMPLEXITY-  AUX->O(1)
// // TIME COMPLEXITY - O(N SQR)


// int main()
// {
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//    int *arr=new int[n];
//     // int n=arr[0]/(arr[n-1]);
//     cout<<"Enter the array elements:\n";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         int index=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[index])
//             index=j;
//         }
//         swap(arr[i],arr[index]);
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     delete[] arr;

// }

#include<iostream>
using namespace std;
//SPACE COMPLEXITY-  AUX->O(1)
// TIME COMPLEXITY - O(N SQR)


int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

   int *arr=new int[n];
    // int n=arr[0]/(arr[n-1]);
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete[] arr;

}