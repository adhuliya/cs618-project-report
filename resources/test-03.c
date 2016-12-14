// One double pointer.
// Enumerating semantically meaningful operations with one double pointer.
int main() {
    int **ppi;  // ppi = pointer-to pointer-to int

    ppi++;       
    ppi--;        
    ppi = ppi + 1; 
    ppi = ppi - 1;  
    **ppi = 10; 
    *ppi = 0;  
    *ppi = 17;

    return 0;
}
