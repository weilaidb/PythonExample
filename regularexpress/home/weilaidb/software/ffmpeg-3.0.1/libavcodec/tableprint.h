#define AVCODEC_TABLEPRINT_H
#define WRITE_1D_FUNC_ARGV(type, linebrk, fmtstr, ...)\
void write_##type##_array(const type *data, int len)\
#define WRITE_1D_FUNC(type, fmtstr, linebrk)\
WRITE_1D_FUNC_ARGV(type, linebrk, fmtstr, data[i])
#define WRITE_2D_FUNC(type)\
void write_##type##_2d_array(const void *arg, int len, int len2)\
void write_int8_t_array     (const int8_t   *, int);
void write_uint8_t_array    (const uint8_t  *, int);
void write_uint16_t_array   (const uint16_t *, int);
void write_uint32_t_array   (const uint32_t *, int);
void write_int32_t_array    (const int32_t  *, int);
void write_float_array      (const float    *, int);
void write_int8_t_2d_array  (const void *, int, int);
void write_uint8_t_2d_array (const void *, int, int);
void write_uint32_t_2d_array(const void *, int, int);
void write_float_2d_array   (const void *, int, int);
#if defined(_MSC_VER)
#define FMT "Iu"
#define FMT "zu"
#define WRITE_ARRAY_ALIGNED(prefix, align, type, name)  \
do  while(0)
#define WRITE_ARRAY(prefix, type, name)                 \
do  while(0)
#define WRITE_2D_ARRAY(prefix, type, name)                              \
do  while(0)
WRITE_1D_FUNC(int8_t,   "%3"PRIi8, 15)
WRITE_1D_FUNC(uint8_t,  "0x%02"PRIx8, 15)
WRITE_1D_FUNC(uint16_t, "0x%08"PRIx16, 7)
WRITE_1D_FUNC(int16_t,  "%5"PRIi16, 7)
WRITE_1D_FUNC(uint32_t, "0x%08"PRIx32, 7)
WRITE_1D_FUNC(int32_t,  "0x%08"PRIx32, 7)
WRITE_1D_FUNC(float,    "%.18e", 3)
WRITE_2D_FUNC(int8_t)
WRITE_2D_FUNC(uint8_t)
WRITE_2D_FUNC(uint32_t)
WRITE_2D_FUNC(float)
static inline void write_fileheader(void)
