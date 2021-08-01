//Weakest wall
#include<stdio.h>
#include<vector>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, k, flag=0;
    unsigned int x, minSum;
    cin>>k>>n;
    vector<unsigned int> arr;
    
    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }

//add the smallest adjacent sum and iterate till k.
    for(int i=0; i<(n-k); i++)
    {
        flag=0;
        minSum=arr[0]+arr[1];
        for(int j=1; j<(arr.size()-1); j++)
        {
            if((arr[j]+arr[j+1])<minSum)
            {
                flag=j;
                minSum=(arr[j]+arr[j+1]);
            }
        }
        
        arr[flag]=minSum;
        arr.erase(arr.begin()+(flag+1), arr.begin()+(flag+2));

    }
    
   
    cout<<*max_element(arr.begin(), arr.end()) ;
    
    return 0;
}