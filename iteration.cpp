
### Iteration For Loop example ###

#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=10; i++)
	{
		cout<<i << endl;
	}
}

### Iteration For Infinite Loop ###

#include <iostream>
using namespace std;

int main()
{
   for(int i=1; ; i++)
	{
		cout<<i << endl;
		if (i == 1000){
		    break;
		}
	}
}
