#define _SPARC_VAC_OPS_H
#define S4CVACTAG_CID      0x01c00000
#define S4CVACTAG_W        0x00200000
#define S4CVACTAG_P        0x00100000
#define S4CVACTAG_V        0x00080000
#define S4CVACTAG_TID      0x0000fffc
#define S4CVAC_BADBITS    0x0000f000
#define S4CVAC_BADALIAS(vaddr1, vaddr2) \
((((unsigned long) (vaddr1)) ^ ((unsigned long) (vaddr2))) & \
(S4CVAC_BADBITS))
struct sun4c_vac_props ;
extern struct sun4c_vac_props sun4c_vacinfo;
static inline void sun4c_enable_vac(void)
static inline void sun4c_disable_vac(void)
