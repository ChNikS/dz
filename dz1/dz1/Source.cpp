#include<iostream>
#include<conio.h>

void main(){
	int n;
	std::cin>>n;
	int *a=new int[n];
	for (int i = 0; i < n; i++){
		std::cin >> a[i];	
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - 1; j++)
		
			if (a[j]>a[j + 1]){ int k = a[j]; a[j] = a[j + 1]; a[j + 1] = k; }
		}
	for (int i = 0; i < n; i++){
		std::cout<< a[i];
	}
	_getch();

}