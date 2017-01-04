#define randombytes_H
#if defined __GNUC__ && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 2)) && __STDC_VERSION__ < 201112L
#   pragma GCC diagnostic ignored "-Wsign-compare"
#elif defined _MSC_VER
#   pragma warning (disable:4018 4244 4146)
extern void randombytes(unsigned char *,unsigned long long);
extern int randombytes_close(void);
