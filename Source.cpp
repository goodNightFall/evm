#include <iostream>

void task1()
{
	puts("Группа: ПИН-36; Номер: 10; Состав: Савин Денис, Оглодков Вадим");
}


#define printsizeof(value) printf("sizeof of %-13s %2d \n", #value, sizeof(value));

void task2()
{
	printsizeof(char);
	printsizeof(signed char);
	printsizeof(unsigned char);
	printsizeof(char*);
	printsizeof(bool);
	printsizeof(wchar_t);
	printsizeof(short);
	printsizeof(int);
	printsizeof(long);
	printsizeof(long long);
	printsizeof(float);
	printsizeof(double);
	printsizeof(long double);
	printsizeof(size_t);
	printsizeof(ptrdiff_t);
	printsizeof(void*);
}


#define _CRT_SECURE_NO_WARNINGS

const int N = 5;

short Ms[N];
int Ml[N];
long long Mq[N];
float Mfs[N];
double Mfl[N];

#define PRINT_ARRAY(arr, n, mod) \
	printf("arr = { "); \
    for (int i = 0; i < n; ++i) { \
        printf(mod " ", arr[i]); \
    } \
	printf("}\n");


template <typename T, typename D>
void fillArray(T* arr, D value) {
	for (int i = 0; i < N; i++) {
		arr[i] = value;
	}
}

void fillArrays()
{
	fillArray(Ms, 0xFADE);
	fillArray(Ml, 0xADE1A1DA);
	fillArray(Mq, 0xC1A551F1AB1E);
	fillArray(Mfs, (-8 * 1.0) / 5);
	fillArray(Mfl, (-8 * 1.0) / 5);
}

void task4()
{
	PRINT_ARRAY(Ms, N, "%hu");
	PRINT_ARRAY(Ms, N, "%04hx");
	printf("\n");

	PRINT_ARRAY(Ml, N, "%d");
	PRINT_ARRAY(Ml, N, "%08x");
	printf("\n");

	PRINT_ARRAY(Mq, N, "%lld");
	PRINT_ARRAY(Mq, N, "%016llx");
	printf("\n");

	PRINT_ARRAY(Mfs, N, "%.2f");
	PRINT_ARRAY(Mfs, N, "%e");
	printf("\n");

	PRINT_ARRAY(Mfl, N, "%.2lf");
	PRINT_ARRAY(Mfl, N, "%le");
	printf("\n");
}


void task5()
{
	printf("Начало массива: %p \n", Mfl);
	printf("Начального элемента: %p \n", &(Mfl[0]));
	printf("С индексом 1 элемента: %p \n", &(Mfl[1]));
}


void task6()
{
	PRINT_ARRAY(Ms, N, "%hu");

	if (scanf("%hu", &Ms[2]) != 1) return;

	PRINT_ARRAY(Ms, N, "%hu");
}


int main()
{
	setlocale(LC_ALL, "Russian");
	fillArrays();

	//task1();
	//task2();
	//task3(); txt
	//task4();
	//task5(); 
	task6();
	//task7(); no
	//task8(); no
	//task9(); no


}