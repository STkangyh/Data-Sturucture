class SparseMatrics;
class MatrixTerm{
friend class SparseMatrix;
private:
    int row, col, value;
}
class SparseMatrix{
private:
    int rows, cols, terms, capacity;
    // terms= 0이 아닌 항의 총 수, capacity=동적으로 할당받을 크기
    MatrixTerm *smArray;
}