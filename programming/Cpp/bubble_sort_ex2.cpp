#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// cahr version

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	string *p = new string[n];
	string tmp;
	
	for(int i=0;i<n;i++){
		cin >> p[i];
	}
	
	//bubble sort
	for(int j=n;j>1;j--){
		for(int i=0;i<j-1;i++){
			if(p[i]>p[i+1]){
				tmp = p[i];
				p[i] = p[i+1];
				p[i+1] = tmp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout << p[i] << " ";
	}
	cout << endl;
	
	
	delete []p;
	return 0;
}
