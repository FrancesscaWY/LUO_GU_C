#include <iostream>
#include <string.h>
#include <math.h>

//别人实现的高精度算法...
using namespace std;
//参数：需要逆置的数组，数组长度
void invertElem(char s[], unsigned long n)
{
    unsigned long len = n - 1;
    for (int i = 0, j = len; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

}

void charInt(char s[], unsigned long n)
{
    for (int i = 0; i < n; i++)
        s[i] -= 48;
}

int main()
{
    while (1)
    {
        char a[1024];
        char b[1024];
        char c[2049];

        //这里必须将每一个元素都置为0，否则位数不同的数字相加时会乱掉
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));

        scanf("%s", a);
        scanf("%s", b);

        //长度获取要在转换之前
        unsigned long len_a = strlen(a);
        unsigned long len_b = strlen(b);

        unsigned long max_len = len_a > len_b ? len_a : len_b;

        //逆置
        invertElem(a, len_a);
        invertElem(b, len_b);

        //转换
        charInt(a, len_a);
        charInt(b, len_b);

        int carry = 0; //进位

        //相加，核心步骤
        //这里的i必须能取到max_len，最高位计算式可能会向前进一位
        //比如99+1，原本最多两位，相加后得到了一个三位数
        for (int i = 0; i <= max_len; i++)
        {
            c[i] = (carry + a[i] + b[i]) % 10;
            carry = (carry + a[i] + b[i]) / 10;
        }

        int i;
        //寻找第一个不为0的数字或全是0的情况况下找到最后一个0
        //这是为了防止00+0之类的特殊情况，在这种情况发生时确保只输出一个0
        for (i = max_len; i >= 1 && c[i] == 0; i--);

        for (; i >= 0; i--)
            printf("%d", c[i]);
        printf("\n");

    }


    return 0;
}