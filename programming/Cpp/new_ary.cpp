#include <iostream>
//#include <stdlib.h>
//#include <string.h>
#include <cstring>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	
	int *p;
	
	int n;
	cin >> n;
	p = new int[n];
	
	memset(p, 0, sizeof(int)*n);
	for(int i=0; i<n;i++){
		cout << p[i] << " ";
	}
	cout << endl;
	
	delete [] p;
	
	return 0;
}
