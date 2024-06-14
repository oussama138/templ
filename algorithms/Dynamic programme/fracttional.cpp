#include<iostream>
using namespace std;

int main(){
	int arr[]={10,20,30};
	int arr2[]={60,100,120};
	int lenght=sizeof(arr)/sizeof(*arr);

	int divie[7];

	for(int d=0;d<3;d++){
		divie[d]=arr2[d] / arr[d];
		cout<<divie[3]<<"   "<<endl;
	}

	for(int s=0;s<3;s++){
		divie[s+4]=arr[s];
		cout<<divie[s+4]<<endl<<endl;
	}


int temp;
for(int j=0;j<3;j++){
	for(int i = 0; i<3;i++){
		if(divie[i]<divie[i+1]){
		       temp=divie[i];
			divie[i]=divie[i+1];
			divie[i+1]=temp;

		}
		cout<<divie[i]<<" ";
	}
			cout<<endl;
}
int top=50;
int z=0;
for(int g=0;g<3;g++){
    if(top>divie[g+4]){
        top=top-divie[g+4];
        std::cout << divie[g+4] << std::endl;
    std::cout << top << std::endl;
    z++;

    }
    cout<<endl<<z;

}


}