#include<stdio.h>
#include<iostream>
void swap(int&a, int&b)
{
    int x = a; a = b; b =x;
}
/*
   find the k-th element  in  s[bgn,end)
   return the element
   */
int quick_select(int* s, int bgn, int end,int k)
{
    if(end - bgn < k) return -1;
    int i=bgn;
    int j=end;
    for(;;){
        while(s[++i] < s[bgn] && i < j);
        while(s[--j] > s[bgn]);
        if(i > j) break;
        swap(s[i],s[j]);
    }
    swap(s[j],s[bgn]);
    if(j-bgn == k-1)
        return s[j];
    else if(j-bgn > k-1) 
        return quick_select(s,bgn,j,k);
    else 
        return quick_select(s,j+1,end,k-j-1+bgn);
}
/*
   sort the element s[bgn,end)
 */
void quick_sort(int* s, int bgn,int end)
{
    if(end <= bgn+1) return ;
    int i=bgn;
    int j=end;
    for(;;){
        while(s[++i] < s[bgn] && i<j);
        while(s[--j] < s[bgn]);
        if(i > j) break;
        swap(s[j],s[bgn]);
    }
    swap(s[bgn],s[j]);
    quick_sort(s,bgn,j);
    quick_sort(s,j+1,end);
}
