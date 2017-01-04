#if HAVE_ALTIVEC_H
#if defined(__APPLE__) && __GNUC__ < 4
#define CV(a...) (a)
#define CV(a...)
#define vec_u8_t  vector unsigned char
#define vec_s8_t  vector signed char
#define vec_u16_t vector unsigned short
#define vec_s16_t vector signed short
#define vec_u32_t vector unsigned int
#define vec_s32_t vector signed int
typedef union  vec_u32_u;
typedef union  vec_u16_u;
typedef union  vec_s16_u;
typedef union  vec_u8_u;
#define LOAD_ZERO const vec_u8_t zerov = vec_splat_u8( 0 )
#define zero_u8v  (vec_u8_t)  zerov
#define zero_s8v  (vec_s8_t)  zerov
#define zero_u16v (vec_u16_t) zerov
#define zero_s16v (vec_s16_t) zerov
#define zero_u32v (vec_u32_t) zerov
#define zero_s32v (vec_s32_t) zerov
#define vec_u8_to_u16_h(v) (vec_u16_t) vec_mergeh( zero_u8v, (vec_u8_t) v )
#define vec_u8_to_u16_l(v) (vec_u16_t) vec_mergel( zero_u8v, (vec_u8_t) v )
#define vec_u8_to_s16_h(v) (vec_s16_t) vec_mergeh( zero_u8v, (vec_u8_t) v )
#define vec_u8_to_s16_l(v) (vec_s16_t) vec_mergel( zero_u8v, (vec_u8_t) v )
#define vec_u8_to_u16_h(v) (vec_u16_t) vec_mergeh( (vec_u8_t) v, zero_u8v )
#define vec_u8_to_u16_l(v) (vec_u16_t) vec_mergel( (vec_u8_t) v, zero_u8v )
#define vec_u8_to_s16_h(v) (vec_s16_t) vec_mergeh( (vec_u8_t) v, zero_u8v )
#define vec_u8_to_s16_l(v) (vec_s16_t) vec_mergel( (vec_u8_t) v, zero_u8v )
#define vec_u8_to_u16(v) vec_u8_to_u16_h(v)
#define vec_u8_to_s16(v) vec_u8_to_s16_h(v)
#define vec_u16_to_u8(v) vec_pack( v, zero_u16v )
#define vec_s16_to_u8(v) vec_packsu( v, zero_s16v )
#define vec_u16_to_u32_h(v) (vec_u32_t) vec_mergeh( zero_u16v, (vec_u16_t) v )
#define vec_u16_to_u32_l(v) (vec_u32_t) vec_mergel( zero_u16v, (vec_u16_t) v )
#define vec_u16_to_s32_h(v) (vec_s32_t) vec_mergeh( zero_u16v, (vec_u16_t) v )
#define vec_u16_to_s32_l(v) (vec_s32_t) vec_mergel( zero_u16v, (vec_u16_t) v )
#define vec_u16_to_u32_h(v) (vec_u32_t) vec_mergeh( (vec_u16_t) v, zero_u16v )
#define vec_u16_to_u32_l(v) (vec_u32_t) vec_mergel( (vec_u16_t) v, zero_u16v )
#define vec_u16_to_s32_h(v) (vec_s32_t) vec_mergeh( (vec_u16_t) v, zero_u16v )
#define vec_u16_to_s32_l(v) (vec_s32_t) vec_mergel( (vec_u16_t) v, zero_u16v )
#define vec_u16_to_u32(v) vec_u16_to_u32_h(v)
#define vec_u16_to_s32(v) vec_u16_to_s32_h(v)
#define vec_u32_to_u16(v) vec_pack( v, zero_u32v )
#define vec_s32_to_u16(v) vec_packsu( v, zero_s32v )
#define PREP_STORE8                                                    \
vec_u8_t _tmp3v;                                                   \
vec_u8_t mask =  \
#define VEC_STORE8( v, p )           \
_tmp3v = vec_vsx_ld( 0, p );     \
v = vec_perm( v, _tmp3v, mask ); \
vec_vsx_st( v, 0, p )
#define VEC_TRANSPOSE_8(a0,a1,a2,a3,a4,a5,a6,a7,b0,b1,b2,b3,b4,b5,b6,b7) \
b0 = vec_mergeh( a0, a4 ); \
b1 = vec_mergel( a0, a4 ); \
b2 = vec_mergeh( a1, a5 ); \
b3 = vec_mergel( a1, a5 ); \
b4 = vec_mergeh( a2, a6 ); \
b5 = vec_mergel( a2, a6 ); \
b6 = vec_mergeh( a3, a7 ); \
b7 = vec_mergel( a3, a7 ); \
a0 = vec_mergeh( b0, b4 ); \
a1 = vec_mergel( b0, b4 ); \
a2 = vec_mergeh( b1, b5 ); \
a3 = vec_mergel( b1, b5 ); \
a4 = vec_mergeh( b2, b6 ); \
a5 = vec_mergel( b2, b6 ); \
a6 = vec_mergeh( b3, b7 ); \
a7 = vec_mergel( b3, b7 ); \
b0 = vec_mergeh( a0, a4 ); \
b1 = vec_mergel( a0, a4 ); \
b2 = vec_mergeh( a1, a5 ); \
b3 = vec_mergel( a1, a5 ); \
b4 = vec_mergeh( a2, a6 ); \
b5 = vec_mergel( a2, a6 ); \
b6 = vec_mergeh( a3, a7 ); \
b7 = vec_mergel( a3, a7 )
#define VEC_TRANSPOSE_4(a0,a1,a2,a3,b0,b1,b2,b3) \
b0 = vec_mergeh( a0, a0 ); \
b1 = vec_mergeh( a1, a0 ); \
b2 = vec_mergeh( a2, a0 ); \
b3 = vec_mergeh( a3, a0 ); \
a0 = vec_mergeh( b0, b2 ); \
a1 = vec_mergel( b0, b2 ); \
a2 = vec_mergeh( b1, b3 ); \
a3 = vec_mergel( b1, b3 ); \
b0 = vec_mergeh( a0, a2 ); \
b1 = vec_mergel( a0, a2 ); \
b2 = vec_mergeh( a1, a3 ); \
b3 = vec_mergel( a1, a3 )
#define PREP_DIFF           \
LOAD_ZERO;              \
vec_s16_t pix1v, pix2v;
#define VEC_DIFF_H(p1,i1,p2,i2,n,d)                 \
pix1v = vec_vsx_ld( 0, (int16_t *)p1 );         \
pix1v = vec_u8_to_s16( pix1v );                 \
pix2v = vec_vsx_ld( 0, (int16_t *)p2 );         \
pix2v = vec_u8_to_s16( pix2v );                 \
d     = vec_sub( pix1v, pix2v );                \
p1   += i1;                                     \
p2   += i2
#define VEC_DIFF_HL(p1,i1,p2,i2,dh,dl)       \
pix1v = (vec_s16_t)vec_ld(0, p1);        \
temp0v = vec_u8_to_s16_h( pix1v );       \
temp1v = vec_u8_to_s16_l( pix1v );       \
pix2v = vec_vsx_ld( 0, (int16_t *)p2 );  \
temp2v = vec_u8_to_s16_h( pix2v );       \
temp3v = vec_u8_to_s16_l( pix2v );       \
dh     = vec_sub( temp0v, temp2v );      \
dl     = vec_sub( temp1v, temp3v );      \
p1    += i1;                             \
p2    += i2
#define PREP_DIFF_8BYTEALIGNED \
LOAD_ZERO;                     \
vec_s16_t pix1v, pix2v;        \
vec_u8_t pix1v8, pix2v8;       \
#define VEC_DIFF_H_8BYTE_ALIGNED(p1,i1,p2,i2,n,d)     \
pix1v8 = vec_vsx_ld( 0, p1 );                         \
pix2v8 = vec_vsx_ld( 0, p2 );                         \
pix1v = vec_u8_to_s16( pix1v8 );                      \
pix2v = vec_u8_to_s16( pix2v8 );                      \
d = vec_sub( pix1v, pix2v);                           \
p1 += i1;                                             \
p2 += i2;
#if !HAVE_VSX
#undef vec_vsx_ld
#define vec_vsx_ld(off, src) \
vec_perm(vec_ld(off, src), vec_ld(off + 15, src), vec_lvsl(off, src))
#undef vec_vsx_st
#define vec_vsx_st(v, off, dst)                           \
do  while( 0 )
