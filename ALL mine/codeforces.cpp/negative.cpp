class Solution {
public:
    
    int func(vector<int> &a, int k, int i, vector<int> &number){
        if(i>=a.size()){
            return 0;
        }
    if(number[i]!=-1){
        return number[i];
    }
        int mau=0;
        int nt=func(a,k,i+1,number);
        
        if(a[i]<=k){
            return number[i]= max(func(a,k,i+2,number)+1,nt);
        }
        return number[i]= nt;
    }
    
    bool hk(vector<int> &a, int k, int req){
        vector<int> number(a.size());
        for(int i=0;i<a.size();i++){
            number[i]=-1;
        }
        int maxi=func(a,k,0,number);
        //cout<<k<<" "<<maxi<<" "<<(maxi>=k)<<endl;
        return maxi>=req;
    }
    
    int minCapability(vector<int>& n, int k) {
        int s=0;
        int e=1000000000;
        while(s+1<e){
            int m=s+(e-s)/2;
            if(hk(n,m,k)){
                e=m;
            }
            else{
                s=m;
            }
            
        }
        
        return e;
    }
};