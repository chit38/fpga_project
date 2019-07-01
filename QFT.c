#include<stdio.h>
#include<math.h>
int main(){

    double real=0,imag=0,theta=0;
    double in[8],out[8][2];


    for(int i=0;i<8;i++)
            scanf("%lf",&in[i]);


    for(int k=0;k<8;k++){
        
        for(int n=0;n<8;n++){
            theta=((2)*(3.14)*k*n)/8;
            real+= in[n]*cos(theta);
            imag+= in[n]*sin(theta);
        }
        out[k][0]=real/(2*sqrt(2));
        out[k][1]=imag/(2*sqrt(2));
        real=0;imag=0;theta=0;
    }

    for(int m=0;m<8;m++)
        printf("%.1lf %.1lf\n",out[m][0],out[m][1]);

    return 0;
}