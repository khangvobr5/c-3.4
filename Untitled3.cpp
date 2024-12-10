#include <iostream>
#include <iomanip>  // Thu vien do donh dung so thap ph�n
using namespace std;

int main() {
    double toan, van, anh;  // Khai b�o c�c bien du luu diem
    double tongDiem, diemTrungBinh;  // Khai b�o bien tung diem v� diem trung b�nh

    // Y�u cau nguoi d�ng nhap diem
    cout << "Nhap diem m�n To�n: ";
    cin >> toan;
    cout << "Nhap diem m�n Van: ";
    cin >> van;
    cout << "Nhap diem m�n Anh: ";
    cin >> anh;

    // T�nh tung diam v� diam trung b�nh
    tongDiem = toan + van + anh;
    diemTrungBinh = tongDiem / 3;

    // Hien thi ket qua voi 2 cho so thap ph�n
    cout << fixed << setprecision(2);  // �at danh dung in vai 2 cho so thap ph�n
    cout << "Tang diem: " << tongDiem << endl;
    cout << "�i?m trung b�nh: " << diemTrungBinh << endl;

    return 0;
}
