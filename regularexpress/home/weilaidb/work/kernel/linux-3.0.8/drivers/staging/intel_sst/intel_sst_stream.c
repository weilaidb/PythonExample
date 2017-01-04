#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
int sst_check_device_type(u32 device, u32 num_chan, u32 *pcm_slot)
static unsigned int get_mrst_stream_id(void)
int sst_alloc_stream(char *params, unsigned int stream_ops,
u8 codec, unsigned int device)
int sst_alloc_stream_response(unsigned int str_id,
struct snd_sst_alloc_response *resp)
int sst_get_fw_info(struct snd_sst_fw_info *info)
int sst_start_stream(int str_id)
int sst_pause_stream(int str_id)
int sst_resume_stream(int str_id)
int sst_drop_stream(int str_id)
int sst_drain_stream(int str_id)
int sst_free_stream(int str_id)
