int odd_count(int x){
    string str_n = to_string(x);
    int od=0;
    for(char c: str_n){
        int a = stoi(c);
        if(a%2!=0){
            od++;
        }
    }
    return od;
}