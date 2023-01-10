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


*****************************************************

int main() { 
    //stack memory 
    // complie time : 4 byte is confirmed
    int x = 20;
    printf("%d\n" , x);
    x = NULL; //to dealocate the memory
    printf("%d" , x);
  
} 

*****************************************************

int main() { 
    // C++ heap memory
    int x = 20;
    p = new int ;
    delete p;
} 

*****************************************************

int main() { 
    
   //at complie time
   // alloacation at runtime
   //reversed memory
   int b[5] = {};
   b[2] = 20;
   printf("%d" , b[2]);
} 
