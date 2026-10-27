#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void zd1();
void zd2();
void zd3();

int main()
{
	setlocale(LC_CTYPE, "RUS");
	void zd1();
	void zd2();
	void zd3();
	return 0;
}

void zd1()
{
	char c;
	printf("Задание 1");
    printf("Введите символ: ");
    scanf("%c", &c);//считывание с консоли
    switch (c)
	{
	case '0':
		printf("Это цифра\n");
		break;
	case '1':
		printf("Это цифра\n");
		break;
	case '2':
		printf("Это цифра\n");
		break;
	case '3':
		printf("Это цифра\n");
		break;
	case '4':
		printf("Это цифра\n");
		break;
	case '5':
		printf("Это цифра\n");
		break;
	case '6':
		printf("Это цифра\n");
		break;
	case '7':
		printf("Это цифра\n");
		break;
	case '8':
		printf("Это цифра\n");
		break;
	case '9':
		printf("Это цифра\n");
		break;
	default:
		printf("Это не цифра. Это буква или другой символ\n");
		break;
	}
}

void zd2()

{
	float x;
	float y;
	char c;

	printf("Задание 2");

	printf("Введите значения x, y, c: ");
	scanf("%f%c%f", &x, &c, &y);

	switch (c)
	{
	case '+':
	    printf("%f\n", x+y);
	    break;
	case '-':
		printf("%f\n", x-y);
		break;
	case '*':
		printf("%f\n", x*y);
		break;
	case '/':
		printf("%f\n", x/y);
		break;
	case '^':
		printf("%f\n", pow(x,y));
		break;
	default:
		printf("?\n");
		break;
	}
}

void zd3()

{
	printf("Задание 3(так же дз)");
	printf("25 вариант"); // Составить программу, которая в зависимости от школьной оценки 
	                      //выводит словесное наименование (плохо, неудовлетворительно, 
	int mark;           // посредственно, хорошо, отлично)
	printf("Введите оценку: ");
	scanf("%d", &mark);

	switch (mark)
	{
	case 1:
		printf("Оценка:%d (плохо)\n", mark);
		break;
	case 2:
		printf("Оценка:%d (неудовлетворительно)\n", mark);
		break;
	case 3:
		printf("Оценка:%d (посредственно)\n", mark);
		break;
	case 4:
		printf("Оценка:%d (хорошо)\n", mark);
		break;
	case 5:
		printf("Оценка:%d (отлично)\n", mark);
		break;
	default:
		printf("?\n");
		break;
	}
}
