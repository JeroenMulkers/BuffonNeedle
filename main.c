/* Buffon Needle
 * Author: Jeroen Mulkers
 * Date: 07/03/2013
 */

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

const double PI = 3.14159265359;

int main(int argc, const char *argv[]){

    double length=0.8;
    int N = 10000;

    int Nhit = 0;
    for(int i=0; i<N; i++) {

        double a = 2*PI*rand()/RAND_MAX; // angle
        double x = (double)rand()/RAND_MAX - 0.5; // middle

        double x1 = x - (length/2)*cos(a);
        double x2 = x + (length/2)*cos(a);

        if(x1*x2 <= 0){Nhit++;}
    }

    double pi = 2 * length * N/Nhit;
    printf("%f",pi);

    return 0;
}
