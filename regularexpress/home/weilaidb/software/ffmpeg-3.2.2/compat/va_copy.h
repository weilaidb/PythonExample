#define COMPAT_VA_COPY_H
defined
va_copy ((dst) = (src))
defined && __GNUC__ < 3
va_copy __va_copy(dst, src)
