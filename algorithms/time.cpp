#include<iostream>
using namespace std;

int main(){
	int start[]={10,12,20};
	int finish[]={20,25,30};

	int lenght=sizeof(start)/sizeof(*start);

	int startSort[10];

	//sort
	int temp;
for(int j=0;j<3;j++){
	for(int i = 0; i<lenght;i++){
		if(start[i]>start[i+1]){
		       temp=start[i];
			start[i]=start[i+1];
			start[i+1]=temp;
		}
		startSort[i]=start[i];
		cout<<startSort[i]<<" ";

	}
			cout<<endl;
}
///////////////////////////////////////
///////////////////////////////////////////


}