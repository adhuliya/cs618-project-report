// One Single Pointer and a Double Pointer
// Enumerating semantically meaningful operations using a double pointer and
// a direct pointer to int.
int main() {
    int *pi;    // pi = pointer-to int
    int **ppi;  // ppi = pointer-to pointer-to int

    ppi = &pi;   
    ppi = &pi + 1;
    ppi = &pi - 1;
    pi = *ppi;    
    *ppi = pi;  

    return 0;
}

