#include<iostream>
using namespace std;

int gcd1(int x,int y){
	
	if(y == 0)
		return x;
	else
		return gcd1(y,x % y);
}

int main(){
	
	int x,y;
	cin >> x >> y;
	cout << gcd1(x,y) << endl;
	
	return 0;
}
