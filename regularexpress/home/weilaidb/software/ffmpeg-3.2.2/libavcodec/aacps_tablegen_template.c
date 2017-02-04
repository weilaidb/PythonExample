#define CONFIG_HARDCODED_TABLES 0
#if USE_FIXED
#define TYPE_NAME
typedef int32_t INT32FLOAT;
ARRAY_RENAME write_int32_t_ ## x
ARRAY_URENAME write_uint32_t_ ## x
#define TYPE_NAME
typedef float INT32FLOAT;
ARRAY_RENAME write_float_ ## x
ARRAY_URENAME write_float_ ## x
ARRAY_RENAME (const void *p, int b, int c, int d)
ARRAY_RENAME (const void *p, int a, int b, int c, int d)
main
