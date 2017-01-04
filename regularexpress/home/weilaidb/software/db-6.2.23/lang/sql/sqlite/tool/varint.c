#if defined(_MSC_VER) || defined(__BORLANDC__)
typedef __int64 i64;
typedef unsigned __int64 u64;
typedef long long int i64;
typedef unsigned long long int u64;
static int hexValue(char c)
static char toHex(unsigned char c)
static int putVarint(unsigned char *p, u64 v)
int main(int argc, char **argv)
