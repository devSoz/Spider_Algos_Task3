//Ronny the snake
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long int sum,i;
    int c=0;
    string str;

    cin >> str;
    
	//Since the length is large, its taken as string and sum of digit is calculated till its single digit
    while(str.length()>1)
    {
        sum=0;
        for(i=0;i<str.length();i++)
            sum+= str[i] - '0';
        str=to_string(sum);
        c++;
    }
    
   
    cout<<c;

}
