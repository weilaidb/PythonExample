#define AVUTIL_INTFLOAT_H
union av_intfloat32 ;
union av_intfloat64 ;
static av_always_inline float av_int2float(uint32_t i)
static av_always_inline uint32_t av_float2int(float f)
static av_always_inline double av_int2double(uint64_t i)
static av_always_inline uint64_t av_double2int(double f)
