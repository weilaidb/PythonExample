#define __ACENV_H__
#define ACPI_BINARY_SEMAPHORE       0
#define ACPI_OSL_MUTEX              1
#define DEBUGGER_SINGLE_THREADED    0
#define DEBUGGER_MULTI_THREADED     1
#define ACPI_USE_LOCAL_CACHE
#define ACPI_DEBUG_OUTPUT
#define ACPI_APPLICATION
#define ACPI_DISASSEMBLER
#define ACPI_CONSTANT_EVAL_ONLY
#define ACPI_LARGE_NAMESPACE_NODE
#define ACPI_DATA_TABLE_DISASSEMBLY
#undef DEBUGGER_THREADING
#define DEBUGGER_THREADING      DEBUGGER_SINGLE_THREADED
#define ACPI_FULL_DEBUG
#define ACPI_APPLICATION
#define ACPI_DEBUGGER
#define ACPI_MUTEX_DEBUG
#define ACPI_DBG_TRACK_ALLOCATIONS
#define ACPI_USE_SYSTEM_CLIBRARY
#define ACPI_USE_LOCAL_CACHE
#define ACPI_DEBUGGER
#define ACPI_DEBUG_OUTPUT
#define ACPI_DISASSEMBLER
#if defined(_LINUX) || defined(__linux__)
#elif defined(_AED_EFI)
#elif defined(WIN32)
#elif defined(WIN64)
#elif defined(MSDOS)
#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
#elif defined(__NetBSD__)
#elif defined(MODESTO)
#elif defined(NETWARE)
#elif defined(__sun)
#define ACPI_USE_STANDARD_HEADERS
#define COMPILER_DEPENDENT_INT64   long long
#define COMPILER_DEPENDENT_UINT64  unsigned long long
#define ACPI_MUTEX_TYPE             ACPI_BINARY_SEMAPHORE
#define ACPI_INLINE
#define DEBUGGER_THREADING          DEBUGGER_SINGLE_THREADED
#define DEBUGGER_THREADING          DEBUGGER_MULTI_THREADED
#define ACPI_IS_ASCII(c)  ((c) < 0x80)
#define ACPI_STRSTR(s1,s2)      strstr((s1), (s2))
#define ACPI_STRCHR(s1,c)       strchr((s1), (c))
#define ACPI_STRLEN(s)          (acpi_size) strlen((s))
#define ACPI_STRCPY(d,s)        (void) strcpy((d), (s))
#define ACPI_STRNCPY(d,s,n)     (void) strncpy((d), (s), (acpi_size)(n))
#define ACPI_STRNCMP(d,s,n)     strncmp((d), (s), (acpi_size)(n))
#define ACPI_STRCMP(d,s)        strcmp((d), (s))
#define ACPI_STRCAT(d,s)        (void) strcat((d), (s))
#define ACPI_STRNCAT(d,s,n)     strncat((d), (s), (acpi_size)(n))
#define ACPI_STRTOUL(d,s,n)     strtoul((d), (s), (acpi_size)(n))
#define ACPI_MEMCMP(s1,s2,n)    memcmp((const char *)(s1), (const char *)(s2), (acpi_size)(n))
#define ACPI_MEMCPY(d,s,n)      (void) memcpy((d), (s), (acpi_size)(n))
#define ACPI_MEMSET(d,s,n)      (void) memset((d), (s), (acpi_size)(n))
#define ACPI_TOUPPER(i)         toupper((int) (i))
#define ACPI_TOLOWER(i)         tolower((int) (i))
#define ACPI_IS_XDIGIT(i)       isxdigit((int) (i))
#define ACPI_IS_DIGIT(i)        isdigit((int) (i))
#define ACPI_IS_SPACE(i)        isspace((int) (i))
#define ACPI_IS_UPPER(i)        isupper((int) (i))
#define ACPI_IS_PRINT(i)        isprint((int) (i))
#define ACPI_IS_ALPHA(i)        isalpha((int) (i))
#define _VALIST
typedef char *va_list;
#define  _AUPBND                (sizeof (acpi_native_int) - 1)
#define  _ADNBND                (sizeof (acpi_native_int) - 1)
#define _bnd(X, bnd)            (((sizeof (X)) + (bnd)) & (~(bnd)))
#define va_arg(ap, T)           (*(T *)(((ap) += (_bnd (T, _AUPBND))) - (_bnd (T,_ADNBND))))
#define va_end(ap)              (void) 0
#define va_start(ap, A)         (void) ((ap) = (((char *) &(A)) + (_bnd (A,_AUPBND))))
#define ACPI_STRSTR(s1,s2)      acpi_ut_strstr ((s1), (s2))
#define ACPI_STRCHR(s1,c)       acpi_ut_strchr ((s1), (c))
#define ACPI_STRLEN(s)          (acpi_size) acpi_ut_strlen ((s))
#define ACPI_STRCPY(d,s)        (void) acpi_ut_strcpy ((d), (s))
#define ACPI_STRNCPY(d,s,n)     (void) acpi_ut_strncpy ((d), (s), (acpi_size)(n))
#define ACPI_STRNCMP(d,s,n)     acpi_ut_strncmp ((d), (s), (acpi_size)(n))
#define ACPI_STRCMP(d,s)        acpi_ut_strcmp ((d), (s))
#define ACPI_STRCAT(d,s)        (void) acpi_ut_strcat ((d), (s))
#define ACPI_STRNCAT(d,s,n)     acpi_ut_strncat ((d), (s), (acpi_size)(n))
#define ACPI_STRTOUL(d,s,n)     acpi_ut_strtoul ((d), (s), (acpi_size)(n))
#define ACPI_MEMCMP(s1,s2,n)    acpi_ut_memcmp((const char *)(s1), (const char *)(s2), (acpi_size)(n))
#define ACPI_MEMCPY(d,s,n)      (void) acpi_ut_memcpy ((d), (s), (acpi_size)(n))
#define ACPI_MEMSET(d,v,n)      (void) acpi_ut_memset ((d), (v), (acpi_size)(n))
#define ACPI_TOUPPER(c)         acpi_ut_to_upper ((int) (c))
#define ACPI_TOLOWER(c)         acpi_ut_to_lower ((int) (c))
#define ACPI_SYSTEM_XFACE
#define ACPI_EXTERNAL_XFACE
#define ACPI_INTERNAL_XFACE
#define ACPI_INTERNAL_VAR_XFACE
#define ACPI_ASM_MACROS
#define BREAKPOINT3
#define ACPI_DISABLE_IRQS()
#define ACPI_ENABLE_IRQS()
#define ACPI_ACQUIRE_GLOBAL_LOCK(Glptr, acq)
#define ACPI_RELEASE_GLOBAL_LOCK(Glptr, acq)
#undef BREAKPOINT3
#define BREAKPOINT3
