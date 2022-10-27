// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,table,k;
//     cout<<"Enter the value for how we have to run the table "<<endl;
//     cin>>k;
//     cout<<"Enter the value for table"<<endl;
//     cin>> n ;
//     for(int i=2;i<=k;i++)
//     {
//         table=n*i;
//         cout << table<<endl;
//     }
    
// }
 // for reverse
#include<iostream>
using namespace std;
int main()
{
    int i,n=1,m,a;
    cout<<"\nEnter the limit:";
    cin>>i;
    cout<<"\nEnter the table's number:";
    cin>>a;
    while(i>=n)
    {
        cout<<"\n"<<i<<"*"<<a<<"="<<i*a;
        i--;
    }
    return 0;
}