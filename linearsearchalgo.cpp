/******************************************************************************
                           ##only for particular Index ##
*******************************************************************************/
#include <iostream>

using namespace std;
int lwsearch(int arr[] , int s){
    //cout << arr[0] <<endl;
    if (arr[0] == s) {
        return 0;
    }
    else
    {
        return -1;
    } 
}

int main()
{
    int data[] = {1,2,3,4,5,6,7};
    int search = 7;
    
    cout << lwsearch(data , search) << endl;
}




/******************************************************************************
                             ## our Main code ## using for loop
*******************************************************************************/

#include <iostream>

using namespace std;
int lwsearch(int arr[] , int s){
for (int i=0; i<=7 ;i++)
{
   if (arr[i] == s) {
        return 0;
    }
   
}
}

int main()
{
    int data[] = {1,2,3,4,5,6,7};
    int search = 7;
    
    cout << lwsearch(data , search) << endl;
}







/******************************************************************************

                             Linear search Algorithm

*******************************************************************************/

#include <iostream>

using namespace std;
int lwsearch(int data[] , int searchTerm ,int length){
    for (int i=0; i<=length-1 ;i++){
         if (data[i] == searchTerm) {
            return i;
        }
        
    }
    return -1;
}

int main()
{
    int data[] = {1,2,3,4,5,6,7};
    int searchTerm = 7;
    int length = sizeof(data) / sizeof(int);
    cout << lwsearch(data , searchTerm, length ) << endl;
    if (rcode == 0){
        cout<<"we found ..." << endl;
    }
    else{
        cout<<"not found ...."<< endl;
    }
    
}

