#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[100],f=0,clct=0,i,j;

    ifstream proin("input.txt");
    ofstream proout("output.txt");

    for(i=0;!proin.eof();i++)
    {
        proin>>a[i];
        clct++;
    }

    for(i=0;i<clct;i++)
    {
        if(a[i]==0 || a[i]==1)
        {
            f=1;
        }
        else
        {
            for(j=2;j<a[i]/2;j++)
            {
                if(a[i]%j==0)
                {
                    f=1;
                    break;
                }
                else
                {
                    f=2;
                }
            }
        }

        if(f==1)
        {
            proout<<a[i]<< " NO,IT'S NOT A PRIME NUMBER... " <<endl;
        }
        if(f==2)
        {
            proout<<a[i]<< " YOU GODDEM RIGHT!IT'S A PRIME NUMBER...YOU GOT THIS " <<endl;
        }

    }


}
