#include <bits/stdc++.h>

using namespace std;

int n; //number of elements in arrays

void array_func(int *);
void third_array(int *, int *, int *);
void change(int[]);
void output(int *);

int main(){
	srand(time(NULL));
	cout<<"Input number of elements in arrays: ";
	cin>>n;
	int A[n], C[n], D[n];
	cout<<"array1: ";
  array_func(A);
  cout<<endl;             
	cout<<"array2: ";
  array_func(C);
  cout<<endl;             
	cout<<"array3: ";
  third_array(A, C, D);
  cout<<endl; 
	cout<<"result: ";
  output(D); 
	return 0;
}

void array_func(int *a){
	for (int i=0; i<n; i++){
		*a=rand()%21 - 10;
		cout<<setw(4)<<*a<<' ';
		a++;
	}
	return;
}

void third_array(int *a, int *c, int *d){
	for (int i=0; i<n; i++){
		if (*c>*a)
			*d=*c;
		else if(*a>*c)
			*d=*a;
		else 
			*d=0;
		cout<<setw(4)<<*d<<' ';
		d++; a++; c++;
	}
	return;
}

void change(int D[]){
	int min=D[0], index_min=0;
	for (int i=1; i<n; i++){
		if(D[i]<min){
			min=D[i];
			index_min=i;
		} 	
	}
	D[index_min]=D[n-1];
	D[n-1]=min;
	return;
}

void output(int *d){
	for (int i=0; i<n; i++){
		cout<<setw(4)<<*d<<' ';
		d++;
	}
	return;
}
