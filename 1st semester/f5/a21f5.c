/*Apostolia Maria Sofianopoulou AM: iis21118

�������� ������� a21f5: �� ������ ��� ��������� �� ����� �� �������� 5 ������������ �������� ����� double ��� �� ���� ���������� �� ���� ������.
�� ��������� �� ���������� ��� �������� ������ ���������� ��������� ��� ������ ��� ��� ���������� �� ��� ��� ������ (�� ���������� ����� �� ����������� �������).
� �������� ��������� �� � ������� ���� ��� �������� ��� ��������� (��������� fabs). ��� ����������, �� �� ������� ����� �������� ��� ������ �����: 5.2, -3.2, 7.5, 12.22,
�� ����������� ���������� �����: |-3.2-5.2| = 8.4, |7.5-(-3.2)| = 10.7 ��� |12.22-7.5| = 4.72.  �� ��������� �� ��������� ��� ����� ��� ������ ������ ��� �������� � �������,
�� ��� ������ ����� ��� ��� ������ �������� ������� �� ��� �������� ��� �������������. ���� �������� ��� ������� �� ����������� �� �������� 2 ��������� ������. */

#include <stdio.h>
#include <math.h>
#include "simpio.h"

#define N 5

int main()
{
    int i;
    double array[N];
    double distance[N-1];

    for(i=0;i<N;i++)
    {
        printf("Enter number (%d):",i);
        array[i]=GetReal();
    }

    for(i=0;i<N-1;i++)
        distance[i]=fabs(array[i+1]-array[i]);

    for(i=0;i<N;i++)
    printf("%.2f ",array[i]);
    printf("\n");

    for(i=0;i<N-1;i++)
    printf("%.2f ",distance[i]);

    return 0;
}
