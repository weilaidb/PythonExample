#define AVCODEC_TABLEPRINT_H
WRITE_1D_FUNC_ARGV\
void write_##type##_array(const type *data, int len)\
WRITE_1D_FUNC\
WRITE_1D_FUNC_ARGV(type, linebrk, fmtstr, data[i])
WRITE_2D_FUNC\
void write_##type##_2d_array(const void *arg, int len, int len2)\
void write_int8_t_array     (const int8_t   *, int);
void write_uint8_t_array    (const uint8_t  *, int);
void write_uint16_t_array   (const uint16_t *, int);
void write_uint32_t_array   (const uint32_t *, int);
void write_int32_t_array    (const int32_t  *, int);
void write_float_array      (const float    *, int);
void write_int8_t_2d_array  (const void *, int, int);
void write_uint8_t_2d_array (const void *, int, int);
write_uint32_t_2d_array;
void write_float_2d_array   (const void *, int, int);
defined
#define FMT
#define FMT
WRITE_ARRAY_ALIGNED  \
while
WRITE_ARRAY                 \
while
WRITE_2D_ARRAY                              \
while
WRITE_1D_FUNC(int8_t,   PRIi8, 15)
WRITE_1D_FUNC(uint8_t,  PRIx8, 15)
WRITE_1D_FUNC(uint16_t, PRIx16, 7)
WRITE_1D_FUNC(int16_t,  PRIi16, 7)
WRITE_1D_FUNC(uint32_t, PRIx32, 7)
WRITE_1D_FUNC(int32_t,  PRIx32, 7)
WRITE_1D_FUNC(float,    , 3)
WRITE_2D_FUNC(int8_t)
WRITE_2D_FUNC(uint8_t)
WRITE_2D_FUNC(uint32_t)
WRITE_2D_FUNC(float)
write_fileheader
