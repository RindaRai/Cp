#include <iostream>
#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "");

	/*int a, b;
	start:
	printf("Введите число А: ");
	scanf_s("%d", &a);
	printf("Введите число В: ");
	scanf_s("%d", &b);
	if ((a%2==0)&&(b%2!=0))
	{
		printf("Число а - четное, В не четное\n");
	}
	else if ((a%2!=0)&&(b%2==0)){
		printf("Число a - нечетное, b - четное\n");
	}
	else if ((a % 2 != 0) && (b % 2 != 0)) {
		printf("Оба числа нечетные\n");
	}
	else if ((a % 2 == 0) && (b % 2 == 0)) {
		printf("Оба числа четные\n");
	}
	goto start;*/

	/*int k, min, h, l;
	printf("Введите время в часах: ");
	scanf_s("%d", &h);
	printf("Введите время в минутах: ");
	scanf_s("%d", &min);
	k = 24 - h;
	l = 60 - min;
	printf("Количество прошедшего времени после начала суток: %d : %d\n", k, l);
*/
	/*int prib, seb;
	float seb1, rent1, prib1;
	printf("Введите прибыль за прошлый месяц: ");
	scanf_s("%d", &prib);
	printf("Введите себестоемость за прошлый месяц: ");
	scanf_s("%d", &seb);
	seb1 = (float)seb*1.05;
	prib1 = (float)prib*0.95;
	rent1 = prib1 / seb1 * 100;
	printf("Рентабельность = %f\n", rent1);*/

	//int n;
	//printf("Напишите сумму покупки для расчета скидки: ");
	//scanf_s("%d", &n);
	//if (n > 400 || n < 600)
	//{
	//	printf("Скидка 5%");
	// }
	//if (n > 600 || n < 100)
	//{
	//	printf("Скидка 10%");
	//}



	/*int n;
	printf("введите число n");
	scanf_s("%d", &n);

	if ((n % 3) != 0 || (n % 7) == 0)
	{
		printf("Истина");
	}
	else {

		printf("Ложь"); 
	}


	if ((n % 5) == 1 || (n % 4) != 0)
	{
		printf("Истина");
	}
	else {

		printf("Ложь");
	}

	if ((n % 8) == 0 || (n % 11) == 0)
	{
		printf("Истина");
	}
	else {

		printf("Ложь");
	}*/

	//printf("Имя          - PP-12-1\n");
	//printf("Создатель    - студент\n");
	//printf("Размер       - 50МВ\n");
	//printf("Расположение - D:\\Academy\\PP-12-1\n");

	/*printf("Название    : Война и мир\n");
	printf("Автор       : Л. Н. Толстой\n");
	printf("Издательство: Питер\n");
	printf("Страниц     : 500\n");
	*/
	system("pause");

}