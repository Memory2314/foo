#include <stdio.h>

#define FMT(x) _Generic(x,\
	char*: "%s",\
	int: "%d",\
	double: "%g"\
)

#define PRINT_01(x, ...) printf(FMT(x), x) __VA_OPT__(; putchar(' '); PRINT_02(__VA_ARGS__))
#define PRINT_02(x, ...) printf(FMT(x), x) __VA_OPT__(; putchar(' '); PRINT_03(__VA_ARGS__))
#define PRINT_03(x, ...) printf(FMT(x), x) __VA_OPT__(; putchar(' '); PRINT_04(__VA_ARGS__))
#define PRINT_04(x, ...) printf(FMT(x), x) __VA_OPT__(; putchar(' '); PRINT_05(__VA_ARGS__))
#define PRINT_05(x, ...) printf(FMT(x), x) __VA_OPT__(; putchar(' '); PRINT_06(__VA_ARGS__))
#define PRINT_06(x, ...) printf(FMT(x), x) __VA_OPT__(; putchar(' '); PRINT_07(__VA_ARGS__))
#define PRINT_07(x, ...) printf(FMT(x), x) __VA_OPT__(; putchar(' '); PRINT_08(__VA_ARGS__))
#define PRINT_08(x) printf(FMT(x), x)

#define print(...) do {__VA_OPT__(PRINT_01(__VA_ARGS__);) putchar('\n');} while (0)

int main(int argc, char* argv[])
{
	print("Hello","C",1972,3.14);
	return 0;
}
