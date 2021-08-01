//strongest wall 1
#include<stdio.h>
#include<vector>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n = 0, m = 0;
    unsigned long x=0;
    cin>>n;
    cin>>m;
    vector<unsigned long> arr;
    
    
    for(int i=0; i<m; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
//sort the vector array
    sort(arr.begin(), arr.end());
    

    //add first two numbers 
    while(arr.size()>n)
    {
        arr[1]+=arr[0];
        arr.erase(arr.begin(), arr.begin()+1);
        if(arr[1]<arr[0])
        {//swap if next number is lesser
            x = arr[1];
            arr[1] = arr[0];
            arr[0] = x;
        }
    }
    cout<<arr[0];
    return 0;
    
}