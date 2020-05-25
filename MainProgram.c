#include <stdio.h>
#include <conio.h>

double Absolut(double X);

int main()
{
	float Nilai;
	Nilai = -543.21;

	printf("%7.2f Nilai Mutlaknya  = %7.2f\n", Nilai, Absolut(Nilai));

	_getch();
	return 0;
}

double Absolut(double X)
{
	if (X < 0)
	{
		X = -X;
		return X;
	}
}