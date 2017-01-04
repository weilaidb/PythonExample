static inline unsigned int g450_vco2f(unsigned char p, unsigned int fvco)
static inline unsigned int g450_f2vco(unsigned char p, unsigned int fin)
static unsigned int g450_mnp2vco(const struct matrox_fb_info *minfo,
unsigned int mnp)
unsigned int g450_mnp2f(const struct matrox_fb_info *minfo, unsigned int mnp)
static inline unsigned int pll_freq_delta(unsigned int f1, unsigned int f2)
#define NO_MORE_MNP	0x01FFFFFF
#define G450_MNP_FREQBITS	(0xFFFFFF43)
static unsigned int g450_nextpll(const struct matrox_fb_info *minfo,
const struct matrox_pll_limits *pi,
unsigned int *fvco, unsigned int mnp)
static unsigned int g450_firstpll(const struct matrox_fb_info *minfo,
const struct matrox_pll_limits *pi,
unsigned int *vco, unsigned int fout)
static inline unsigned int g450_setpll(const struct matrox_fb_info *minfo,
unsigned int mnp, unsigned int pll)
static inline unsigned int g450_cmppll(const struct matrox_fb_info *minfo,
unsigned int mnp, unsigned int pll)
static inline int g450_isplllocked(const struct matrox_fb_info *minfo,
unsigned int regidx)
static int g450_testpll(const struct matrox_fb_info *minfo, unsigned int mnp,
unsigned int pll)
static void updatehwstate_clk(struct matrox_hw_state* hw, unsigned int mnp, unsigned int pll)
void matroxfb_g450_setpll_cond(struct matrox_fb_info *minfo, unsigned int mnp,
unsigned int pll)
static inline unsigned int g450_findworkingpll(struct matrox_fb_info *minfo,
unsigned int pll,
unsigned int *mnparray,
unsigned int mnpcount)
static void g450_addcache(struct matrox_pll_cache* ci, unsigned int mnp_key, unsigned int mnp_value)
static int g450_checkcache(struct matrox_fb_info *minfo,
struct matrox_pll_cache *ci, unsigned int mnp_key)
static int __g450_setclk(struct matrox_fb_info *minfo, unsigned int fout,
unsigned int pll, unsigned int *mnparray,
unsigned int *deltaarray)
#define MNP_TABLE_SIZE  64
int matroxfb_g450_setclk(struct matrox_fb_info *minfo, unsigned int fout,
unsigned int pll)
EXPORT_SYMBOL(matroxfb_g450_setclk);
EXPORT_SYMBOL(g450_mnp2f);
EXPORT_SYMBOL(matroxfb_g450_setpll_cond);
MODULE_AUTHOR("(c) 2001-2002 Petr Vandrovec <vandrove@vc.cvut.cz>");
MODULE_DESCRIPTION("Matrox G450/G550 PLL driver");
MODULE_LICENSE("GPL");
