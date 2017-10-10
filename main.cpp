#include <stdio.h>
#include <iostream>
#include "windows.h"
using namespace std;


char emp = ' ';
char symb = '*';


void drawString(int temp, char symbol)
{
    for(int i=0; i < temp; i++)
        cout << symbol;

}


void SetSpace(int counts)
{
    for(int i=0; i < counts; i++)
        cout << endl;

}


void Half( int counts, bool position )
{
    int temp = counts;

    if(position)
    {
        for(int i =0; i < counts;i++)
        {
            temp--;
            drawString(counts-temp, symb);
            drawString(counts, emp);
            cout << endl;
        }
    }
    else
    {
        for(int i =0; i < counts; i++)
        {
            drawString(temp, symb );
            drawString(counts-temp, emp);
            temp--;

            cout << endl;
        }
    }


}


int main()
{
    int counts;
    cout << "Get Heigth :";
    cin >> counts;

   int temp = counts -1;
   int width = counts;

   for(int i =0; i < counts; i++)
   {
       width--;
       drawString(width,emp);
       drawString(temp-width, symb);
       drawString(counts-width, symb);
       drawString(width,emp);

       if(width == 0)
       {
           SetSpace(1);
           drawString(temp, emp);
           drawString(1 , symb);
       }
       SetSpace(1);
   }

   SetSpace(3);
   Half(counts, true);
   SetSpace(3);
   Half(counts, false);

   exit(0);
}
