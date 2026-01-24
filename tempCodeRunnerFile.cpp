int factorial(int n){
    int res = 1;
    if(n==0) return 1;
    for(int i = n; i>0; i--){
        res *= i;
    }
    return res;
}