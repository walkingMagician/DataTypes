#include<iostream>
using namespace std;
//#define ZADACHA1
//#define ZADACHA2
//#define ZADACHA3
#define ZADACHA4

#define COMPARIOS_OPERATION		// ��������� ����������
#define LOGICAL_OPERATION		// ���������� ��������� 
void main() {
	setlocale(LC_ALL, "");


#ifdef ZADACHA1
	/* ������������� ������� ����� ���� 23.6 ��� � 23 ����� 60 ������*/
	double denga, a;
	int b;
	cout << "�������������� ����� � �������� ������" << endl;
	cout << "������� ������� ����� ->" << endl;	cin >> denga;
	b = denga;
	a = (denga - b) * 100;
	cout << denga << " ���. - ��� " << b << " ���. " << a << " ���.\n";
#endif

#ifdef ZADACHA2
	double pricePencil, priceCopybook, summa;
	int kolvoPencil, kolvoCopybook;
	cout << "���������� ��������� �������" << endl;
	cout << "������� �������� ������" << endl;
	cout << "���� ��������� (���.) -> ";	cin >> pricePencil;
	cout << "���������� ���������� -> ";	cin >> kolvoPencil;
	cout << "���� ������� (���.) -> ";	cin >> priceCopybook;
	cout << "���������� �������� -> ";	cin >> kolvoCopybook;
	summa = (pricePencil * kolvoPencil) + (priceCopybook * kolvoCopybook);
	cout << "��������� �������: " << summa << " ���." << endl;
#endif

#ifdef ZADACHA3
	double priceCover, priceCopybook, summa;
	int kolvoKomplektov;
	cout << "���������� ��������� �������" << endl;
	cout << "������� �������� ������" << endl;
	cout << "���� ������� (���.) -> ";	cin >> priceCopybook;
	cout << "���� ������� (���.) -> ";	cin >> priceCover;
	cout << "���������� ���������� (��.) -> ";	cin >> kolvoKomplektov;
	summa = (priceCopybook + priceCover) * kolvoKomplektov;
	cout << "��������� �������: " << summa << " ���." << endl;
#endif

#ifdef ZADACHA4
	double kilometry, priceBenzin, rashodBenzin;
	int itog;
	cout << "���������� ��������� ������� �� ���� � �������" << endl;
	cout << "��������� �� ���� (��) -> ";	cin >> kilometry;
	cout << "������ ������� (������ �� 100 �� �������) -> ";	cin >> rashodBenzin;
	cout << "���� ����� ������� (���.) -> ";	cin >> priceBenzin;
	itog = (kilometry / 100 * priceBenzin * rashodBenzin) * 100;
	cout << "������� �� ������ � ������� ��������� � " << itog / 100 << "���." << endl;
#endif

}