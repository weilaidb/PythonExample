#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
int sst_get_block_stream(struct intel_sst_drv *sst_drv_ctx)
int sst_wait_interruptible(struct intel_sst_drv *sst_drv_ctx,
struct sst_block *block)
int sst_wait_interruptible_timeout(
struct intel_sst_drv *sst_drv_ctx,
struct sst_block *block, int timeout)
int sst_wait_timeout(struct intel_sst_drv *sst_drv_ctx,
struct stream_alloc_block *block)
int sst_create_large_msg(struct ipc_post **arg)
int sst_create_short_msg(struct ipc_post **arg)
void sst_clean_stream(struct stream_info *stream)
void sst_wake_up_alloc_block(struct intel_sst_drv *sst_drv_ctx,
u8 sst_id, int status, void *data)
int sst_enable_rx_timeslot(int status)
