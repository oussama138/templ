#include <iostream>

using namespace std;

 #define ll long long

int main()
{
    ll n;
    cin>>n;
    while(n>1){
        if(n%2==0){
            cout << n <<" ";
            n=n/2;
        }
        else{
            cout << n<<" ";
            n=n*3+1;
        }
    }
std::cout << n << std::endl;
    return 0;
}
