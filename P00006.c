#include <stdio.h>

int main()
{
    char s[100];                    //khai báo chuỗi (xâu) ký tự (cú pháp: char <tên chuỗi>[<số ký tự trong chuỗi, chọn tùy thích>])
    int i;                          //biến đếm vị trí ký tự trong chuỗi
    char c;                         //biến lưu ký tự tam thời cho thuật toán đổi chỗ
    scanf("%s", &s);                //định dạng đầu vào cho chuỗi là "%s"
    for(i=0; i<strlen(s)/2; i++)    //lặp với số lần = 1/2 độ dài chuỗi (hàm lấy độ dài chuỗi: strlen(<tên chuỗi>))
    {
        c = s[i];                   //thuật toán đổi chỗ
        s[i] = s[strlen(s)-1-i];    //bài này ta sẽ đổi chỗ ký tự đầu với ký tự cuối, ký tự thứ 2 với ký tự cuối thứ 2, v.v.
        s[strlen(s)-1-i] = c;
    }
    printf("%s", s);                //kết quả là chuỗi được đảo ngược
}
