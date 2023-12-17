#include<iostream>
using namespace std;
int main()
{
    char c ;
    cin >>c;
    if(c>='a'||c<='z')
    {
        cout<<"letter are in lowercase";

    }
    else if(c>='A'||c<='Z')
    {
        cout<<"letters are in uppercase";
    }
    return 0;
}