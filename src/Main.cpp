#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main() {

	int start = 1;
	float a;
	double hasil;
	string x, b, c, ulang;
	bool inc, hasil0, hasil05, hasil1, hasil2, hasil3,
		hasil4, hasil5, hasil6, hasil7, hasil8,
		hasil9, hasil10, hasil11, hasil12, hasil13,
		hasil14, hasil15, hasil16, hasil105, hasil45;

	while (start == 1)
	{
		system("color 0B");
		cout << endl;
		cout << endl;
		cout << " ========================================" << endl;
		cout << " |           SELAMAT DATANG             |" << endl;
		cout << " ========================================" << endl;
		cout << " | Program Konversi Byte > Terabyte     |" << endl;
		cout << " ========================================" << endl;
		cout << endl;
		cout << " ========================================" << endl;
		cout << " |          Masukkan konversi           |" << endl;
		cout << " ========================================" << endl;
		cout << " |                                      |" << endl;
		cout << " |    (b) Byte          (kb) Kilobyte   |" << endl;
		cout << " |    (mb) Megabyte     (gb) Gigabyte   |" << endl;
		cout << " |    (tb) Terabyte                     |" << endl;
		cout << " |                                      |" << endl;
		cout << " ========================================" << endl;
		


		cout << "\n \n Masukkan bilangan yang ingin di konversi: ";
		cin >> a;
		cin >> b;

		cout << " " << a << " " << b << " Ingin di konversi ke: ";
		cin >> c;

		cout << "" << endl;

		if (a > 0) {
			// Byte
			hasil0 = (b == "b") && (c == "kb");
			hasil05 = (b == "b") && (c == "mb");
			hasil1 = (b == "b") && (c == "gb");
			hasil105 = (b == "b") && (c == "tb");

			// Kilobyte
			hasil2 = (b == "kb") && (c == "b");
			hasil3 = (b == "kb") && (c == "mb");
			hasil4 = (b == "kb") && (c == "gb");
			hasil45 = (b == "kb") && (c == "tb");

			// Megabyte
			hasil5 = (b == "mb") && (c == "b");
			hasil6 = (b == "mb") && (c == "kb");
			hasil7 = (b == "mb") && (c == "gb");
			hasil8 = (b == "mb") && (c == "tb");

			// gigabyte
			hasil9 = (b == "gb") && (c == "b");
			hasil10 = (b == "gb") && (c == "kb");
			hasil11 = (b == "gb") && (c == "mb");
			hasil12 = (b == "gb") && (c == "tb");

			// Terabyte
			hasil13 = (b == "tb") && (c == "b");
			hasil14 = (b == "tb") && (c == "kb");
			hasil15 = (b == "tb") && (c == "mb");
			hasil16 = (b == "tb") && (c == "gb");



			// byte
			if (hasil0 == true) {
				hasil = a / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil05 == true) {
				hasil = (a / 1024) / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil1 == true) {
				hasil = ((a / 1024) / 1024) / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil105 == true) {
				hasil = (((a / 1024) / 1024) / 1024) / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}


			// Kilobyte
			else if (hasil2 == true) {
				hasil = a * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil3 == true) {
				hasil = a / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil4 == true) {
				hasil = (a / 1024) / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil45 == true) {
				hasil = ((a / 1024) / 1024) / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}



			// Megabyte
			else if (hasil5 == true) {
				hasil = (a * 1024) * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil6 == true) {
				hasil = a * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil7 == true) {
				hasil = a / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil8 == true) {
				hasil = (a / 1024) / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}


			// Gigabyte
			else if (hasil9 == true) {
				hasil = ((a * 1024) * 1024) * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil10 == true) {
				hasil = (a * 1024) * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil11 == true) {
				hasil = a * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil12 == true) {
				hasil = a / 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}


			// Terabyte
			else if (hasil13 == true) {
				hasil = (((a * 1024) * 1024) * 1024) * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil14 == true) {
				hasil = ((a * 1024) * 1024) * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil15 == true) {
				hasil = (a * 1024) * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}
			else if (hasil16 == true) {
				hasil = a * 1024;
				cout << " ===================>" << endl;
				cout << " Hasil konversi \n";
				cout << " = ";
			}


			if (hasil < 0.000000009) {
				cout << fixed;
				cout << setprecision(12);
				cout << hasil << " " << c << endl;

			}
			else if (hasil < 0.000009) {
				cout << fixed;
				cout << setprecision(8);
				cout << hasil << " " << c << endl;

			}
			else if (hasil < 0.00009) {
				cout << fixed;
				cout << setprecision(7);
				cout << hasil << " " << c << endl;
			}
			else if (hasil < 0.0009) {
				cout << fixed;
				cout << setprecision(6);
				cout << hasil << " " << c << endl;
			}
			else if (hasil < 0.009) {
				cout << fixed;
				cout << setprecision(5);
				cout << hasil << " " << c << endl;
			}
			else if (hasil < 0.09) {
				cout << fixed;
				cout << setprecision(3);
				cout << hasil << " " << c << endl;

			}
			else if (hasil < 0.9) {
				cout << fixed;
				cout << setprecision(2);
				cout << hasil << " " << c << endl;

			}
			else if (hasil >= 1) {
				cout << fixed;
				cout << setprecision(0);
				cout << hasil << " " << c << endl;
			}

		}
		else {
			cout << endl;
			cout << "============================" << endl;
			cout << "| ERROR MASSEH!!!          |" << endl;
			cout << "| Salah Pengisian Angka    |" << endl;
			cout << "| Hasil tidak di temukan   |" << endl;
			cout << "============================" << endl;
			cout << endl;
			cout << "| exit |";
			system("pause");
			exit(0);
			
		}
		

		cout << endl;
		cout << " Ingin Mulai Lagi? (iya/tidak): ";
		cin >> ulang;
		if (ulang == "iya") {
			system("cls");
			start = 1;
		}
		else {
			start += 1;
			cout << endl;
			cout << "| exit |";
			system("pause");
			exit(0);
		}
		

	}
	

	cin.get();
	return 0;
}