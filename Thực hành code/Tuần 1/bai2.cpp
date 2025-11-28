#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath> 
using namespace std;

struct Point {
	float x, y, z;
};


int main() {
    int n;
    int m;
    cin >> n;

    vector<Point> a(n); // khai báo vector a có khoảng n
    for (int i = 0; i < n; ++i) {
        cin >> a[i].x >> a[i].y >> a[i].z;
    }

    cin >> m;
    vector<Point> b(m); // khai báo vector b có khoảng m
    for (int i = 0; i < m; ++i) {
        cin >> b[i].x >> b[i].y >> b[i].z;
    }

    for (int i = 0; i < m; i++) { // duyệt từng điểm b[i] để tìm trong a
        int pos = -1; // gọi pos = -1

        for (int j = 0; j < n; j++) {   // tìm trong a
            if (a[j].x == b[i].x &&
                a[j].y == b[i].y &&
                a[j].z == b[i].z) {
                pos = j; // cập nhật giá trị pos
                break; // chỉ lấy giá trị pos đầu tiên rồi chuyển sang giá trị khác       
            }
        }

        if (pos == -1) {
            cout << "KHONG\n";
        }
        else {
            cout << pos << "\n";        
        }
    }

    return 0;
}