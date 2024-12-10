#include <iostream>
#include <iomanip>  // Thu vien do donh dung so thap phân
using namespace std;

int main() {
    double toan, van, anh;  // Khai báo các bien du luu diem
    double tongDiem, diemTrungBinh;  // Khai báo bien tung diem và diem trung bình

    // Yêu cau nguoi dùng nhap diem
    cout << "Nhap diem môn Toán: ";
    cin >> toan;
    cout << "Nhap diem môn Van: ";
    cin >> van;
    cout << "Nhap diem môn Anh: ";
    cin >> anh;

    // Tính tung diam và diam trung bình
    tongDiem = toan + van + anh;
    diemTrungBinh = tongDiem / 3;

    // Hien thi ket qua voi 2 cho so thap phân
    cout << fixed << setprecision(2);  // Ðat danh dung in vai 2 cho so thap phân
    cout << "Tang diem: " << tongDiem << endl;
    cout << "Ði?m trung bình: " << diemTrungBinh << endl;

    return 0;
}
