#include <stdio.h>
int aantalcorrecties = 0;
int trigger = 1;
int main()
{
    int intarray[] = {10,69,1,8,6,4,3,87,99,65,666,22,88,6,25,36,97};
    
    while(trigger > 0){
        int getal1;
        int getal2;
        //printf ("loop\n");
    aantalcorrecties = 0;    
    for(int i= 0; i<16; i++)
    {
       getal1 = intarray[i];
       getal2 = intarray[i+1];
       //printf("%d,%d\n",getal1,getal2);
     
       if(getal2>getal1)
       {
          aantalcorrecties++;
           intarray[i+1] = getal1;
           //aantalcorrecties++;
           intarray[i] = getal2;
       }
    }
    
     if (aantalcorrecties > 0) {
           trigger = 1;
       }
       if (aantalcorrecties == 0){
           
           trigger = 0;
           
       }
    }
    
    for(int i= 0; i<17; i++)
    {
    printf("%d ",intarray[i]);
    }
}