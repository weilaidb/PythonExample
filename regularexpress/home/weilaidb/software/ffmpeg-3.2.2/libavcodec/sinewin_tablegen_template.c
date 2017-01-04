#define CONFIG_HARDCODED_TABLES 0
#if USE_FIXED
#define WRITE_FUNC write_int32_t_array
#define WRITE_FUNC write_float_array
#define SINETABLE_CONST
#define SINETABLE(size) \
INTFLOAT AAC_RENAME(ff_sine_##size)[size]
#define FF_ARRAY_ELEMS(a) (sizeof(a) / sizeof((a)[0]))
int main(void)
