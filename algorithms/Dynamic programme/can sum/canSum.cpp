
#include <iostream>

using namespace std;

void canSum(){
    
    int target ;
    cin>>target;

    int n;
    cin>>n;

    int nums[n+1];

    for(int i=0;i<n;i++){
    cin>>nums[i];
    }

    bool tabl[target+1];

    tabl[0] = true;

    for(int i=1;i<=target+1;i++){
        tabl[i]=false;
    }

    for(int i=0;i<=target+1;i++){
        for(int j=0;j<n;j++){

        if(tabl[i]==true && nums[j]<=target){
            tabl[i+nums[j]]=true;
        }

        }
    }
    std::cout << tabl[3] << std::endl;
}

int main()
{
    canSum();

    return 0;
}
