#define DEBUG
void spufs_stop_callback(struct spu *spu, int irq)
int spu_stopped(struct spu_context *ctx, u32 *stat)
static int spu_setup_isolated(struct spu_context *ctx)
static int spu_run_init(struct spu_context *ctx, u32 *npc)
static int spu_run_fini(struct spu_context *ctx, u32 *npc,
u32 *status)
static int spu_handle_restartsys(struct spu_context *ctx, long *spu_ret,
unsigned int *npc)
static int spu_process_callback(struct spu_context *ctx)
long spufs_run_spu(struct spu_context *ctx, u32 *npc, u32 *event)
