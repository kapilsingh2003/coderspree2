#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

   int space,star;
    space = n/2;
    star = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<space;j++)
            cout<<"\t";
        cout<<"*\t";
        for(int j=0;j<star-2; j++)
            cout<<"\t";
        if(i>0&&i<n-1)
            cout<<"*\t";
        if(i<n/2)
        {
            space--;
            star = star + 2;
        }
        else
        {
            space++;
            star = star - 2;
        }
        cout<<endl;
    }
    return 0;
}