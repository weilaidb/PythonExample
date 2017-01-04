#define RT2X00REG_H
enum rx_crypto ;
enum antenna ;
enum led_mode ;
enum tsf_sync ;
enum dev_state ;
enum ifs ;
enum txop ;
enum cipher ;
enum rate_modulation ;
enum firmware_errors ;
struct rt2x00_field8 ;
struct rt2x00_field16 ;
struct rt2x00_field32 ;
#define is_power_of_two(x)	( !((x) & ((x)-1)) )
#define low_bit_mask(x)		( ((x)-1) & ~(x) )
#define is_valid_mask(x)	is_power_of_two(1LU + (x) + low_bit_mask(x))
#define compile_ffs2(__x) \
__builtin_choose_expr(((__x) & 0x1), 0, 1)
#define compile_ffs4(__x) \
__builtin_choose_expr(((__x) & 0x3), \
(compile_ffs2((__x))), \
(compile_ffs2((__x) >> 2) + 2))
#define compile_ffs8(__x) \
__builtin_choose_expr(((__x) & 0xf), \
(compile_ffs4((__x))), \
(compile_ffs4((__x) >> 4) + 4))
#define compile_ffs16(__x) \
__builtin_choose_expr(((__x) & 0xff), \
(compile_ffs8((__x))), \
(compile_ffs8((__x) >> 8) + 8))
#define compile_ffs32(__x) \
__builtin_choose_expr(((__x) & 0xffff), \
(compile_ffs16((__x))), \
(compile_ffs16((__x) >> 16) + 16))
#define FIELD_CHECK(__mask, __type)			\
BUILD_BUG_ON(!(__mask) ||			\
!is_valid_mask(__mask) ||		\
(__mask) != (__type)(__mask))	\
#define FIELD8(__mask)				\
()
#define FIELD16(__mask)				\
()
#define FIELD32(__mask)				\
()
#define SET_FIELD(__reg, __type, __field, __value)\
()
#define GET_FIELD(__reg, __type, __field)	\
()
#define rt2x00_set_field32(__reg, __field, __value) \
SET_FIELD(__reg, struct rt2x00_field32, __field, __value)
#define rt2x00_get_field32(__reg, __field) \
GET_FIELD(__reg, struct rt2x00_field32, __field)
#define rt2x00_set_field16(__reg, __field, __value) \
SET_FIELD(__reg, struct rt2x00_field16, __field, __value)
#define rt2x00_get_field16(__reg, __field) \
GET_FIELD(__reg, struct rt2x00_field16, __field)
#define rt2x00_set_field8(__reg, __field, __value) \
SET_FIELD(__reg, struct rt2x00_field8, __field, __value)
#define rt2x00_get_field8(__reg, __field) \
GET_FIELD(__reg, struct rt2x00_field8, __field)
