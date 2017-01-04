static void vortex_fifo_setwtvalid(vortex_t * vortex, int fifo, int en);
static void vortex_connection_adb_mixin(vortex_t * vortex, int en,
unsigned char channel,
unsigned char source,
unsigned char mixin);
static void vortex_connection_mixin_mix(vortex_t * vortex, int en,
unsigned char mixin,
unsigned char mix, int a);
static void vortex_fifo_wtinitialize(vortex_t * vortex, int fifo, int j);
static int vortex_wt_SetReg(vortex_t * vortex, unsigned char reg, int wt,
u32 val);
static void vortex_wt_setstereo(vortex_t * vortex, u32 wt, u32 stereo)
static void vortex_wt_setdsout(vortex_t * vortex, u32 wt, int en)
static int vortex_wt_allocroute(vortex_t * vortex, int wt, int nr_ch)
static void vortex_wt_connect(vortex_t * vortex, int en)
static int
vortex_wt_SetReg(vortex_t * vortex, unsigned char reg, int wt,
u32 val)
static void vortex_wt_init(vortex_t * vortex)
