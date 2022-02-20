// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int i=a;
    while(i>0){
        if (a%i==0 && b%i==0){
            break;
        }
        i--;
    }
    return i;
}
