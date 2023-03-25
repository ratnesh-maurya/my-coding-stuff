   int n,q;
    cin >> n>>q;
    int dev[n];
    int sum=0;
     for(int i=0;i<n;i++){
        cin>>dev[i];
        sum+=dev[i];
    }
    vector<int>prefix(n,0);
    prefix[0]=dev[0];
    for(int i=1;i<n;i++){
        prefix[i]=dev[i]+prefix[i-1];
    }
   
    for(int i=0;i<q;i++){
        int p,q,r;
        cin>>p>>q>>r;
          int sum1=prefix[q-1]-(prefix[p-1]-dev[p-1]);
        int sum2=sum-sum1+(q-p+1)*r;
        if(sum2%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}