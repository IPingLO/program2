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


int maxsub(int left, int right)
{
        if(right == left) return data[left];
        int middle = (left+right)/2;
        int leftans = maxsub(left, middle);
        int rightans = maxsub(middle+1, right);
        int leftmax = data[middle];
        int rightmax = data[middle+1];
        int temp = 0;
        for(int i=middle;i>=left;i--) {
            temp += data[i];
            if(temp > leftmax) leftmax = temp;
        }
        temp = 0;
        for(int i=middle+1;i<=right;i++) {
            temp += data[i];
            if(temp > rightmax) rightmax = temp;
        }

        if((leftans>rightans) && leftans>leftmax+rightmax)
            return leftans;
        else if ((leftans<rightans) && rightans>leftmax+rightmax)
            return rightans;
        else if((leftmax+rightmax)>leftans && (leftmax+rightmax)>rightans)
            return leftmax+rightmax;

}



