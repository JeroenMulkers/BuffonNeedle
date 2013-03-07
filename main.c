/* Buffon Needle
 * Author: Jeroen Mulkers
 * Date: 07/03/2013
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.14159265359;

int main(int argc, const char *argv[]){

    printf("Give the length (double) of the needle ]0,1[ (e.g. 0.8): ");
    float length;
    scanf("%f",&length);

    printf("Choose number (int) of random samples (e.g. 10000): ");
    int N;
    scanf("%d",&N);

    FILE *file;
    file = fopen("results.dat","w");
    fprintf(file,"n\tapprox\tapprox-pi\n");

    int Nhit = 0;
    for(int i=0; i<N; i++) {

        double a = 2*PI*rand()/RAND_MAX; // angle
        double x = (double)rand()/RAND_MAX - 0.5; // middle

        double x1 = x - (length/2)*cos(a);
        double x2 = x + (length/2)*cos(a);

        if(x1*x2 <= 0){Nhit++;}

        double pi = 2 * length * (i+1)/Nhit;
        fprintf(file,"%d\t%f\t%f\n",i,pi,pi-PI);
    }

    fclose(file);

    double pi = 2 * length * N/Nhit;

    printf("\n---results------------------------\n\n");
    printf("Approximation with MC simulations:\npi = %f\n\n",pi);
    printf("Exact result:\npi = %f\n",PI);

    return 0;
}
