#include <bits/stdc++.h>
#include "modules8.h"

using namespace std;

int main(){
    int n;
    cout<<"Input the size of the matrix: ";
    cin>>n;
    int **matrix_a = new int *[n], **matrix_b = new int *[n];
    generate_matrix(matrix_a, n);
    matrix_out(matrix_a, n);

    central_element(matrix_a, n);
    create_second_matrix(matrix_b, matrix_a, n);
    matrix_out(matrix_b, n);
    
    delete_matrix(matrix_a, n);
    delete_matrix(matrix_b, n);
}
