#define __MACH_UX500_ID
struct dbx500_asic_id ;
extern struct dbx500_asic_id dbx500_id;
static inline unsigned int __attribute_const__ dbx500_partnumber(void)
static inline unsigned int __attribute_const__ dbx500_revision(void)
static inline bool __attribute_const__ cpu_is_u8500(void)
static inline bool __attribute_const__ cpu_is_u5500(void)
static inline bool __attribute_const__ cpu_is_u8500ed(void)
static inline bool __attribute_const__ cpu_is_u8500v1(void)
static inline bool __attribute_const__ cpu_is_u8500v10(void)
static inline bool __attribute_const__ cpu_is_u8500v11(void)
static inline bool __attribute_const__ cpu_is_u8500v2(void)
static inline bool cpu_is_u8500v20(void)
static inline bool cpu_is_u8500v21(void)
static inline bool cpu_is_u8500v20_or_later(void)
static inline bool ux500_is_svp(void)
#define ux500_unknown_soc()	BUG()
