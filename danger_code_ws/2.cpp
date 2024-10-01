#include <iostream>
#include <cstdlib>

// Function to dynamically allocate a matrix of size rows x cols
double** allocateMatrix(int rows, int cols) {
    double** matrix = new double*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new double[cols];
    }
    return matrix;
}

// Function to initialize a matrix with random values
void initializeMatrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (std::rand() % 100) / 10.0;  // Random values between 0 and 10
        }
    }
}

// Function to multiply two matrices A and B, result stored in C
void multiplyMatrices(double** A, double** B, double** C, int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0.0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

// Function to free the dynamically allocated memory for a matrix
void deallocateMatrix(double** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    // Matrix dimensions
    int rowsA = 3;
    int colsA = 3;
    int rowsB = colsA;
    int colsB = 3;

    // Dynamically allocate matrices A, B, and C
    double** A = allocateMatrix(rowsA, colsA);
    double** B = allocateMatrix(rowsB, colsB);
    double** C = allocateMatrix(rowsA, colsB);  // Result matrix

    // Initialize matrices A and B with random values
    std::cout << "Matrix A:" << std::endl;
    initializeMatrix(A, rowsA, colsA);
    displayMatrix(A, rowsA, colsA);

    std::cout << "Matrix B:" << std::endl;
    initializeMatrix(B, rowsB, colsB);
    displayMatrix(B, rowsB, colsB);

    // Perform matrix multiplication
    multiplyMatrices(A, B, C, rowsA, colsA, colsB);

    // Display the result matrix C
    std::cout << "Resultant Matrix C (A x B):" << std::endl;
    displayMatrix(C, rowsA, colsB);

    // Deallocate the matrices
    deallocateMatrix(A, rowsA);
    deallocateMatrix(B, rowsB);
    deallocateMatrix(C, rowsA);

    return 0;
}

