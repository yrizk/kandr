#include <limits.h>
#include <float.h>

int main() {
	printf("Direct Computation (signed)\n");
	printf("size of char = %d\nsize of short = %d\nize of int = %d\nsize of float = %d\nsize of double = %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(float), sizeof(double));
	printf("Direct Computation (unsigned)\n");
	printf("size of char = %d\nsize of short = %d\nize of int = %d\nsize of float = %d\nsize of double = %d\n", sizeof(char), sizeof(signed short), sizeof(unsigned int), sizeof(float), sizeof(double));
	printf("Looking at headers (limits.h)\n");
	printf("The number of bits in a byte %d\n", CHAR_BIT);
	printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
	printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
	printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
	printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
	printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 
	printf("The minimum value of INT = %d\n", INT_MIN);
	printf("The maximum value of INT = %d\n", INT_MAX);
	printf("The minimum value of CHAR = %d\n", CHAR_MIN);
	printf("The maximum value of CHAR = %d\n", CHAR_MAX);
	printf("The minimum value of LONG = %ld\n", LONG_MIN);
	printf("The maximum value of LONG = %ld\n", LONG_MAX);
}
