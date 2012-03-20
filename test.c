#include <string.h>
#include <unistd.h>

int main(void)
{
	ssize_t n;
	char str[] = "hello, github world!\n";

	n = write(1, str, strlen(str));

	return (n == -1) ? 1 : 0;
}
