#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double pangkat(double basis, int eksponen) {
    if (eksponen == 0) {
        return 1;
    }
    return basis * pangkat(basis, eksponen - 1);
}

double persamaan(double x) {
    return pangkat(x, 3) - x - 2;
}

double c(double a, double b) {
    return (a + b) / 2;
}

int main() {
   double a;
   double b;
   double toleransi = 0.0001;
   double toleransiLebar = 0.0001;

   cout << "Masukkan nilai a: ";
   cin >> a;
   cout << "Masukkan nilai b: ";
   cin >> b;

   if (persamaan(a) * persamaan(b) > 0) {
    cout << "ERROR: : Nilai f(a) dan f(b) memiliki tanda yang sama!" << endl;
    return 1;
   }
   
   double tengah = c(a, b);

   cout << fixed << setprecision(6) << "| " << a << " | " << b << " | " << tengah << " | " << persamaan(a) << " | " << persamaan(b) << " | " << persamaan(tengah) << " |" << endl;

   while (fabs(persamaan(tengah)) > toleransi && b - a > toleransiLebar) {
    if (persamaan(a) * persamaan(tengah) < 0) {
        b = tengah;
    }
    else a = tengah;
    tengah = c(a, b);
    cout << fixed << setprecision(6) << "| " << a << " | " << b << " | " << tengah << " | " << persamaan(a) << " | " << persamaan(b) << " | " << persamaan(tengah) << " |" << endl;
   }
   cout << "\nHasil akar: " << c(a, b) << endl;
   return 0;
}