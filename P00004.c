//đề trên codefun sai cmnr
//đề mới : nhập số nguyên N, in số các số dương nhở hơn hoặc bằng chặn trên của (N-1)/2 (ví dụ vẫn như cũ)
//a lấy đề trong sách mua trực tiếp từ thầy Hồ Đắc Phương (của bạn a :v )

#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for(int i=ceil((float)(n-1)/2); i>0; i--)   //hàm ceil((float)<số thập phân>) để làm tròn (a dùng cái này thì đc 100 còn bỏ đi đc 40)
    {
        count++;
    }
    printf("%d", count);
}

//để viết comment (chú thích) trên 1 dòng viết "//" vào đầu dòng
/*để viết comment (chú thích) thành 1 khối nhiều dòng viết "/*" ở đầu khối
và "/*" ở cuối khối */
