// This program enumerates the semantically meaningful 
// statements possible using a single pointer 
// variable (pointer to int). 
int* func (int *piFormal);
int main() {
    int i = 17;
    int *pi;

    pi = &i;  

    i = *pi; 

    *pi = 19;

    pi = pi + 1;

    pi = pi - 1;

    pi++;      

    pi--;     

    pi = 0;   

    pi = 17; 

    func (pi);

    return 0;
}

int* func (int *piFormal) {
    return piFormal;
}
