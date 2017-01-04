#define __GRU_H__
#define GRU_CACHE_LINE_BYTES		64
#define GRU_HANDLE_STRIDE		256
#define GRU_CB_BASE			0
#define GRU_DS_BASE			0x20000
#if defined(CONFIG_IA64)
#define GRU_GSEG_PAGESIZE	(256 * 1024UL)
#elif defined(CONFIG_X86_64)
#define GRU_GSEG_PAGESIZE	(256 * 1024UL)
#error "Unsupported architecture"
struct gru_chiplet_info ;
struct gru_gseg_statistics ;
#define GRU_OPT_MISS_DEFAULT	0x0000
#define GRU_OPT_MISS_USER_POLL	0x0001
#define GRU_OPT_MISS_FMM_INTR	0x0002
#define GRU_OPT_MISS_FMM_POLL	0x0003
#define GRU_OPT_MISS_MASK	0x0003
