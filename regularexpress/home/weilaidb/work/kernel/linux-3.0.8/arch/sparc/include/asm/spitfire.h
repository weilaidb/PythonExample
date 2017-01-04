#define _SPARC64_SPITFIRE_H
#define TSB_TAG_TARGET		0x0000000000000000
#define TLB_SFSR		0x0000000000000018
#define TSB_REG			0x0000000000000028
#define TLB_TAG_ACCESS		0x0000000000000030
#define VIRT_WATCHPOINT		0x0000000000000038
#define PHYS_WATCHPOINT		0x0000000000000040
#define TSB_EXTENSION_P		0x0000000000000048
#define TSB_EXTENSION_S		0x0000000000000050
#define TSB_EXTENSION_N		0x0000000000000058
#define TLB_TAG_ACCESS_EXT	0x0000000000000060
#define PRIMARY_CONTEXT		0x0000000000000008
#define SECONDARY_CONTEXT	0x0000000000000010
#define DMMU_SFAR		0x0000000000000020
#define VIRT_WATCHPOINT		0x0000000000000038
#define PHYS_WATCHPOINT		0x0000000000000040
#define SPITFIRE_HIGHEST_LOCKED_TLBENT	(64 - 1)
#define CHEETAH_HIGHEST_LOCKED_TLBENT	(16 - 1)
#define L1DCACHE_SIZE		0x4000
#define SUN4V_CHIP_INVALID	0x00
#define SUN4V_CHIP_NIAGARA1	0x01
#define SUN4V_CHIP_NIAGARA2	0x02
#define SUN4V_CHIP_NIAGARA3	0x03
#define SUN4V_CHIP_UNKNOWN	0xff
enum ultra_tlb_layout ;
extern enum ultra_tlb_layout tlb_type;
extern int sun4v_chip_type;
extern int cheetah_pcache_forced_on;
extern void cheetah_enable_pcache(void);
#define sparc64_highest_locked_tlbent()	\
(tlb_type == spitfire ? \
SPITFIRE_HIGHEST_LOCKED_TLBENT : \
CHEETAH_HIGHEST_LOCKED_TLBENT)
extern int num_kernel_image_mappings;
static inline void spitfire_put_dcache_tag(unsigned long addr, unsigned long tag)
static inline void spitfire_put_icache_tag(unsigned long addr, unsigned long tag)
static inline unsigned long spitfire_get_dtlb_data(int entry)
static inline unsigned long spitfire_get_dtlb_tag(int entry)
static inline void spitfire_put_dtlb_data(int entry, unsigned long data)
static inline unsigned long spitfire_get_itlb_data(int entry)
static inline unsigned long spitfire_get_itlb_tag(int entry)
static inline void spitfire_put_itlb_data(int entry, unsigned long data)
static inline void spitfire_flush_dtlb_nucleus_page(unsigned long page)
static inline void spitfire_flush_itlb_nucleus_page(unsigned long page)
static inline void cheetah_flush_dtlb_all(void)
static inline void cheetah_flush_itlb_all(void)
static inline unsigned long cheetah_get_ldtlb_data(int entry)
static inline unsigned long cheetah_get_litlb_data(int entry)
static inline unsigned long cheetah_get_ldtlb_tag(int entry)
static inline unsigned long cheetah_get_litlb_tag(int entry)
static inline void cheetah_put_ldtlb_data(int entry, unsigned long data)
static inline void cheetah_put_litlb_data(int entry, unsigned long data)
static inline unsigned long cheetah_get_dtlb_data(int entry, int tlb)
static inline unsigned long cheetah_get_dtlb_tag(int entry, int tlb)
static inline void cheetah_put_dtlb_data(int entry, unsigned long data, int tlb)
static inline unsigned long cheetah_get_itlb_data(int entry)
static inline unsigned long cheetah_get_itlb_tag(int entry)
static inline void cheetah_put_itlb_data(int entry, unsigned long data)
