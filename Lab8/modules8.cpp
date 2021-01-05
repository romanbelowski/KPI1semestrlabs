#include <bits/stdc++.h>

using namespace std;

void generate_matrix(int **matrix, int n) {
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
    return;
}

void matrix_out(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(2) << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return;
}

void central_element(int **matrix, int n) {
    if (n % 2 == 0) cout << "There is no central element";
    else cout << "Central element is " << matrix[n / 2][n / 2];
    cout << endl;
    return;
}

void create_second_matrix(int **matrix_b, int **matrix_a, int n) {
    int tmp;
    for (int i = 0; i < n; i++) {
        matrix_b[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix_b[i][j] = matrix_a[i][j];
        }
        for (int j = 0; j <= i - (2 * i / n); j++) {
            tmp = matrix_b[i][j];
            matrix_b[i][j] = matrix_b[i][n - 1 - j];
            matrix_b[i][n - 1 - j] = tmp;
        }
    }
    return;

}

void delete_matrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        delete[]matrix[i];
    }
    delete[]matrix;
    return;
}
