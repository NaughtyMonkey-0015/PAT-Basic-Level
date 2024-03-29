#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

/*给定区间 [−2^31,2^31] 内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。

输入格式：
输入第 1 行给出正整数 T (≤10)，是测试用例的个数。随后给出 T 组测试用例，每组占一行，顺序给出 A、B 和 C。整数间以空格分隔。

输出格式：
对每组测试用例，如果 A+B>C,在一行中输出 Case #X: true ，否则输出 Case #X: false，其中 X 是测试用例的编号（从 1 开始）。*/

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long int a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        printf("Case #%d: %s\n", i + 1, a + b > c ? "true" : "false");
    }
    
    return 0;
}
