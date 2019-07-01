#include<stdio.h>
#include<math.h>
int main(){

    double real=0,imag=0;
    double in[4][2],out[4][2];


    for(int i=0;i<4;i++)
        for(int j=0;j<2;j++)
            scanf("%lf",&in[i][j]);


    for(int k=0;k<4;k++){
        
        for(int n=0;n<4;n++){
            double theta=((2)*(3.14)*k*n)/4;
            real+= in[n][0]*cos(theta) - in[n][1]*sin(theta);
            imag+= in[n][0]*sin(theta) + in[n][1]*cos(theta);
        }
        out[k][0]=real;
        out[k][1]=imag;
        real=0;imag=0;
    }

    for(int m=0;m<4;m++)
        printf("%.1lf + %.1lfi\n",out[m][0],out[m][1]);

    return 0;
}