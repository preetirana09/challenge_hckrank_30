#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {

    int t;
    string s,s1;
   cin>>t;
    for(int i=0;i<t;i++){
   cin>>s1;
      
        int len=s1.length();
        for(int j=0;j<len;j++){
            if(j%2==0){
              s[j]=s1[j];
                cout<<s[j];
               
            }
         
        }
       cout<<" ";
         for(int j=0;j<len;j++){
            if(j%2!=0){
                s[j]=s1[j];
              cout<<s[j];
               
            }
         
        }
      
       cout<<"\n";
            
            
            
        }
    return 0;
        
    
}
