#define __NOUVEAU_HW_H__
#define MASK(field) ( \
(0xffffffff >> (31 - ((1 ? field) - (0 ? field)))) << (0 ? field))
#define XLATE(src, srclowbit, outfield) ( \
(((src) >> (srclowbit)) << (0 ? outfield)) & MASK(outfield))
void NVWriteVgaSeq(struct drm_device *, int head, uint8_t index, uint8_t value);
uint8_t NVReadVgaSeq(struct drm_device *, int head, uint8_t index);
void NVWriteVgaGr(struct drm_device *, int head, uint8_t index, uint8_t value);
uint8_t NVReadVgaGr(struct drm_device *, int head, uint8_t index);
void NVSetOwner(struct drm_device *, int owner);
void NVBlankScreen(struct drm_device *, int head, bool blank);
void nouveau_hw_setpll(struct drm_device *, uint32_t reg1,
struct nouveau_pll_vals *pv);
int nouveau_hw_get_pllvals(struct drm_device *, enum pll_types plltype,
struct nouveau_pll_vals *pllvals);
int nouveau_hw_pllvals_to_clk(struct nouveau_pll_vals *pllvals);
int nouveau_hw_get_clock(struct drm_device *, enum pll_types plltype);
void nouveau_hw_save_vga_fonts(struct drm_device *, bool save);
void nouveau_hw_save_state(struct drm_device *, int head,
struct nv04_mode_state *state);
void nouveau_hw_load_state(struct drm_device *, int head,
struct nv04_mode_state *state);
void nouveau_hw_load_state_palette(struct drm_device *, int head,
struct nv04_mode_state *state);
extern void nouveau_calc_arb(struct drm_device *, int vclk, int bpp,
int *burst, int *lwm);
extern int nouveau_calc_pll_mnp(struct drm_device *, struct pll_lims *pll_lim,
int clk, struct nouveau_pll_vals *pv);
static inline uint32_t
nvReadMC(struct drm_device *dev, uint32_t reg)
static inline void
nvWriteMC(struct drm_device *dev, uint32_t reg, uint32_t val)
static inline uint32_t
nvReadVIDEO(struct drm_device *dev, uint32_t reg)
static inline void
nvWriteVIDEO(struct drm_device *dev, uint32_t reg, uint32_t val)
static inline uint32_t
nvReadFB(struct drm_device *dev, uint32_t reg)
static inline void
nvWriteFB(struct drm_device *dev, uint32_t reg, uint32_t val)
static inline uint32_t
nvReadEXTDEV(struct drm_device *dev, uint32_t reg)
static inline void
nvWriteEXTDEV(struct drm_device *dev, uint32_t reg, uint32_t val)
static inline uint32_t NVReadCRTC(struct drm_device *dev,
int head, uint32_t reg)
static inline void NVWriteCRTC(struct drm_device *dev,
int head, uint32_t reg, uint32_t val)
static inline uint32_t NVReadRAMDAC(struct drm_device *dev,
int head, uint32_t reg)
static inline void NVWriteRAMDAC(struct drm_device *dev,
int head, uint32_t reg, uint32_t val)
static inline uint8_t nv_read_tmds(struct drm_device *dev,
int or, int dl, uint8_t address)
static inline void nv_write_tmds(struct drm_device *dev,
int or, int dl, uint8_t address,
uint8_t data)
static inline void NVWriteVgaCrtc(struct drm_device *dev,
int head, uint8_t index, uint8_t value)
static inline uint8_t NVReadVgaCrtc(struct drm_device *dev,
int head, uint8_t index)
static inline void
NVWriteVgaCrtc5758(struct drm_device *dev, int head, uint8_t index, uint8_t value)
static inline uint8_t NVReadVgaCrtc5758(struct drm_device *dev, int head, uint8_t index)
static inline uint8_t NVReadPRMVIO(struct drm_device *dev,
int head, uint32_t reg)
static inline void NVWritePRMVIO(struct drm_device *dev,
int head, uint32_t reg, uint8_t value)
static inline void NVSetEnablePalette(struct drm_device *dev, int head, bool enable)
static inline bool NVGetEnablePalette(struct drm_device *dev, int head)
static inline void NVWriteVgaAttr(struct drm_device *dev,
int head, uint8_t index, uint8_t value)
static inline uint8_t NVReadVgaAttr(struct drm_device *dev,
int head, uint8_t index)
static inline void NVVgaSeqReset(struct drm_device *dev, int head, bool start)
static inline void NVVgaProtect(struct drm_device *dev, int head, bool protect)
static inline bool
nv_heads_tied(struct drm_device *dev)
static inline bool
nv_lock_vga_crtc_base(struct drm_device *dev, int head, bool lock)
static inline void
nv_lock_vga_crtc_shadow(struct drm_device *dev, int head, int lock)
static inline bool
NVLockVgaCrtcs(struct drm_device *dev, bool lock)
#define NV04_CURSOR_SIZE 32
#define NV10_CURSOR_SIZE 64
static inline int nv_cursor_width(struct drm_device *dev)
static inline void
nv_fix_nv40_hw_cursor(struct drm_device *dev, int head)
static inline void
nv_set_crtc_base(struct drm_device *dev, int head, uint32_t offset)
static inline void
nv_show_cursor(struct drm_device *dev, int head, bool show)
static inline uint32_t
nv_pitch_align(struct drm_device *dev, uint32_t width, int bpp)
