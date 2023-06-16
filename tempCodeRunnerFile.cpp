vector<int>v;
    int n;
    cin>>n;
    while(n){
        int bit=n&1;
        v.push_back(bit^1);
        n=n>>1;
    }
    reverse(v.begin(), v.end());
    int res=0;
    int j=0;
    for(auto u:v){
        res+=u*pow(2,j);
        j++;
    }
    cout<<res<<endl;