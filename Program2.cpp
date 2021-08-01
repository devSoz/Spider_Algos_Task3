//Coloring the flags
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//check if prime number
bool primeCheck(int n)
{
    int i, t=1;
    for (i=2; i<=sqrt(n); i++) 
        if (n%i==0) 
            return false;
    return true;

}

int main() 
{
    int n, colorSum=0, color=0;
    cin>>n;
    
//if number is prime, total number of flag is incremented
    if(n==1)
        colorSum=0;
    else 
    {
        colorSum=1;
        color=1;
    }
        
    for(int i=3; i<=n; i+=2)
    {
        if(primeCheck(i))
        {
            color++;
            colorSum+=color;
         }
    }
    
    cout<<colorSum;
    return 0;
}
