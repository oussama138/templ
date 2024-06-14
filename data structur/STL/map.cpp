#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	std::map<string, int>Map;

	Map["hellow"] = 10;
	Map["nine"] = 9;
	Map.insert(make_pair("three" , 3));

	for(auto &elem : Map){
		cout<<elem.first<<" "<<elem.second<<endl;
	}

	return 0;
}