#include<iostream>
using namespace std;

int gcd2(int x,int y){
	
	int r;
	
	while(y != 0){
		
		r = x % y;
		x = y;
		y = r;
	}
	
	return x;
}

int main(){
	
	int x,y;
	cin >> x >> y;
	cout << gcd2(x,y) << endl;
	
	return 0;
}
