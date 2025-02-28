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