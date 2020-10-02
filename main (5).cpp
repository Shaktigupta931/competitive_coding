//g++  5.4.0

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
  int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
      int s=1;
        int c;
        while(k)
        {
           
            if(s%n!=0)
                {
                   
                    c=s;
                    k--;
                }
                s++;
                
         }
        cout<<c;
    }
        
        
 }
            
        
        
