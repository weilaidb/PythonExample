#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
int sst_get_stream_params(int str_id,
struct snd_sst_get_stream_params *get_params)
int sst_set_stream_param(int str_id, struct snd_sst_params *str_param)
int sst_get_vol(struct snd_sst_vol *get_vol)
int sst_set_vol(struct snd_sst_vol *set_vol)
int sst_set_mute(struct snd_sst_mute *set_mute)
int sst_prepare_target(struct snd_sst_slot_info *slot)
int sst_activate_target(struct snd_sst_slot_info *slot)
int sst_parse_target(struct snd_sst_slot_info *slot)
int sst_send_target(struct snd_sst_target_device *target)
int sst_target_device_validate(struct snd_sst_target_device *target)
int sst_target_device_select(struct snd_sst_target_device *target)
static inline int sst_get_RAR(struct RAR_buffer *buffers, int count)
static int sst_create_sg_list(struct stream_info *stream,
struct sst_frame_info *sg_list)
int sst_play_frame(int str_id)
int sst_capture_frame(int str_id)
static unsigned int calculate_min_size(struct snd_sst_buffs *bufs)
static unsigned int calculate_max_size(struct snd_sst_buffs *bufs)
static int sst_allocate_decode_buf(struct stream_info *str_info,
struct snd_sst_dbufs *dbufs,
unsigned int cum_input_given,
unsigned int cum_output_given)
static int sst_send_decode_mess(int str_id, struct stream_info *str_info,
struct snd_sst_decode_info *dec_info)
static int sst_prepare_input_buffers_rar(struct stream_info *str_info,
struct snd_sst_dbufs *dbufs,
int *input_index, int *in_copied,
int *input_index_valid_size, int *new_entry_flag)
static int sst_prepare_input_buffers(struct stream_info *str_info,
struct snd_sst_dbufs *dbufs,
int *input_index, int *in_copied,
int *input_index_valid_size, int *new_entry_flag)
static int sst_prepare_output_buffers(struct stream_info *str_info,
struct snd_sst_dbufs *dbufs,
int *output_index, int output_size,
int *out_copied)
int sst_decode(int str_id, struct snd_sst_dbufs *dbufs)
