#include<iostream>
using namespace std;
//#define ZADACHA1
//#define ZADACHA2
//#define ZADACHA3
#define ZADACHA4

#define COMPARIOS_OPERATION		// операторы сравнениея
#define LOGICAL_OPERATION		// логические операторы 
void main() {
	setlocale(LC_ALL, "");


#ifdef ZADACHA1
	/* преобразовать дробное число вида 23.6 руб в 23 рубля 60 копеек*/
	double denga, a;
	int b;
	cout << "Преобразование числа в денюжный формат" << endl;
	cout << "Введите дробное число ->" << endl;	cin >> denga;
	b = denga;
	a = (denga - b) * 100;
	cout << denga << " руб. - это " << b << " руб. " << a << " коп.\n";
#endif

#ifdef ZADACHA2
	double pricePencil, priceCopybook, summa;
	int kolvoPencil, kolvoCopybook;
	cout << "Вычисление стоимости покупки" << endl;
	cout << "Введите исходные данные" << endl;
	cout << "Цена карандаша (руб.) -> ";	cin >> pricePencil;
	cout << "Количество карандашей -> ";	cin >> kolvoPencil;
	cout << "Цена тетради (руб.) -> ";	cin >> priceCopybook;
	cout << "Количество тетрадей -> ";	cin >> kolvoCopybook;
	summa = (pricePencil * kolvoPencil) + (priceCopybook * kolvoCopybook);
	cout << "Стоимость покупки: " << summa << " руб." << endl;
#endif

#ifdef ZADACHA3
	double priceCover, priceCopybook, summa;
	int kolvoKomplektov;
	cout << "Вычисление стоимости покупки" << endl;
	cout << "Введите исходные данные" << endl;
	cout << "Цена тетради (руб.) -> ";	cin >> priceCopybook;
	cout << "Цена обложки (руб.) -> ";	cin >> priceCover;
	cout << "Количество комплектов (шт.) -> ";	cin >> kolvoKomplektov;
	summa = (priceCopybook + priceCover) * kolvoKomplektov;
	cout << "Стоимость покупки: " << summa << " руб." << endl;
#endif

#ifdef ZADACHA4
	double kilometry, priceBenzin, rashodBenzin;
	int itog;
	cout << "Вычисление стоимости поездки на дачу и обратно" << endl;
	cout << "растояние до дачи (км) -> ";	cin >> kilometry;
	cout << "Расход бензина (литров на 100 км пробега) -> ";	cin >> rashodBenzin;
	cout << "Цена литра бензина (руб.) -> ";	cin >> priceBenzin;
	itog = (kilometry / 100 * priceBenzin * rashodBenzin) * 100;
	cout << "Поездка на дачччу и обратно обойдется в " << itog / 100 << "руб." << endl;
#endif

}