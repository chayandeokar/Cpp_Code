int main() {
    int x = 20;
    int *p;
    p = malloc(4);
    *p = 50;
    printf("%d" , *p);
  
} 


*****************************************************

int main() {
    int x = 20;
    int *p;
    p = malloc(4);
    *p = 50; //alloacation done
    printf("%d\n" , *p);
    free(p); //to dealocate the memory
    printf("%d" , *p);
  
} 
