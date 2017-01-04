#define COMPAT_VA_COPY_H
#if !defined(va_copy) && defined(_MSC_VER)
#define va_copy(dst, src) ((dst) = (src))
#if !defined(va_copy) && defined(__GNUC__) && __GNUC__ < 3
#define va_copy(dst, src) __va_copy(dst, src)
