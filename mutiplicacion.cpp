#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define TAM 400

int a[TAM][TAM],b[TAM][TAM],c[TAM][TAM];

void llenar()
{
	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			a[i][j]=3;
			b[i][j]=2;
		}
	}
}

void multiplica()
{
	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			for (int k = 0; k < TAM; ++k)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}

void multiplica6()
{
	int t=TAM;

	for (int i = 0; i < TAM; i=i+t)
	{
		for (int j = 0; j < TAM; j=j+t)
		{
			for (int k = 0; k < TAM; k=k+t)
			{
				//c[i][j]+=a[i][k]*b[k][j];
				for (int l = i; l < min(i+t,TAM); ++l)
				{
					for (int m = j; m < min(j+t,TAM); ++m)
					{
						int sum=0;
						for (int n = k; n < min(k+t,TAM); ++n)
						{
							sum+=a[l][n]*b[n][m];
						}
						c[l][m]=sum;
					}
				}
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	//llenar();

	//multiplica();
	multiplica6();
	
	return 0;
}