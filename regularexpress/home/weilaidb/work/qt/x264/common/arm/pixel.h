#define X264_ARM_PIXEL_H
#define DECL_PIXELS( ret, name, suffix, args ) \
ret x264_pixel_##name##_16x16_##suffix args;\
ret x264_pixel_##name##_16x8_##suffix args;\
ret x264_pixel_##name##_8x16_##suffix args;\
ret x264_pixel_##name##_8x8_##suffix args;\
ret x264_pixel_##name##_8x4_##suffix args;\
ret x264_pixel_##name##_4x8_##suffix args;\
ret x264_pixel_##name##_4x4_##suffix args;\
#define DECL_X1( name, suffix ) \
DECL_PIXELS( int, name, suffix, ( uint8_t *, int, uint8_t *, int ) )
#define DECL_X4( name, suffix ) \
DECL_PIXELS( void, name##_x3, suffix, ( uint8_t *, uint8_t *, uint8_t *, uint8_t *, intptr_t, int * ) )\
DECL_PIXELS( void, name##_x4, suffix, ( uint8_t *, uint8_t *, uint8_t *, uint8_t *, uint8_t *, intptr_t, int * ) )
int x264_pixel_sad_4x4_armv6( uint8_t *, intptr_t, uint8_t *, intptr_t );
int x264_pixel_sad_4x8_armv6( uint8_t *, intptr_t, uint8_t *, intptr_t );
DECL_X1( sad, neon )
DECL_X1( sad_aligned, neon )
DECL_X1( sad_aligned, neon_dual )
DECL_X4( sad, neon )
DECL_X1( satd, neon )
DECL_X1( ssd, neon )
void x264_pixel_ssd_nv12_core_neon( uint8_t *, intptr_t, uint8_t *, intptr_t, int, int, uint64_t *, uint64_t * );
int x264_pixel_vsad_neon( uint8_t *, intptr_t, int );
int x264_pixel_sa8d_8x8_neon  ( uint8_t *, intptr_t, uint8_t *, intptr_t );
int x264_pixel_sa8d_16x16_neon( uint8_t *, intptr_t, uint8_t *, intptr_t );
uint64_t x264_pixel_sa8d_satd_16x16_neon( uint8_t *, intptr_t, uint8_t *, intptr_t );
uint64_t x264_pixel_var_8x8_neon  ( uint8_t *, intptr_t );
uint64_t x264_pixel_var_8x16_neon ( uint8_t *, intptr_t );
uint64_t x264_pixel_var_16x16_neon( uint8_t *, intptr_t );
int x264_pixel_var2_8x8_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, int * );
int x264_pixel_var2_8x16_neon( uint8_t *, intptr_t, uint8_t *, intptr_t, int * );
uint64_t x264_pixel_hadamard_ac_8x8_neon  ( uint8_t *, intptr_t );
uint64_t x264_pixel_hadamard_ac_8x16_neon ( uint8_t *, intptr_t );
uint64_t x264_pixel_hadamard_ac_16x8_neon ( uint8_t *, intptr_t );
uint64_t x264_pixel_hadamard_ac_16x16_neon( uint8_t *, intptr_t );
void x264_pixel_ssim_4x4x2_core_neon( const uint8_t *, intptr_t,
const uint8_t *, intptr_t,
int sums[2][4] );
float x264_pixel_ssim_end4_neon( int sum0[5][4], int sum1[5][4], int width );
int x264_pixel_asd8_neon( uint8_t *, intptr_t,  uint8_t *, intptr_t, int );
