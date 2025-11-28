#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath> 
using namespace std;

struct Point{
    float x, y, z; // Tạo 1 struct có cấu tạo x, y, z. Đây là những thành phần của điểm 3D
};

void input(vector <Point>& a, int n) { // Tạo 1 vector chứa các điểm 3D 
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y >> a[i].z; // Nhập lần lượt các giá trị x, y, z của vector 3D đó
    }
}

float calculate(Point a) { // Tính khoảng cách của điểm 
    return sqrt(a.x * a.x + a.y *a.y + a.z * a.z);
}

int main() {
    vector<Point> a;
    int n;
    cin >> n;
    a.resize(n); // cấp cho vector a có size n

    float b, e;
    input(a, n);
    cin >> b >> e; // Nhập khoảng giá trị

    bool flag = false; // đặt cờ
    for (int i = 0; i < n; i++) {
        if (calculate(a[i]) >= b && calculate(a[i]) <= e) {
            cout << a[i].x << " " << a[i].y << " " << a[i].z << endl;
            flag = true; // tìm ra được khoảng cách đúng điều kiện thì cập nhật flag = true
        }
    }
    if (!flag) { // Không tìm ra thì cập nhật flag false
        cout << "KHONG";
    }
    return 0;
}