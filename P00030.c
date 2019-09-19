#include <stdio.h>

int main()
{
    long int n;                                 //vấn đề là kiểu int không thao tác được với số đủ lớn nên cần khai báo long int
    scanf("%ld", &n);                           //định dạng nhập và xuất kiểu long int là "%ld"
    if(n>=3) printf("%ld", n*(n-1)*(n-2)/6);
}
