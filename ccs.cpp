#include <iostream>

// for custom colors
//#include <stdlib.h>
using namespace std;
void ccs(void);
int main()
{
  //system("color 71");
  ccs();
  int i=0;
  cin>>i;
  return 0;
}
    void ccs(void)
    {
    int i=0;
    int j,z,c;
    long int a,b;
      
    //If we want this program to work indefinitely
    //for (;;)
    //{
    //clrscr();
    cout<<"                **the cost computing system**\n\n";
    cout<<"|=========================================|\n";
    cout<<"|[1]peykan pickup         [2]Nissan pickup|\n";
    cout<<"|[3]Truck without roof    [4]Roofed trucks|\n";
    cout<<"|=========================================|\n\n";
    cout<<"-----------------------------------\n";
    cout<<"<<Please choose your preferred car:    ";
    cin>>z;
    switch(z)
            {
            case 1:
                c=500;
                break;
            case 2:
                c=1000;
                break;
            case 3:
                c=1500;
                break;
            case 4:
                c=2000;
                break;
                default:
                cout<<"            error!!!!!";
            }
    cout<<"\n";
    cout<<"|=========================================================|\n";
    cout<<"|[1]interurban(per km to 2000 usd)                           |\n";
    cout<<"|[2]suburban(per km to 4000 usd)                          |\n";
    cout<<"|[3]interurban'rush hours or holidays'(per km to 3000 usd)|\n";
    cout<<"|=========================================================|\n\n";
    cout<<"-----------------------------------------\n";
    cout<<"<<Please choose one of the options above:  ";
    cin>>j;
    cout<<"\n";
    switch (j)
        {
        case 1:
            cout<<"---------------------------------\n";
            cout<<"<<please enter your distance(km): ";
            cin>>a;
            b=a*(2000+c)+10000;
            cout<<"\n";
            cout<<"/=/=/=/=/=/=/=/=/=/=/=/=/=/=/\n";
            cout<<"##the cost of your transport:\t";
            cout<<b<<" (usd)";
            break;
        case 2:
            cout<<"---------------------------------\n";
            cout<<"<<please enter your distance(km): ";
            cin>>a;
            b=a*(4000+c)+10000;
            cout<<"\n";
            cout<<"/=/=/=/=/=/=/=/=/=/=/=/=/=/=/\n";
            cout<<"##the cost of your transport:\t";
            cout<<b<<" (usd)";
            break;
        case 3:
            cout<<"---------------------------------\n";
            cout<<"<<please enter your distance(km): ";
            cin>>a;
            b=a*(3000+c)+10000;
            cout<<"\n";
            cout<<"/=/=/=/=/=/=/=/=/=/=/=/=/=/=/\n";
            cout<<"##the cost of your transport:\t";
            cout<<b<<" (usd)";
            break;
            default:
            cout<<"            error!!!!!";
        }
    cin>>i;
            //}
    }
