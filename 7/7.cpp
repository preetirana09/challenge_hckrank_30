using namespace std;

vector<string> split_string(string);



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=n-1;j>=0;j--){
        cout<<a[j]<<" ";
    }


    return 0;
}

