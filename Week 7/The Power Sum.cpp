int powerSum(int X, int N) {
    vector<int>k;
    for (int a=1;pow(a,N)<=X;++a){
        k.push_back(pow(a,N));
    }
    vector<int> dp (X+1,0);
    dp[0]=1;
    for (int x:k){
        for (int i=X; i>=x;--i){
            dp[i]+=dp[i-x];
        }
    }
    return dp[X];
}
