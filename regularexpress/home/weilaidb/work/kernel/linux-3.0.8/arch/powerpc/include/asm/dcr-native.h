#define _ASM_POWERPC_DCR_NATIVE_H
typedef struct  dcr_host_native_t;
static inline bool dcr_map_ok_native(dcr_host_native_t host)
#define dcr_map_native(dev, dcr_n, dcr_c) \
((dcr_host_native_t))
#define dcr_unmap_native(host, dcr_c)		do  while (0)
#define dcr_read_native(host, dcr_n)		mfdcr(dcr_n + host.base)
#define dcr_write_native(host, dcr_n, value)	mtdcr(dcr_n + host.base, value)
extern void __mtdcr(unsigned int reg, unsigned int val);
extern unsigned int __mfdcr(unsigned int reg);
static inline unsigned int mfdcrx(unsigned int reg)
static inline void mtdcrx(unsigned int reg, unsigned int val)
#define mfdcr(rn)						\
()
#define mtdcr(rn, v)						\
do  while (0)
extern spinlock_t dcr_ind_lock;
static inline unsigned __mfdcri(int base_addr, int base_data, int reg)
static inline void __mtdcri(int base_addr, int base_data, int reg,
unsigned val)
static inline void __dcri_clrset(int base_addr, int base_data, int reg,
unsigned clr, unsigned set)
#define mfdcri(base, reg)	__mfdcri(DCRN_ ## base ## _CONFIG_ADDR,	\
DCRN_ ## base ## _CONFIG_DATA,	\
reg)
#define mtdcri(base, reg, data)	__mtdcri(DCRN_ ## base ## _CONFIG_ADDR,	\
DCRN_ ## base ## _CONFIG_DATA,	\
reg, data)
#define dcri_clrset(base, reg, clr, set)	__dcri_clrset(DCRN_ ## base ## _CONFIG_ADDR,	\
DCRN_ ## base ## _CONFIG_DATA,	\
reg, clr, set)
