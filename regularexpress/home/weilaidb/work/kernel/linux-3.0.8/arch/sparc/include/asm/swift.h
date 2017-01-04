#define _SPARC_SWIFT_H
#define SWIFT_ST       0x00800000
#define SWIFT_WP       0x00400000
#define SWIFT_BF       0x00200000
#define SWIFT_PMC      0x00180000
#define SWIFT_PE       0x00040000
#define SWIFT_PC       0x00020000
#define SWIFT_AP       0x00010000
#define SWIFT_AC       0x00008000
#define SWIFT_BM       0x00004000
#define SWIFT_RC       0x00003c00
#define SWIFT_IE       0x00000200
#define SWIFT_DE       0x00000100
#define SWIFT_SA       0x00000080
#define SWIFT_NF       0x00000002
#define SWIFT_EN       0x00000001
static inline void swift_inv_insn_tag(unsigned long addr)
static inline void swift_inv_data_tag(unsigned long addr)
static inline void swift_flush_dcache(void)
static inline void swift_flush_icache(void)
static inline void swift_idflash_clear(void)
static inline void swift_flush_page(unsigned long page)
static inline void swift_flush_segment(unsigned long addr)
static inline void swift_flush_region(unsigned long addr)
static inline void swift_flush_context(void)
