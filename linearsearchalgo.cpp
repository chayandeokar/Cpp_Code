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
