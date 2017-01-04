#define _SPARC_ROSS_H
#define HYPERSPARC_CWENABLE   0x00200000
#define HYPERSPARC_SBENABLE   0x00100000
#define HYPERSPARC_WBENABLE   0x00080000
#define HYPERSPARC_MIDMASK    0x00078000
#define HYPERSPARC_BMODE      0x00004000
#define HYPERSPARC_ACENABLE   0x00002000
#define HYPERSPARC_CSIZE      0x00001000
#define HYPERSPARC_MRFLCT     0x00000800
#define HYPERSPARC_CMODE      0x00000400
#define HYPERSPARC_CENABLE    0x00000100
#define HYPERSPARC_NFAULT     0x00000002
#define HYPERSPARC_MENABLE    0x00000001
#define HYPERSPARC_ICCR_FTD     0x00000002
#define HYPERSPARC_ICCR_ICE     0x00000001
static inline unsigned int get_ross_icr(void)
static inline void put_ross_icr(unsigned int icreg)
static inline void hyper_flush_whole_icache(void)
extern int vac_cache_size;
extern int vac_line_size;
static inline void hyper_clear_all_tags(void)
static inline void hyper_flush_unconditional_combined(void)
static inline void hyper_flush_cache_user(void)
static inline void hyper_flush_cache_page(unsigned long page)
