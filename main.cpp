/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

  
 
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

 
void PrintWord(int hour, int min)
{
	 
	char *count[] = { "одна", "дві", "три", "чотири", "п'ять", "шiсть", "сiм", "вiсiм", "дев'ять", "десять", "одинадцять", "двонадцять", "тринадцять", "чотирнадцять", "п'ятнадцять", "шiстнадцять", "сiмнадцять", "вiсiмнадцять", "дев'ятнадцять", "двадцять", "двадцять одна", "двадцять двi", "двадцять три", "двадцять чотири", "двадцять п'ять", "двадцять шiсть", "двадцять сiм", "двадцять вiсiм", "двадцять дев'ять" };
 
	char *past[] = { "першої", "другої", "трьох", "чотирьох", "п'яти", "шостої", "сьому", "восьмої", "дев'ятої", "десяти", "одинадцяти", "двонадцяти", "тринадцяти", "чотирнадцяти", "п'ятнадцяти", "шiстнадцяти", "сiмнадцяти", "вiсiмнадцяти", "дев'ятнадцяти", "двадцяти", "двадцять одна", "двадцяти двох", "двадцяти трьох", "двадцяти чотирьох" };
 
	if (hour <24 && min <= 59)
	{
	 
		if (min == 0)
		{
			if (hour == 1 || hour == 21)
				printf("%s година нуль хвилин", count[hour - 1]);
			else if (((hour >= 2) && (hour <= 4)) || ((hour >= 22) && (hour < 24)))
				printf("%s години нуль хвилин", count[hour - 1]);
			else if (hour >= 5 && hour <= 20)
				printf("%s годин нуль хвилин", count[hour - 1]);
		}
	 
		else if (min > 30)
		{
			if (min == 45 && hour != 6)
				printf("чверть до %s", past[hour]);
			else if (min == 45 && hour == 6)
				printf("чверть на %s", past[hour]);
			if (min == 59 && hour != 6 && hour != 18)
				printf("%s хвилина до %s", count[60 - min - 1], past[(hour % 24) % 12]);
			else if (min == 59 && (hour == 6 || hour == 18))
				printf("%s хвилина до сьомої", count[60 - min - 1]);
			else if ((min != 45 && min != 59) && (hour != 6 && hour != 18))
			{
				if (min == 39)
					printf("%s хвилина до %s", count[60 - min - 1], past[(hour % 24) % 12]);
				if (((min >= 31) && (min <= 35)) || ((min >= 40) && (min <= 55)))
					printf("%s хвилин до %s", count[60 - min - 1], past[(hour % 24) % 12]);
				if (((min >= 36) && (min <= 38)) || (min == 56 || min == 57 || min == 58))
					printf("%s хвилини до %s", count[60 - min - 1], past[(hour % 24) % 12]);
			}
			else if ((min != 45 && min != 59) && (hour == 6 || hour == 18))
			{
				if (min == 39)
					printf("%s хвилина до сьомої", count[60 - min - 1]);
				if (((min >= 31) && (min <= 35)) || ((min >= 40) && (min <= 55)))
					printf("%s хвилин до сьомої", count[60 - min - 1]);
				if (((min >= 36) && (min <= 38)) || (min == 56 || min == 57 || min == 58))
					printf("%s хвилини до сьомої", count[60 - min - 1]);
			}
		}
	 
		else if (min < 30)
		{
			if (min == 1 && (hour != 6 && hour != 18))
				printf("%s хвилина пiсля %s", count[min - 1], past[(hour % 24) % 12]);
			else if (min == 1 && (hour == 6 || hour == 18))
				printf("%s хвилина пiсля сьоми", count[min - 1]);
			if (min == 15 && (hour != 6 && hour != 18))
				printf("чверть пiсля %s", past[(hour % 24) % 12]);
			else if (min == 15 && (hour == 6 || hour == 18))
				printf("чверть пiсля сьомої");
			else if (min != 15 && min != 30 && min != 1)//cgsjkcfsd
			{
				if (hour == 1 || hour == 21) {
					if (min == 21)
						printf("%s година %s хвилина", count[hour - 1], count[min - 1]);
					else if (((min >= 2) && (min <= 4)) || ((min >= 22) && (min < 24)))
						printf("%s година %s хвилини", count[hour - 1], count[min - 1]);
					else if ((min >= 5 && min <= 20) || (min >= 25 && min <= 29))
						printf("%s година %s хвилин", count[hour - 1], count[min - 1]);
				}
				if (((hour >= 2) && (hour <= 4)) || ((hour >= 22) && (hour < 24))) {
					if (min == 21)
						printf("%s години %s хвилина", count[hour - 1], count[min - 1]);
					else if (((min >= 2) && (min <= 4)) || ((min >= 22) && (min < 24)))
						printf("%s години %s хвилини", count[hour - 1], count[min - 1]);
					else if ((min >= 5 && min <= 20) || (min >= 25 && min <= 29))
						printf("%s години %s хвилин", count[hour - 1], count[min - 1]);
				}
				if (hour >= 5 && hour <= 20) {
					if (min == 21)
						printf("%s годин %s хвилина", count[hour - 1], count[min - 1]);
					else if (((min >= 2) && (min <= 4)) || ((min >= 22) && (min < 24)))
						printf("%s годин %s хвилини", count[hour - 1], count[min - 1]);
					else if ((min >= 5 && min <= 20) || (min >= 25 && min <= 29))
						printf("%s годин %s хвилин", count[hour - 1], count[min - 1]);
				}
			}

		}
		else if (min == 30)
		{
			if (hour == 1 || hour == 21)
				printf("%s година тридцять хвилин", count[hour - 1]);
			else if (((hour >= 2) && (hour <= 4)) || ((hour >= 22) && (hour <= 24)))
				printf("%s години тридцять хвилин", count[hour - 1]);
			else if (hour >= 5 && hour <= 20)
				printf("%s годин тридцять хвилин", count[hour - 1]);
		}
	}
 
	else if (hour==111 && min==0)
		_Exit(EXIT_SUCCESS);
	else
	 
		printf("Результат обробки: Введiть коректнi години...\n");
	return;
}

int main()
{
	setlocale(LC_ALL,"Ukr");
	int hour, min;
	while (1)
	{
		printf("\nВедiть час числами (гг хх):");
		scanf("%u%u", &hour, &min);
		PrintWord(hour, min);
	}	
    return 0;
}

