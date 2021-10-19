#include<iostream>

using namespace std;
int main()
{
int x = 5;


# reference variable in c++ : alias
int &y = x;

cout<<&x<<endl;
cout<<&y<<endl;
cout<<y<<endl;
cout<<x<<endl;

x++;
y++;

cout<<y<<endl;
cout<<x<<endl;

}

