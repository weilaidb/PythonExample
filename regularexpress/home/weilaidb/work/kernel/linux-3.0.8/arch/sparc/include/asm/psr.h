#define __LINUX_SPARC_PSR_H
#define PSR_CWP     0x0000001f
#define PSR_ET      0x00000020
#define PSR_PS      0x00000040
#define PSR_S       0x00000080
#define PSR_PIL     0x00000f00
#define PSR_EF      0x00001000
#define PSR_EC      0x00002000
#define PSR_SYSCALL 0x00004000
#define PSR_LE      0x00008000
#define PSR_ICC     0x00f00000
#define PSR_C       0x00100000
#define PSR_V       0x00200000
#define PSR_Z       0x00400000
#define PSR_N       0x00800000
#define PSR_VERS    0x0f000000
#define PSR_IMPL    0xf0000000
static inline unsigned int get_psr(void)
static inline void put_psr(unsigned int new_psr)
extern unsigned int fsr_storage;
static inline unsigned int get_fsr(void)
