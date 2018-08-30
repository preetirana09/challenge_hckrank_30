#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 int binaryNum[1000];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
  //  for (int j = i - 1; j >= 0; j--)
      //  cout << binaryNum[j];

  int count = 0; //intitialize count
    int result = 0; //initialize max
     int s= sizeof(binaryNum)/sizeof(binaryNum[0]);
 
    for (int j = i - 1; j >= 0; j--)
    {
        // Reset count when 0 is found
        if (binaryNum[j] == 0)
            count = 0;
 
        // If 1 is found, increment count
        // and update result if count becomes
        // more.
        else
        {
            count++;//increase count
            result = max(result, count);
        }
    }
    cout<< result;

    return 0;
}
