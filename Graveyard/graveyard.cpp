#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double l = 10000;
    int n,m;
    while(scanf("%d %d",&n,&m)){
        double sum = 0;
        for(int i=1;i<n;i++){
            double s = i/(double(n))*(n+m);
            int n = floor(s+0.5);
            sum += abs(s-n);
        }
        sum *= l/(n+m);
        cout << sum << endl;
    }
    return 0;
}
