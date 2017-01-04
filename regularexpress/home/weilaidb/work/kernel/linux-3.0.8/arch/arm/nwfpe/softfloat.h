#define __SOFTFLOAT_H__
#define FLOATX80
typedef u32 float32;
typedef u64 float64;
typedef struct   __attribute__ ((packed,aligned(4))) floatx80;
extern signed char float_detect_tininess;
enum ;
enum ;
enum ;
void float_raise( signed char );
float32 int32_to_float32( struct roundingData *, signed int );
float64 int32_to_float64( signed int );
floatx80 int32_to_floatx80( signed int );
signed int float32_to_int32( struct roundingData *, float32 );
signed int float32_to_int32_round_to_zero( float32 );
float64 float32_to_float64( float32 );
floatx80 float32_to_floatx80( float32 );
float32 float32_round_to_int( struct roundingData*, float32 );
float32 float32_add( struct roundingData *, float32, float32 );
float32 float32_sub( struct roundingData *, float32, float32 );
float32 float32_mul( struct roundingData *, float32, float32 );
float32 float32_div( struct roundingData *, float32, float32 );
float32 float32_rem( struct roundingData *, float32, float32 );
float32 float32_sqrt( struct roundingData*, float32 );
char float32_eq( float32, float32 );
char float32_le( float32, float32 );
char float32_lt( float32, float32 );
char float32_eq_signaling( float32, float32 );
char float32_le_quiet( float32, float32 );
char float32_lt_quiet( float32, float32 );
char float32_is_signaling_nan( float32 );
signed int float64_to_int32( struct roundingData *, float64 );
signed int float64_to_int32_round_to_zero( float64 );
float32 float64_to_float32( struct roundingData *, float64 );
floatx80 float64_to_floatx80( float64 );
float64 float64_round_to_int( struct roundingData *, float64 );
float64 float64_add( struct roundingData *, float64, float64 );
float64 float64_sub( struct roundingData *, float64, float64 );
float64 float64_mul( struct roundingData *, float64, float64 );
float64 float64_div( struct roundingData *, float64, float64 );
float64 float64_rem( struct roundingData *, float64, float64 );
float64 float64_sqrt( struct roundingData *, float64 );
char float64_eq( float64, float64 );
char float64_le( float64, float64 );
char float64_lt( float64, float64 );
char float64_eq_signaling( float64, float64 );
char float64_le_quiet( float64, float64 );
char float64_lt_quiet( float64, float64 );
char float64_is_signaling_nan( float64 );
signed int floatx80_to_int32( struct roundingData *, floatx80 );
signed int floatx80_to_int32_round_to_zero( floatx80 );
float32 floatx80_to_float32( struct roundingData *, floatx80 );
float64 floatx80_to_float64( struct roundingData *, floatx80 );
floatx80 floatx80_round_to_int( struct roundingData *, floatx80 );
floatx80 floatx80_add( struct roundingData *, floatx80, floatx80 );
floatx80 floatx80_sub( struct roundingData *, floatx80, floatx80 );
floatx80 floatx80_mul( struct roundingData *, floatx80, floatx80 );
floatx80 floatx80_div( struct roundingData *, floatx80, floatx80 );
floatx80 floatx80_rem( struct roundingData *, floatx80, floatx80 );
floatx80 floatx80_sqrt( struct roundingData *, floatx80 );
char floatx80_eq( floatx80, floatx80 );
char floatx80_le( floatx80, floatx80 );
char floatx80_lt( floatx80, floatx80 );
char floatx80_eq_signaling( floatx80, floatx80 );
char floatx80_le_quiet( floatx80, floatx80 );
char floatx80_lt_quiet( floatx80, floatx80 );
char floatx80_is_signaling_nan( floatx80 );
extern flag floatx80_is_nan(floatx80);
static inline flag extractFloat32Sign(float32 a)
static inline flag float32_eq_nocheck(float32 a, float32 b)
static inline flag float32_lt_nocheck(float32 a, float32 b)
static inline flag extractFloat64Sign(float64 a)
static inline flag float64_eq_nocheck(float64 a, float64 b)
static inline flag float64_lt_nocheck(float64 a, float64 b)
extern flag float32_is_nan( float32 a );
extern flag float64_is_nan( float64 a );
extern int32 float64_to_uint32( struct roundingData *roundData, float64 a );
extern int32 float64_to_uint32_round_to_zero( float64 a );
