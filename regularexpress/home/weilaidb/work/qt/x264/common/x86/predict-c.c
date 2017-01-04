#define PREDICT_P_SUM(j,i)\
H += i * ( src[j+i - FDEC_STRIDE ]  - src[j-i - FDEC_STRIDE ] );\
V += i * ( src[(j+i)*FDEC_STRIDE -1] - src[(j-i)*FDEC_STRIDE -1] );
#if HAVE_X86_INLINE_ASM
#if HIGH_BIT_DEPTH
ALIGNED_16( static const int16_t pw_12345678[8] ) = ;
ALIGNED_16( static const int16_t pw_m87654321[8] ) = ;
ALIGNED_16( static const int16_t pw_m32101234[8] ) = ;
ALIGNED_8( static const int8_t pb_12345678[8] ) = ;
ALIGNED_8( static const int8_t pb_m87654321[8] ) = ;
ALIGNED_8( static const int8_t pb_m32101234[8] ) = ;
#define PREDICT_16x16_P_CORE\
int H = 0;\
int V = 0;\
PREDICT_P_SUM(7,1)\
PREDICT_P_SUM(7,2)\
PREDICT_P_SUM(7,3)\
PREDICT_P_SUM(7,4)\
PREDICT_P_SUM(7,5)\
PREDICT_P_SUM(7,6)\
PREDICT_P_SUM(7,7)\
PREDICT_P_SUM(7,8)
#define PREDICT_16x16_P_END(name)\
int a = 16 * ( src[15*FDEC_STRIDE -1] + src[15 - FDEC_STRIDE] );\
int b = ( 5 * H + 32 ) >> 6;\
int c = ( 5 * V + 32 ) >> 6;\
int i00 = a - b * 7 - c * 7 + 16;\\
if( BIT_DEPTH > 8 && (i00 > 0x7fff || abs(b) > 1092 || abs(c) > 1092) )\
x264_predict_16x16_p_c( src );\
else\
x264_predict_16x16_p_core_##name( src, i00, b, c );
#define PREDICT_16x16_P(name, name2)\
static void x264_predict_16x16_p_##name( pixel *src )\
#if HAVE_X86_INLINE_ASM
#if HIGH_BIT_DEPTH
#define PREDICT_16x16_P_ASM\
asm (\
"movdqu           %1, %%xmm1 \n"\
"movdqa           %2, %%xmm0 \n"\
"pmaddwd          %3, %%xmm0 \n"\
"pmaddwd          %4, %%xmm1 \n"\
"paddd        %%xmm1, %%xmm0 \n"\
"movhlps      %%xmm0, %%xmm1 \n"\
"paddd        %%xmm1, %%xmm0 \n"\
"pshuflw $14, %%xmm0, %%xmm1 \n"\
"paddd        %%xmm1, %%xmm0 \n"\
"movd         %%xmm0, %0     \n"\
:"=r"(H)\
:"m"(src[-FDEC_STRIDE-1]), "m"(src[-FDEC_STRIDE+8]),\
"m"(*pw_12345678), "m"(*pw_m87654321)\
);
#define PREDICT_16x16_P_ASM\
asm (\
"movq           %1, %%mm1 \n"\
"movq           %2, %%mm0 \n"\
"palignr $7,    %3, %%mm1 \n"\
"pmaddubsw      %4, %%mm0 \n"\
"pmaddubsw      %5, %%mm1 \n"\
"paddw       %%mm1, %%mm0 \n"\
"pshufw $14, %%mm0, %%mm1 \n"\
"paddw       %%mm1, %%mm0 \n"\
"pshufw  $1, %%mm0, %%mm1 \n"\
"paddw       %%mm1, %%mm0 \n"\
"movd        %%mm0, %0    \n"\
"movswl        %w0, %0    \n"\
:"=r"(H)\
:"m"(src[-FDEC_STRIDE]), "m"(src[-FDEC_STRIDE+8]),\
"m"(src[-FDEC_STRIDE-8]), "m"(*pb_12345678), "m"(*pb_m87654321)\
);
#define PREDICT_16x16_P_CORE_INLINE\
int H, V;\
PREDICT_16x16_P_ASM\
V = 8 * ( src[15*FDEC_STRIDE-1] - src[-1*FDEC_STRIDE-1] )\
+ 7 * ( src[14*FDEC_STRIDE-1] - src[ 0*FDEC_STRIDE-1] )\
+ 6 * ( src[13*FDEC_STRIDE-1] - src[ 1*FDEC_STRIDE-1] )\
+ 5 * ( src[12*FDEC_STRIDE-1] - src[ 2*FDEC_STRIDE-1] )\
+ 4 * ( src[11*FDEC_STRIDE-1] - src[ 3*FDEC_STRIDE-1] )\
+ 3 * ( src[10*FDEC_STRIDE-1] - src[ 4*FDEC_STRIDE-1] )\
+ 2 * ( src[ 9*FDEC_STRIDE-1] - src[ 5*FDEC_STRIDE-1] )\
+ 1 * ( src[ 8*FDEC_STRIDE-1] - src[ 6*FDEC_STRIDE-1] );
#define PREDICT_16x16_P_INLINE(name, name2)\
static void x264_predict_16x16_p_##name( pixel *src )\
#define PREDICT_16x16_P_INLINE(name, name2) PREDICT_16x16_P(name, name2)
#if HIGH_BIT_DEPTH
PREDICT_16x16_P_INLINE( sse2, sse2 )
#if !ARCH_X86_64
PREDICT_16x16_P( mmx2, mmx2 )
PREDICT_16x16_P( sse2, sse2 )
#if HAVE_X86_INLINE_ASM
PREDICT_16x16_P_INLINE( ssse3, sse2 )
PREDICT_16x16_P_INLINE( avx, avx )
PREDICT_16x16_P_INLINE( avx2, avx2 )
#define PREDICT_8x16C_P_CORE\
int H = 0, V = 0;\
for( int i = 0; i < 4; i++ )\
H += ( i + 1 ) * ( src[4 + i - FDEC_STRIDE] - src[2 - i - FDEC_STRIDE] );\
for( int i = 0; i < 8; i++ )\
V += ( i + 1 ) * ( src[-1 + (i+8)*FDEC_STRIDE] - src[-1 + (6-i)*FDEC_STRIDE] );
#if HIGH_BIT_DEPTH
#define PREDICT_8x16C_P_END(name)\
int a = 16 * ( src[-1 + 15*FDEC_STRIDE] + src[7 - FDEC_STRIDE] );\
int b = ( 17 * H + 16 ) >> 5;\
int c = ( 5 * V + 32 ) >> 6;\
x264_predict_8x16c_p_core_##name( src, a, b, c );
#define PREDICT_8x16C_P_END(name)\
int a = 16 * ( src[-1 + 15*FDEC_STRIDE] + src[7 - FDEC_STRIDE] );\
int b = ( 17 * H + 16 ) >> 5;\
int c = ( 5 * V + 32 ) >> 6;\
int i00 = a -3*b -7*c + 16;\
x264_predict_8x16c_p_core_##name( src, i00, b, c );
#define PREDICT_8x16C_P(name)\
static void x264_predict_8x16c_p_##name( pixel *src )\
#if !ARCH_X86_64 && !HIGH_BIT_DEPTH
PREDICT_8x16C_P( mmx2 )
PREDICT_8x16C_P( sse2 )
PREDICT_8x16C_P( avx )
PREDICT_8x16C_P( avx2 )
#define PREDICT_8x8C_P_CORE\
int H = 0;\
int V = 0;\
PREDICT_P_SUM(3,1)\
PREDICT_P_SUM(3,2)\
PREDICT_P_SUM(3,3)\
PREDICT_P_SUM(3,4)
#if HIGH_BIT_DEPTH
#define PREDICT_8x8C_P_END(name)\
int a = 16 * ( src[7*FDEC_STRIDE -1] + src[7 - FDEC_STRIDE] );\
int b = ( 17 * H + 16 ) >> 5;\
int c = ( 17 * V + 16 ) >> 5;\
x264_predict_8x8c_p_core_##name( src, a, b, c );
#define PREDICT_8x8C_P_END(name)\
int a = 16 * ( src[7*FDEC_STRIDE -1] + src[7 - FDEC_STRIDE] );\
int b = ( 17 * H + 16 ) >> 5;\
int c = ( 17 * V + 16 ) >> 5;\
int i00 = a -3*b -3*c + 16;\
x264_predict_8x8c_p_core_##name( src, i00, b, c );
#define PREDICT_8x8C_P(name, name2)\
static void x264_predict_8x8c_p_##name( pixel *src )\
#if HAVE_X86_INLINE_ASM
#if HIGH_BIT_DEPTH
#define PREDICT_8x8C_P_ASM\
asm (\
"movdqa           %1, %%xmm0 \n"\
"pmaddwd          %2, %%xmm0 \n"\
"movhlps      %%xmm0, %%xmm1 \n"\
"paddd        %%xmm1, %%xmm0 \n"\
"pshuflw $14, %%xmm0, %%xmm1 \n"\
"paddd        %%xmm1, %%xmm0 \n"\
"movd         %%xmm0, %0     \n"\
:"=r"(H)\
:"m"(src[-FDEC_STRIDE]), "m"(*pw_m32101234)\
);
#define PREDICT_8x8C_P_ASM\
asm (\
"movq           %1, %%mm0 \n"\
"pmaddubsw      %2, %%mm0 \n"\
"pshufw $14, %%mm0, %%mm1 \n"\
"paddw       %%mm1, %%mm0 \n"\
"pshufw  $1, %%mm0, %%mm1 \n"\
"paddw       %%mm1, %%mm0 \n"\
"movd        %%mm0, %0    \n"\
"movswl        %w0, %0    \n"\
:"=r"(H)\
:"m"(src[-FDEC_STRIDE]), "m"(*pb_m32101234)\
);
#define PREDICT_8x8C_P_CORE_INLINE\
int H, V;\
PREDICT_8x8C_P_ASM\
V = 1 * ( src[4*FDEC_STRIDE -1] - src[ 2*FDEC_STRIDE -1] )\
+ 2 * ( src[5*FDEC_STRIDE -1] - src[ 1*FDEC_STRIDE -1] )\
+ 3 * ( src[6*FDEC_STRIDE -1] - src[ 0*FDEC_STRIDE -1] )\
+ 4 * ( src[7*FDEC_STRIDE -1] - src[-1*FDEC_STRIDE -1] );\
H += -4 * src[-1*FDEC_STRIDE -1];
#define PREDICT_8x8C_P_INLINE(name, name2)\
static void x264_predict_8x8c_p_##name( pixel *src )\
#define PREDICT_8x8C_P_INLINE(name, name2) PREDICT_8x8C_P(name, name2)
#if HIGH_BIT_DEPTH
PREDICT_8x8C_P_INLINE( sse2, sse2 )
#if !ARCH_X86_64
PREDICT_8x8C_P( mmx2, mmx2 )
PREDICT_8x8C_P( sse2, sse2 )
#if HAVE_X86_INLINE_ASM
PREDICT_8x8C_P_INLINE( ssse3, sse2 )
PREDICT_8x8C_P_INLINE( avx, avx )
PREDICT_8x8C_P_INLINE( avx2, avx2 )
#if ARCH_X86_64 && !HIGH_BIT_DEPTH
static void x264_predict_8x8c_dc_left( uint8_t *src )
void x264_predict_16x16_init_mmx( int cpu, x264_predict_t pf[7] )
void x264_predict_8x8c_init_mmx( int cpu, x264_predict_t pf[7] )
void x264_predict_8x16c_init_mmx( int cpu, x264_predict_t pf[7] )
void x264_predict_8x8_init_mmx( int cpu, x264_predict8x8_t pf[12], x264_predict_8x8_filter_t *predict_8x8_filter )
void x264_predict_4x4_init_mmx( int cpu, x264_predict_t pf[12] )
