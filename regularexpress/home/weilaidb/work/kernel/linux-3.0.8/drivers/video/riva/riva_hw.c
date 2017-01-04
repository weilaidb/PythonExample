static int nv3Busy
(
RIVA_HW_INST *chip
)
static int nv4Busy
(
RIVA_HW_INST *chip
)
static int nv10Busy
(
RIVA_HW_INST *chip
)
static void vgaLockUnlock
(
RIVA_HW_INST *chip,
int           Lock
)
static void nv3LockUnlock
(
RIVA_HW_INST *chip,
int           Lock
)
static void nv4LockUnlock
(
RIVA_HW_INST *chip,
int           Lock
)
static int ShowHideCursor
(
RIVA_HW_INST *chip,
int           ShowHide
)
#define DEFAULT_GR_LWM 100
#define DEFAULT_VID_LWM 100
#define DEFAULT_GR_BURST_SIZE 256
#define DEFAULT_VID_BURST_SIZE 128
#define VIDEO		0
#define GRAPHICS	1
#define MPORT		2
#define ENGINE		3
#define GFIFO_SIZE	320
#define GFIFO_SIZE_128	256
#define MFIFO_SIZE	120
#define VFIFO_SIZE	256
typedef struct  nv3_arb_info;
typedef struct  nv3_fifo_info;
typedef struct  nv3_sim_state;
typedef struct  nv4_fifo_info;
typedef struct  nv4_sim_state;
typedef struct  nv10_fifo_info;
typedef struct  nv10_sim_state;
static int nv3_iterate(nv3_fifo_info *res_info, nv3_sim_state * state, nv3_arb_info *ainfo)
static char nv3_arb(nv3_fifo_info * res_info, nv3_sim_state * state,  nv3_arb_info *ainfo)
static char nv3_get_param(nv3_fifo_info *res_info, nv3_sim_state * state, nv3_arb_info *ainfo)
static void nv3CalcArbitration
(
nv3_fifo_info * res_info,
nv3_sim_state * state
)
static void nv3UpdateArbitrationSettings
(
unsigned      VClk,
unsigned      pixelDepth,
unsigned     *burst,
unsigned     *lwm,
RIVA_HW_INST *chip
)
static void nv4CalcArbitration
(
nv4_fifo_info *fifo,
nv4_sim_state *arb
)
static void nv4UpdateArbitrationSettings
(
unsigned      VClk,
unsigned      pixelDepth,
unsigned     *burst,
unsigned     *lwm,
RIVA_HW_INST *chip
)
static void nv10CalcArbitration
(
nv10_fifo_info *fifo,
nv10_sim_state *arb
)
static void nv10UpdateArbitrationSettings
(
unsigned      VClk,
unsigned      pixelDepth,
unsigned     *burst,
unsigned     *lwm,
RIVA_HW_INST *chip
)
static void nForceUpdateArbitrationSettings
(
unsigned      VClk,
unsigned      pixelDepth,
unsigned     *burst,
unsigned     *lwm,
RIVA_HW_INST *chip
)
static int CalcVClock
(
int           clockIn,
int          *clockOut,
int          *mOut,
int          *nOut,
int          *pOut,
RIVA_HW_INST *chip
)
int CalcStateExt
(
RIVA_HW_INST  *chip,
RIVA_HW_STATE *state,
int            bpp,
int            width,
int            hDisplaySize,
int            height,
int            dotClock
)
#define LOAD_FIXED_STATE(tbl,dev)                                       \
for (i = 0; i < sizeof(tbl##Table##dev)/8; i++)                 \
NV_WR32(&chip->dev[tbl##Table##dev[i][0]], 0, tbl##Table##dev[i][1])
#define LOAD_FIXED_STATE_8BPP(tbl,dev)                                  \
for (i = 0; i < sizeof(tbl##Table##dev##_8BPP)/8; i++)            \
NV_WR32(&chip->dev[tbl##Table##dev##_8BPP[i][0]], 0, tbl##Table##dev##_8BPP[i][1])
#define LOAD_FIXED_STATE_15BPP(tbl,dev)                                 \
for (i = 0; i < sizeof(tbl##Table##dev##_15BPP)/8; i++)           \
NV_WR32(&chip->dev[tbl##Table##dev##_15BPP[i][0]], 0, tbl##Table##dev##_15BPP[i][1])
#define LOAD_FIXED_STATE_16BPP(tbl,dev)                                 \
for (i = 0; i < sizeof(tbl##Table##dev##_16BPP)/8; i++)           \
NV_WR32(&chip->dev[tbl##Table##dev##_16BPP[i][0]], 0, tbl##Table##dev##_16BPP[i][1])
#define LOAD_FIXED_STATE_32BPP(tbl,dev)                                 \
for (i = 0; i < sizeof(tbl##Table##dev##_32BPP)/8; i++)           \
NV_WR32(&chip->dev[tbl##Table##dev##_32BPP[i][0]], 0, tbl##Table##dev##_32BPP[i][1])
static void UpdateFifoState
(
RIVA_HW_INST  *chip
)
static void LoadStateExt
(
RIVA_HW_INST  *chip,
RIVA_HW_STATE *state
)
static void UnloadStateExt
(
RIVA_HW_INST  *chip,
RIVA_HW_STATE *state
)
static void SetStartAddress
(
RIVA_HW_INST *chip,
unsigned      start
)
static void SetStartAddress3
(
RIVA_HW_INST *chip,
unsigned      start
)
static void nv3SetSurfaces2D
(
RIVA_HW_INST *chip,
unsigned     surf0,
unsigned     surf1
)
static void nv4SetSurfaces2D
(
RIVA_HW_INST *chip,
unsigned     surf0,
unsigned     surf1
)
static void nv10SetSurfaces2D
(
RIVA_HW_INST *chip,
unsigned     surf0,
unsigned     surf1
)
static void nv3SetSurfaces3D
(
RIVA_HW_INST *chip,
unsigned     surf0,
unsigned     surf1
)
static void nv4SetSurfaces3D
(
RIVA_HW_INST *chip,
unsigned     surf0,
unsigned     surf1
)
static void nv10SetSurfaces3D
(
RIVA_HW_INST *chip,
unsigned     surf0,
unsigned     surf1
)
static void nv3GetConfig
(
RIVA_HW_INST *chip
)
static void nv4GetConfig
(
RIVA_HW_INST *chip
)
static void nv10GetConfig
(
RIVA_HW_INST *chip,
unsigned int chipset
)
int RivaGetConfig
(
RIVA_HW_INST *chip,
unsigned int chipset
)
