int checkInArray (int*x,int*y,int m,int n,int k){
    int result1 = 0;
    int result2 = 0;
    for (int i=0; i<m; i++){
        if (x[i] == k){
            result1 = 1;
            break;
        }
    }
    for (int j=0; j<n; j++){
        if (y[j]== k){
            result2 = 1;
            break;
        }
    }
    return result1 & result2;
}