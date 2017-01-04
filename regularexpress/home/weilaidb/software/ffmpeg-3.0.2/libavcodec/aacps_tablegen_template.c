#define CONFIG_HARDCODED_TABLES 0
#if USE_FIXED
#define TYPE_NAME "int32_t"
typedef int32_t INT32FLOAT;
#define ARRAY_RENAME(x) write_int32_t_ ## x
#define ARRAY_URENAME(x) write_uint32_t_ ## x
#define TYPE_NAME "float"
typedef float INT32FLOAT;
#define ARRAY_RENAME(x) write_float_ ## x
#define ARRAY_URENAME(x) write_float_ ## x
void ARRAY_RENAME(3d_array) (const void *p, int b, int c, int d)
void ARRAY_RENAME(4d_array) (const void *p, int a, int b, int c, int d)
int main(void)
