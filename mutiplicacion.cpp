#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define TAM 500

void llenar(int **p)
{
	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
			p[i][j]=rand()%100;
	}
}

int** multiplica(int **a,int **b)
{
	int **c;
	c=new int*[TAM];
	for (int i = 0; i < TAM; ++i)
		c[i]=new int[TAM];

	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			for (int k = 0; k < TAM; ++k)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
	return c;
}

void bucle()
{
    for(int i=0;i<TAM;i++)
        for(int j=0;j<TAM;j++)
            for(int k=0;k<TAM;k++)
                for(int l=0;l<TAM;l++)
                    for(int m=0;m<TAM;m++)
                        for(int n=0;n<TAM;n++)
                            cout<<i+j+k+l+m+n<<" ";

}

int main(int argc, char const *argv[])
{
	srand(time(NULL));

	int **a;
	a=new int*[TAM];
	for (int i = 0; i < TAM; ++i)
		a[i]=new int[TAM];

	int **b;
	b=new int*[TAM];
	for (int i = 0; i < TAM; ++i)
		b[i]=new int[TAM];

	llenar(a);
	llenar(b);

	int **c=multiplica(a,b);

	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
			cout<<c[i][j]<<"\t";
		cout<<endl<<endl;
	}
	
	//bucle();

	return 0;
}