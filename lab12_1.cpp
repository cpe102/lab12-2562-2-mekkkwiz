#include <iostream>
#include <cmath>
using namespace std;

void stat(const double [],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

void stat(const double A[],int N,double B[])
{
    double count = N;
    double cc,max,min,sd,x_bar,sum=0,sum_xe2=0;
    int i=0;
    while (i < N)
    {
 
        if (i == 0)
        {

            max = A[0];

            min = A[0];
        }
        else
        {
            if (A[i] > max)
            {
                max = A[i];
            }
            if (A[i] < min)
            {
                min = A[i];
            }
        }

        i++;
    }


    int j = 0;
    while (j < N)
    {
        sum += A[j];
        sum_xe2 += pow(A[j],2);
        j++;
    }
    

    x_bar = sum/N;
    sd = sqrt(((1/count)*sum_xe2)-(pow(x_bar,2)));

    B[0] = x_bar;

    B[1] = sd;

    B[2] = max;

    B[3] = min;


}


