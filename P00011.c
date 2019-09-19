#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double p = (a+b+c)/2;
    double S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%lf", S);
}


//lần trước sai vì nhập int và xuất float, khi tính toán máy có thể đổi kiểu dữ liệu k chính xác
//lần này ta dùng kiểu double, là số thập phân nhưng chính xác hơn float (chứa nhiều số sau dấu thập phân)
//khi dùng double ta định dạng "%lf"
//em vẫn có thể dùng float nếu em in luôn mớ sqrt() trong lệnh printf()
