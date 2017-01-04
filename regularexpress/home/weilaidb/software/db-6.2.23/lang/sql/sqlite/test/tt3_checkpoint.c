#define CHECKPOINT_STARVATION_FRAMELIMIT 50
#define CHECKPOINT_STARVATION_READMS    100
struct CheckpointStarvationCtx ;
typedef struct CheckpointStarvationCtx CheckpointStarvationCtx;
static int checkpoint_starvation_walhook(
void *pCtx,
sqlite3 *db,
const char *zDb,
int nFrame
)
static char *checkpoint_starvation_reader(int iTid, void *pArg)
static void checkpoint_starvation_main(int nMs, CheckpointStarvationCtx *p)
static void checkpoint_starvation_1(int nMs)
static void checkpoint_starvation_2(int nMs)
