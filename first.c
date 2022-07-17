#include<stdio.h>

long long binpow(long long a, long long b);
int main() {
    int a=4,b = 2;
    binpow(a,b);
	return 0;
}

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        printf ("%lld\n",res * res * a);
    else
        printf("%lld\n", res * res);
}
