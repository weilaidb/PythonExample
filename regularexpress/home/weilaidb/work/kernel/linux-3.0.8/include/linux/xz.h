#define XZ_H
#	include <linux/stddef.h>
#	include <linux/types.h>
#	include <stddef.h>
#	include <stdint.h>
#	define XZ_EXTERN extern
enum xz_mode ;
enum xz_ret ;
struct xz_buf ;
struct xz_dec;
XZ_EXTERN struct xz_dec *xz_dec_init(enum xz_mode mode, uint32_t dict_max);
XZ_EXTERN enum xz_ret xz_dec_run(struct xz_dec *s, struct xz_buf *b);
XZ_EXTERN void xz_dec_reset(struct xz_dec *s);
XZ_EXTERN void xz_dec_end(struct xz_dec *s);
#	ifdef __KERNEL__
#		define XZ_INTERNAL_CRC32 0
#	else
#		define XZ_INTERNAL_CRC32 1
#	endif
#if XZ_INTERNAL_CRC32
XZ_EXTERN void xz_crc32_init(void);
XZ_EXTERN uint32_t xz_crc32(const uint8_t *buf, size_t size, uint32_t crc);
