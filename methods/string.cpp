 #include <bits/stdc++.h>

using namespace std;

#define ll  unsigned long long
void solu(){
	ll n;
	cin>>n;

	string curr = to_string(n); // integger to string
	curr = curr.substr(0, curr.size()-1);// "34343434" to "3434343"
	curr = curr.substr(1, curr.size()-2);// "34343434" to "434343"
	curr.pop_back();
	cout<<curr;
	string str2 = "2923242";
	curr.swap(str2);//swap
	curr.resize(4); // "2923242" to "2923"

	n = stoi(curr);//string to integger


}

int main() {
	// int ca;
	// cin>>ca;
	// for(int i=0;i<ca;i++)
	solu();

    return 0;
}