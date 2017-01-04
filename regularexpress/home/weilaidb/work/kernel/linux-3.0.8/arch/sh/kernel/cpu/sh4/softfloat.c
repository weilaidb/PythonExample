#define LIT64( a ) a##LL
typedef char flag;
typedef unsigned char uint8;
typedef signed char int8;
typedef int uint16;
typedef int int16;
typedef unsigned int uint32;
typedef signed int int32;
typedef unsigned long long int bits64;
typedef signed long long int sbits64;
typedef unsigned char bits8;
typedef signed char sbits8;
typedef unsigned short int bits16;
typedef signed short int sbits16;
typedef unsigned int bits32;
typedef signed int sbits32;
typedef unsigned long long int uint64;
typedef signed long long int int64;
typedef unsigned long int float32;
typedef unsigned long long float64;
extern void float_raise(unsigned int flags);
extern int float_rounding_mode(void);
bits64 extractFloat64Frac(float64 a);
flag extractFloat64Sign(float64 a);
int16 extractFloat64Exp(float64 a);
int16 extractFloat32Exp(float32 a);
flag extractFloat32Sign(float32 a);
bits32 extractFloat32Frac(float32 a);
float64 packFloat64(flag zSign, int16 zExp, bits64 zSig);
void shift64RightJamming(bits64 a, int16 count, bits64 * zPtr);
float32 packFloat32(flag zSign, int16 zExp, bits32 zSig);
void shift32RightJamming(bits32 a, int16 count, bits32 * zPtr);
float64 float64_sub(float64 a, float64 b);
float32 float32_sub(float32 a, float32 b);
float32 float32_add(float32 a, float32 b);
float64 float64_add(float64 a, float64 b);
float64 float64_div(float64 a, float64 b);
float32 float32_div(float32 a, float32 b);
float32 float32_mul(float32 a, float32 b);
float64 float64_mul(float64 a, float64 b);
float32 float64_to_float32(float64 a);
void add128(bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 * z0Ptr,
bits64 * z1Ptr);
void sub128(bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 * z0Ptr,
bits64 * z1Ptr);
void mul64To128(bits64 a, bits64 b, bits64 * z0Ptr, bits64 * z1Ptr);
static int8 countLeadingZeros32(bits32 a);
static int8 countLeadingZeros64(bits64 a);
static float64 normalizeRoundAndPackFloat64(flag zSign, int16 zExp,
bits64 zSig);
static float64 subFloat64Sigs(float64 a, float64 b, flag zSign);
static float64 addFloat64Sigs(float64 a, float64 b, flag zSign);
static float32 roundAndPackFloat32(flag zSign, int16 zExp, bits32 zSig);
static float32 normalizeRoundAndPackFloat32(flag zSign, int16 zExp,
bits32 zSig);
static float64 roundAndPackFloat64(flag zSign, int16 zExp, bits64 zSig);
static float32 subFloat32Sigs(float32 a, float32 b, flag zSign);
static float32 addFloat32Sigs(float32 a, float32 b, flag zSign);
static void normalizeFloat64Subnormal(bits64 aSig, int16 * zExpPtr,
bits64 * zSigPtr);
static bits64 estimateDiv128To64(bits64 a0, bits64 a1, bits64 b);
static void normalizeFloat32Subnormal(bits32 aSig, int16 * zExpPtr,
bits32 * zSigPtr);
bits64 extractFloat64Frac(float64 a)
flag extractFloat64Sign(float64 a)
int16 extractFloat64Exp(float64 a)
int16 extractFloat32Exp(float32 a)
flag extractFloat32Sign(float32 a)
bits32 extractFloat32Frac(float32 a)
float64 packFloat64(flag zSign, int16 zExp, bits64 zSig)
void shift64RightJamming(bits64 a, int16 count, bits64 * zPtr)
static int8 countLeadingZeros32(bits32 a)
static int8 countLeadingZeros64(bits64 a)
static float64 normalizeRoundAndPackFloat64(flag zSign, int16 zExp, bits64 zSig)
static float64 subFloat64Sigs(float64 a, float64 b, flag zSign)
static float64 addFloat64Sigs(float64 a, float64 b, flag zSign)
float32 packFloat32(flag zSign, int16 zExp, bits32 zSig)
void shift32RightJamming(bits32 a, int16 count, bits32 * zPtr)
static float32 roundAndPackFloat32(flag zSign, int16 zExp, bits32 zSig)
static float32 normalizeRoundAndPackFloat32(flag zSign, int16 zExp, bits32 zSig)
static float64 roundAndPackFloat64(flag zSign, int16 zExp, bits64 zSig)
static float32 subFloat32Sigs(float32 a, float32 b, flag zSign)
static float32 addFloat32Sigs(float32 a, float32 b, flag zSign)
float64 float64_sub(float64 a, float64 b)
float32 float32_sub(float32 a, float32 b)
float32 float32_add(float32 a, float32 b)
float64 float64_add(float64 a, float64 b)
static void
normalizeFloat64Subnormal(bits64 aSig, int16 * zExpPtr, bits64 * zSigPtr)
void add128(bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 * z0Ptr,
bits64 * z1Ptr)
void
sub128(bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 * z0Ptr,
bits64 * z1Ptr)
static bits64 estimateDiv128To64(bits64 a0, bits64 a1, bits64 b)
void mul64To128(bits64 a, bits64 b, bits64 * z0Ptr, bits64 * z1Ptr)
static void normalizeFloat32Subnormal(bits32 aSig, int16 * zExpPtr,
bits32 * zSigPtr)
float64 float64_div(float64 a, float64 b)
float32 float32_div(float32 a, float32 b)
float32 float32_mul(float32 a, float32 b)
float64 float64_mul(float64 a, float64 b)
float32 float64_to_float32(float64 a)
