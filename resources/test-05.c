// Two double pointers
// ppi = pointer-to pointer-to int
int main () {
    int **ppiA;
    int **ppiB;
    int i;

    ppiA = ppiB;  
    *ppiA = *ppiB; 
    **ppiA = **ppiB;
    i = ppiA - ppiB; 

    return 0;
}
