#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int factorial(int n) {
  
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return n*(n-1);


}

int main()
{int n;
    cin >> n;
   int result = factorial(n);

    cout << result << "\n";

  

    return 0;
}
