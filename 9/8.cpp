int main() { 
int n; string name; int pnumber; map<string,int> mp;

cin>>n;
for(int i=0;i<n;i++){
    cin>>name;
    cin>>pnumber;
    mp.insert(pair<string,int>(name,pnumber));
}
while(n>0){
    cin>>name;
        if (mp.count(name) != 0)
            cout<<mp.find(name)->first<<"="<<mp.find(name)->second<<endl;
        else
            cout<<"Not found"<<endl;
    n--;
}
return 0;
}