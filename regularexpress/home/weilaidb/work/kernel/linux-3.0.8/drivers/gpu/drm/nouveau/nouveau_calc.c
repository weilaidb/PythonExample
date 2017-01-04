struct nv_fifo_info ;
struct nv_sim_state ;
static void
nv04_calc_arb(struct nv_fifo_info *fifo, struct nv_sim_state *arb)
static void
nv10_calc_arb(struct nv_fifo_info *fifo, struct nv_sim_state *arb)
static void
nv04_update_arb(struct drm_device *dev, int VClk, int bpp,
int *burst, int *lwm)
static void
nv20_update_arb(int *burst, int *lwm)
void
nouveau_calc_arb(struct drm_device *dev, int vclk, int bpp, int *burst, int *lwm)
static int
getMNP_single(struct drm_device *dev, struct pll_lims *pll_lim, int clk,
struct nouveau_pll_vals *bestpv)
static int
getMNP_double(struct drm_device *dev, struct pll_lims *pll_lim, int clk,
struct nouveau_pll_vals *bestpv)
int
nouveau_calc_pll_mnp(struct drm_device *dev, struct pll_lims *pll_lim, int clk,
struct nouveau_pll_vals *pv)
