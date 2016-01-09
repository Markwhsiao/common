/*
   思路：
        蚂蚁碰撞换方向可以当成蚂蚁穿擦而过，只不过两只蚂蚁调换了而已，因为速度一样。
        先当成蚂蚁不用调换方向，而是穿擦而过，然后跟据相互之间的关系来确定码蚁的序号:
        左边的蚂蚁始终在左边
 */
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
class Ant 
{
    public:
        int id;
        int p;
        int direct;//方向-1表向左，0表示正在转向中，1表示向右。
        bool operator <(const Ant & x) const{
            return p < x.p;
        }
};


int main()
{
    int kcase;//case num;
    Ant before[10000];
    int  order[10000];
    scanf("%d",&kcase);
    for(int k=1;k<=kcase;k++){
        int L,T,N;
        scanf("%d%d%d",&L,&T,&N);
        for(int i=0;i<N;i++){
            before[i].id = i;
            char c;
            scanf("%d %c",&before[i].p,&c);
            if(c == 'R') before[i].direct = 1;
            else before[i].direct = -1;
        }
        sort(before,before+N);
        for(int i=0;i<N;i++)
            order[before[i].id] = i;
        for(int i =0;i<N;i++)
            before[i].p = before[i].p+T*before[i].direct;
        sort(before,before+N);
        for(int i=0;i<N;i++)
        {
            if(i< N-1 && before[i].p == before[i+1].p){
                before[i].direct = 0;
                before[i+1].direct = 0;
            }
        }
        cout << "Case #"<<k<<":"<<endl;
        for(int i=0;i<N;i++)
            if(before[order[i]].p < 0 || before[order[i]].p > L)  cout << "Fell off"  <<endl;
            else {
                cout << before[order[i]].p  << " ";
                if(before[order[i]].direct == 0) cout << "Truning"<<endl;
                else if (before[order[i]].direct == 1) cout << "R"<<endl;
                else cout << "L" <<endl;
            } 
        
    }
}
