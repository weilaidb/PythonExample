#define _LINUX_UUID_H_
typedef struct  uuid_le;
typedef struct  uuid_be;
#define UUID_LE(a, b, c, d0, d1, d2, d3, d4, d5, d6, d7)		\
((uuid_le)								\
)
#define UUID_BE(a, b, c, d0, d1, d2, d3, d4, d5, d6, d7)		\
((uuid_be)								\
)
#define NULL_UUID_LE							\
UUID_LE(0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00,	\
0x00, 0x00, 0x00, 0x00)
#define NULL_UUID_BE							\
UUID_BE(0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00,	\
0x00, 0x00, 0x00, 0x00)
static inline int uuid_le_cmp(const uuid_le u1, const uuid_le u2)
static inline int uuid_be_cmp(const uuid_be u1, const uuid_be u2)
extern void uuid_le_gen(uuid_le *u);
extern void uuid_be_gen(uuid_be *u);
