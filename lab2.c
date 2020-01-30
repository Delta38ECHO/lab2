//Matthew Valenzuela  -> Donut swirl
//Using: GNU Style
/*
	Objectives:
	.Rename x2 or more variables. [.]
	.Make one or more functions [.]
	.Ensure same program functionality is still possible [.]
	.Modify Speed of donut [.]
	.Change ASCII Char set [.]
	.Change color [.]
	
*/

//Includes Here:
#include <stdio.h>
#include <stdlib.h>
//End Includes

//Function will be called so that it can print colored text.
void donutSwirl(); //prototype

int k;
double sin() ,cos();
float A=0, B=0, i, j, z[1760];
char b[1760];

main()
{
	/*
	Variable rename explanation:
	c, d, e, f, g, h, D, l, m, n from previous code renamed to be acceptable/readable.
	Instead of being seemingly random, variable names now model after their sin/cos/tan equivalent.
	*/
    printf("\x1b[2J");
    for(; ; )  //Creates an infinite loop. Why? Don't know...
	{
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; 6.28>j; j+=0.07) 
		{
            for(i=0; 6.28 >i; i+=0.02) 
			{
                float sin_i=sin(i),
                      cos_j=cos(j),
                      sin_A=sin(A),
                      sinj=sin(j),
                      cos_A=cos(A),
                      cos_j2=cos_j+2,
                      tumble=1/(sin_i*cos_j2*sin_A+sinj*cos_A+5),
                      cos_i=cos(i),
                      cos_B=cos(B),
                      sin_B=sin(B),
                      t=sin_i*cos_j2*cos_A-sinj* sin_A;
					  
                int x=40+30*tumble*(cos_i*cos_j2*cos_B-t*sin_B),
                    y= 12+15*tumble*(cos_i*cos_j2*sin_B +t*cos_B),
                    o=x+80*y,
                    N=8*((sinj*sin_A-sin_i*cos_j*cos_A)*cos_B-sin_i*cos_j*sin_A-sinj*cos_A-cos_i *cos_j*sin_B);
					
					//Still unable to split the int multi-thread variable (above) into logical read-language.
					
                if(22>y&&y>0&&x>0&&80>x&&tumble>z[o])
				{
                    z[o]=tumble;
					b[o]="=-===+++===="[N>0?N:0];
					/* String here is a list of characters that will be  printed into array b. Value
                     * at N is used to determine if a character should be printed. o is the index.*/
                }
                }
            }
		donutSwirl();
		
    } //End of for( ; ; ) -> End infinite loop
} //End of main

//Function Definition(s):
void donutSwirl()
{
	//Set to random -> either blue or yellow while swirl runs.
	int color = rand();
	
	if(color % 2 == 0) //If color int is even -> blue, else: yellow
	{
		printf("\033[0;34m"); //Blue
	}
	else
	{
		printf("\33[01;33m"); //Yellow
	}
	
	printf("\x1b[d"); //makes donut.
		
        for(k=0; 1761>k; k++)
		{
			putchar(k%80?b[k]:10);
		}
    A+=0.01;
    B+= 0.02;
}