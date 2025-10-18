#include <stdio.h>

int main()
{
	int dia, diapenultimo = 29, dialimite = 30, mes, mespenultimo = 11, meslimite = 12, anio, anioinicial = 1, aniolimite = 3000;
	scanf_s("%i %i %i", &dia, &mes, &anio);
	if ((dia == 4) && (mes == 10) && (anio == 1582)) //Fecha de cambio del calendario juliano al gregoriano
	{
		dia = 15;
		mes = 10;
		anio = 1582;
	}
	else
	{
		if (mes == 2) //Mes de Febrero
		{
			if (dia == 28)
			{
				if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) //Año bisiesto
				{
					dia = 29;
				}
				else
				{
					dia = 1;
					mes = 3;
				}
			}
			else
			{
				if (dia == 29)
				{
					dia = 1;
					mes = 3;
				}
				else
				{
					if (dia <= 27)
					{
						dia = dia + 1;
					}
				}
			}
		}
		else
		{
			if (mes == 12)
			{
				if (dia == 31)
				{
					dia = 1;
					mes = 1;
					anio = anio + 1;
				}
				else
				{
					if (dia <= 30)
					{
						dia = dia + 1;
					}
				}

			}
			else
			{
				if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
				{
					if (dia == 30)
					{
						dia = 1;
						mes = mes + 1;
					}
					else
					{
						if (dia <= 29)
						{
							dia = dia + 1;
						}
					}
				}
				else
				{
					if (dia == 31)
					{
						dia = 1;
						mes = mes + 1;
					}
					else
					{
						if (dia <= 30)
						{
							dia = dia + 1;
						}
					}
				}
			}
		}
	}
	printf("%2i %2i %4i", dia, mes, anio);
	return 0;
}
