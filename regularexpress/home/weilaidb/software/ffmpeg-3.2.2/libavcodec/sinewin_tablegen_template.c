#define CONFIG_HARDCODED_TABLES 0
#if USE_FIXED
#define WRITE_FUNC write_int32_t_array
#define WRITE_FUNC write_float_array
#define SINETABLE_CONST
SINETABLE \
AAC_RENAME[size]
FF_ARRAY_ELEMS (sizeof(a) / sizeof((a)[0]))
main
