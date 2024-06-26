/*
=====================================================================================================================================================================
Bài 6: Đề bài:
Hàm ceil: làm tròn lên số nguyên gần nhất
Hàm floor: làm tròn xuống số nguyên gần nhất
Hàm round: làm tròn số nguyên phụ thuộc vào phần thập phân.
Cho số thực X nhiệm vụ của bạn là sử dụng 3 hàm trên để tìm:
- Số nguyên nhỏ hơn gần X nhất
- Số nguyên lớn hơn gần X nhất, 
- Số nguyên gần X nhất.
=====================================================================================================================================================================
- Lưu ý: 
Nên nhớ hàm ceil, floor, round trả về số double, nếu các bạn in ra kết quả hàm ceil, round, floor đối với số nhỏ thì không vấn đề gì
nhưng với số lớn nó có thể xuất hiện số 0 ở sau.
Ví dụ cout << ceil(1000000) << endl;
=> kết quả in ra sẽ là 1000000.0
=====================================================================================================================================================================
- Input Format:
Dòng duy nhất chứa số thực X
=====================================================================================================================================================================
- Constraints:
1 <= X <= 10^6;
=====================================================================================================================================================================
- Output Format:
In ra 3 số trên 3 dòng
=====================================================================================================================================================================
- Sample Input 0:
3.59
=====================================================================================================================================================================
- Sample Output 0:
3
4
4
=====================================================================================================================================================================
- Sample Input 1:
5.58
=====================================================================================================================================================================
- Sample Output 1:
5
6
6
=====================================================================================================================================================================
*/
                                                                            Bài giải:
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    cin >> x;
    /* Nên nhớ hàm ceil, floor, round trả về số double, 
    đối với số nhỏ thì không vấn đề gì nhưng với số lớn nó có thể xuất hiện số 0 ở sau.
    Ví dụ cout << ceil(1000000) << endl; kết quả in ra sẽ là 1000000.0 => ép kiểu
    */
    cout << (int)floor(x) << endl;
    cout << (int)ceil(x) << endl;
    cout << (int)round(x) << endl;
    
    return 0;
}