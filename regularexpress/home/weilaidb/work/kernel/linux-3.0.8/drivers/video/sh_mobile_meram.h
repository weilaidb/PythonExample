#define __sh_mobile_meram_h__
#define MERAM_ICB_Y 0x1
#define MERAM_ICB_C 0x2
#define SH_MOBILE_MERAM_ICB_NUM		32
#define SH_MOBILE_MERAM_CACHE_OFFSET(p)	((p) >> 16)
#define SH_MOBILE_MERAM_CACHE_SIZE(p)	((p) & 0xffff)
struct sh_mobile_meram_priv ;
int sh_mobile_meram_alloc_icb(const struct sh_mobile_meram_cfg *cfg,
int xres,
int yres,
unsigned int base_addr,
int yuv_mode,
int *marker_icb,
int *out_pitch);
void sh_mobile_meram_free_icb(int marker_icb);
#define SH_MOBILE_MERAM_START(ind, ab) \
(0xC0000000 | ((ab & 0x1) << 23) | ((ind & 0x1F) << 24))
