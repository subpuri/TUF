#include<bits/stdc++.h>
using namespace std;

int main(){

	int num[4];
	int a[5] = {1,2,3,4,5};
	int b[7] = {1,2,4,3,5,0,-1};
	int c[] = {1,2};
	int sum =0;
	int max = b[0];
	int max_i = 0;
	int size_of_c = sizeof(c)/sizeof(int);
	cout << "Size of array c = "<<size_of_c<<endl;
	cout << b[2]<<" "<<b[3]<<" "<<b[4]<<endl<<b[2]<<endl;
	for (int i =0; i < 5; i++){
		sum += a[i];
		
	}
	for (int i =1; i < 7; i++){
		if (max < b[i]){
			max = b[i];
			max_i = i;
		}
	}
	cout << "Max = "<<"b["<<max_i<<"]"<<" = "<< max<<endl;

	cout << "Sum = "<<sum<<endl;



	return 0;
}


