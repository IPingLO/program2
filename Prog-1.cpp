#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int data[10000];

int maxsub(int a, int b);

int main (){

    int sizee=0;
    char ch[20];
    char X[]="x";
    int i=0;
    scanf("%19s",&ch);
    while(strcmp(ch,X) != 0)
    {

        data[i]=atoi(ch);

        i++;
        scanf("%19s",&ch);
    }

    sizee=i;
    int k;
    k=maxsub(0, sizee - 1);
    cout << "max sum= "<< k;


}

int maxsub(int a, int b)
{
    int maxy=data[0];
    int sum;
    for(int i=0;i<b-1;i++)
    {
        sum = 0;
        for (int j = i; j < b-1; j++)
        {
            sum += data[j];
            if(sum>maxy)
                maxy = sum;
            else
                maxy=maxy;
        }
}
return maxy;

}
