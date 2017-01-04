#define __ASM_SH_WATCHDOG_H
#define WTCNT_HIGH	0x5a
#define WTCSR_HIGH	0xa5
#define WTCSR_CKS2	0x04
#define WTCSR_CKS1	0x02
#define WTCSR_CKS0	0x01
#  define WTCNT_R	WTCNT
#  define WTCSR_R	WTCSR
#define WTCSR_CKS_32	0x00
#define WTCSR_CKS_64	0x01
#define WTCSR_CKS_128	0x02
#define WTCSR_CKS_256	0x03
#define WTCSR_CKS_512	0x04
#define WTCSR_CKS_1024	0x05
#define WTCSR_CKS_2048	0x06
#define WTCSR_CKS_4096	0x07
#if defined(CONFIG_CPU_SUBTYPE_SH7785) || defined(CONFIG_CPU_SUBTYPE_SH7780)
static inline __u32 sh_wdt_read_cnt(void)
static inline void sh_wdt_write_cnt(__u32 val)
static inline void sh_wdt_write_bst(__u32 val)
static inline __u32 sh_wdt_read_csr(void)
static inline void sh_wdt_write_csr(__u32 val)
static inline __u8 sh_wdt_read_cnt(void)
static inline void sh_wdt_write_cnt(__u8 val)
static inline __u8 sh_wdt_read_csr(void)
static inline void sh_wdt_write_csr(__u8 val)
