#define CHIPSET_NFORCE 0x01a0
#define CHIPSET_NFORCE2 0x01f0
void
NVWriteVgaSeq(struct drm_device *dev, int head, uint8_t index, uint8_t value)
uint8_t
NVReadVgaSeq(struct drm_device *dev, int head, uint8_t index)
void
NVWriteVgaGr(struct drm_device *dev, int head, uint8_t index, uint8_t value)
uint8_t
NVReadVgaGr(struct drm_device *dev, int head, uint8_t index)
void
NVSetOwner(struct drm_device *dev, int owner)
void
NVBlankScreen(struct drm_device *dev, int head, bool blank)
static int
powerctrl_1_shift(int chip_version, int reg)
static void
setPLL_single(struct drm_device *dev, uint32_t reg, struct nouveau_pll_vals *pv)
static uint32_t
new_ramdac580(uint32_t reg1, bool ss, uint32_t ramdac580)
static void
setPLL_double_highregs(struct drm_device *dev, uint32_t reg1,
struct nouveau_pll_vals *pv)
static void
setPLL_double_lowregs(struct drm_device *dev, uint32_t NMNMreg,
struct nouveau_pll_vals *pv)
void
nouveau_hw_setpll(struct drm_device *dev, uint32_t reg1,
struct nouveau_pll_vals *pv)
static void
nouveau_hw_decode_pll(struct drm_device *dev, uint32_t reg1, uint32_t pll1,
uint32_t pll2, struct nouveau_pll_vals *pllvals)
int
nouveau_hw_get_pllvals(struct drm_device *dev, enum pll_types plltype,
struct nouveau_pll_vals *pllvals)
int
nouveau_hw_pllvals_to_clk(struct nouveau_pll_vals *pv)
int
nouveau_hw_get_clock(struct drm_device *dev, enum pll_types plltype)
static void
nouveau_hw_fix_bad_vpll(struct drm_device *dev, int head)
static void nouveau_vga_font_io(struct drm_device *dev,
void __iomem *iovram,
bool save, unsigned plane)
void
nouveau_hw_save_vga_fonts(struct drm_device *dev, bool save)
static void
rd_cio_state(struct drm_device *dev, int head,
struct nv04_crtc_reg *crtcstate, int index)
static void
wr_cio_state(struct drm_device *dev, int head,
struct nv04_crtc_reg *crtcstate, int index)
static void
nv_save_state_ramdac(struct drm_device *dev, int head,
struct nv04_mode_state *state)
static void
nv_load_state_ramdac(struct drm_device *dev, int head,
struct nv04_mode_state *state)
static void
nv_save_state_vga(struct drm_device *dev, int head,
struct nv04_mode_state *state)
static void
nv_load_state_vga(struct drm_device *dev, int head,
struct nv04_mode_state *state)
static void
nv_save_state_ext(struct drm_device *dev, int head,
struct nv04_mode_state *state)
static void
nv_load_state_ext(struct drm_device *dev, int head,
struct nv04_mode_state *state)
static void
nv_save_state_palette(struct drm_device *dev, int head,
struct nv04_mode_state *state)
void
nouveau_hw_load_state_palette(struct drm_device *dev, int head,
struct nv04_mode_state *state)
void nouveau_hw_save_state(struct drm_device *dev, int head,
struct nv04_mode_state *state)
void nouveau_hw_load_state(struct drm_device *dev, int head,
struct nv04_mode_state *state)
