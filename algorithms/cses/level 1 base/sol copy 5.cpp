#include<iostream>
#include<string>
#include<algorithm>
#include <cmath>
#include <vector>

using namespace std;

int cut(int target, int* list , int len){
    vector<int>v;
    for(int i=0;i<3;i++){
        v.push_back(list[i]);
    }

    if(target==0) return 0;
    if(target<0) return 0;

    // int len=3;
    int totale = 0;
    for(int i=1;i<len+1;i++){
        if(i==2 && len==3){
            int swap = list[1];
            list[1] = list[2];
            list[2] = swap;
        }
        else if(i==3 && len==3){
            int swap = list[2];
            list[2] = list[1];
            list[1] = swap;
            return list[0];
        }
        int c1=cut(target-v[len-i] ,list , len-1)+1;
        totale+=c1;
    }
    return totale;
}

void sol(){
    int n;
    cin>>n;
    int list[3];
    for(int i=0;i<3;i++){
        cin>>list[i];
    }

    cout<<cut(n,list,3)<<endl;
}

int main()
{

    sol();


    return 0;
}
