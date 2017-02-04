#define COMPAT_MSVCRT_SNPRINTF_H
avpriv_snprintf;
avpriv_vsnprintf;
#undef snprintf
#undef _snprintf
#undef vsnprintf
#define snprintf avpriv_snprintf
#define _snprintf avpriv_snprintf
#define vsnprintf avpriv_vsnprintf
