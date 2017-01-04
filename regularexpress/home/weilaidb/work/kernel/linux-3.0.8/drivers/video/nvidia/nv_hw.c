void NVLockUnlock(struct nvidia_par *par, int Lock)
int NVShowHideCursor(struct nvidia_par *par, int ShowHide)
typedef struct  nv4_fifo_info;
typedef struct  nv4_sim_state;
typedef struct  nv10_fifo_info;
typedef struct  nv10_sim_state;
static void nvGetClocks(struct nvidia_par *par, unsigned int *MClk,
unsigned int *NVClk)
static void nv4CalcArbitration(nv4_fifo_info * fifo, nv4_sim_state * arb)
static void nv4UpdateArbitrationSettings(unsigned VClk,
unsigned pixelDepth,
unsigned *burst,
unsigned *lwm, struct nvidia_par *par)
static void nv10CalcArbitration(nv10_fifo_info * fifo, nv10_sim_state * arb)
{
int data, pagemiss, width, video_enable, bpp;
int nvclks, mclks, pclks, vpagemiss, crtpagemiss;
int nvclk_fill;
int found, mclk_extra, mclk_loop, cbs, m1;
int mclk_freq, pclk_freq, nvclk_freq, mp_enable;
int us_m, us_m_min, us_n, us_p, crtc_drain_rate;
int vus_m;
int vpm_us, us_video, cpm_us, us_crt, clwm;
int clwm_rnd_down;
int m2us, us_pipe_min, p1clk, p2;
int min_mclk_extra;
int us_min_mclk_extra;
fifo->valid = 1;
pclk_freq = arb->pclk_khz;
mclk_freq = arb->mclk_khz;
nvclk_freq = arb->nvclk_khz;
pagemiss = arb->mem_page_miss;
width = arb->memory_width / 64;
video_enable = arb->enable_video;
bpp = arb->pix_bpp;
mp_enable = arb->enable_mp;
clwm = 0;
cbs = 512;
pclks = 4;
nvclks = 3;
nvclks += 2;
mclks = 1;
mclks += 1;
mclks += 5;
mclks += 2;
mclks += 2;
mclks += 7;
if (arb->memory_type == 0)
if (arb->memory_width == 64)
mclks += 4;
else
mclks += 2;
else if (arb->memory_width == 64)
mclks += 2;
else
mclks += 1;
if ((!video_enable) && (arb->memory_width == 128))  else
static void nv10UpdateArbitrationSettings(unsigned VClk,
unsigned pixelDepth,
unsigned *burst,
unsigned *lwm,
struct nvidia_par *par)
static void nv30UpdateArbitrationSettings (
struct nvidia_par *par,
unsigned int      *burst,
unsigned int      *lwm
)
static void nForceUpdateArbitrationSettings(unsigned VClk,
unsigned pixelDepth,
unsigned *burst,
unsigned *lwm,
struct nvidia_par *par)
static void CalcVClock(int clockIn,
int *clockOut, u32 * pllOut, struct nvidia_par *par)
static void CalcVClock2Stage(int clockIn,
int *clockOut,
u32 * pllOut,
u32 * pllBOut, struct nvidia_par *par)
void NVCalcStateExt(struct nvidia_par *par,
RIVA_HW_STATE * state,
int bpp,
int width,
int hDisplaySize, int height, int dotClock, int flags)
void NVLoadStateExt(struct nvidia_par *par, RIVA_HW_STATE * state)
void NVUnloadStateExt(struct nvidia_par *par, RIVA_HW_STATE * state)
void NVSetStartAddress(struct nvidia_par *par, u32 start)
