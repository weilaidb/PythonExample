#define __CEPH_DECODE_H
static inline u64 ceph_decode_64(void **p)
static inline u32 ceph_decode_32(void **p)
static inline u16 ceph_decode_16(void **p)
static inline u8 ceph_decode_8(void **p)
static inline void ceph_decode_copy(void **p, void *pv, size_t n)
#define ceph_decode_need(p, end, n, bad)		\
do  while (0)
#define ceph_decode_64_safe(p, end, v, bad)			\
do  while (0)
#define ceph_decode_32_safe(p, end, v, bad)			\
do  while (0)
#define ceph_decode_16_safe(p, end, v, bad)			\
do  while (0)
#define ceph_decode_8_safe(p, end, v, bad)			\
do  while (0)
#define ceph_decode_copy_safe(p, end, pv, n, bad)		\
do  while (0)
static inline void ceph_decode_timespec(struct timespec *ts,
const struct ceph_timespec *tv)
static inline void ceph_encode_timespec(struct ceph_timespec *tv,
const struct timespec *ts)
static inline void ceph_encode_addr(struct ceph_entity_addr *a)
static inline void ceph_decode_addr(struct ceph_entity_addr *a)
static inline void ceph_encode_64(void **p, u64 v)
static inline void ceph_encode_32(void **p, u32 v)
static inline void ceph_encode_16(void **p, u16 v)
static inline void ceph_encode_8(void **p, u8 v)
static inline void ceph_encode_copy(void **p, const void *s, int len)
static inline void ceph_encode_filepath(void **p, void *end,
u64 ino, const char *path)
static inline void ceph_encode_string(void **p, void *end,
const char *s, u32 len)
#define ceph_encode_need(p, end, n, bad)		\
do  while (0)
#define ceph_encode_64_safe(p, end, v, bad)			\
do  while (0)
#define ceph_encode_32_safe(p, end, v, bad)			\
do  while (0)
#define ceph_encode_16_safe(p, end, v, bad)			\
do  while (0)
#define ceph_encode_copy_safe(p, end, pv, n, bad)		\
do  while (0)
#define ceph_encode_string_safe(p, end, s, n, bad)		\
do  while (0)
