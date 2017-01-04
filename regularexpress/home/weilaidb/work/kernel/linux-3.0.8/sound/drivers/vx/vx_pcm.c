static void vx_pcm_read_per_bytes(struct vx_core *chip, struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe)
static void vx_set_pcx_time(struct vx_core *chip, pcx_time_t *pc_time,
unsigned int *dsp_time)
static int vx_set_differed_time(struct vx_core *chip, struct vx_rmh *rmh,
struct vx_pipe *pipe)
static int vx_set_stream_format(struct vx_core *chip, struct vx_pipe *pipe,
unsigned int data)
static int vx_set_format(struct vx_core *chip, struct vx_pipe *pipe,
struct snd_pcm_runtime *runtime)
static int vx_set_ibl(struct vx_core *chip, struct vx_ibl_info *info)
static int vx_get_pipe_state(struct vx_core *chip, struct vx_pipe *pipe, int *state)
static int vx_query_hbuffer_size(struct vx_core *chip, struct vx_pipe *pipe)
static int vx_pipe_can_start(struct vx_core *chip, struct vx_pipe *pipe)
static int vx_conf_pipe(struct vx_core *chip, struct vx_pipe *pipe)
static int vx_send_irqa(struct vx_core *chip)
#define MAX_WAIT_FOR_DSP        250
#define CAN_START_DELAY         2
#define WAIT_STATE_DELAY        2
static int vx_toggle_pipe(struct vx_core *chip, struct vx_pipe *pipe, int state)
static int vx_stop_pipe(struct vx_core *chip, struct vx_pipe *pipe)
static int vx_alloc_pipe(struct vx_core *chip, int capture,
int audioid, int num_audio,
struct vx_pipe **pipep)
static int vx_free_pipe(struct vx_core *chip, struct vx_pipe *pipe)
static int vx_start_stream(struct vx_core *chip, struct vx_pipe *pipe)
static int vx_stop_stream(struct vx_core *chip, struct vx_pipe *pipe)
static struct snd_pcm_hardware vx_pcm_playback_hw = ;
static void vx_pcm_delayed_start(unsigned long arg);
static int vx_pcm_playback_open(struct snd_pcm_substream *subs)
static int vx_pcm_playback_close(struct snd_pcm_substream *subs)
static int vx_notify_end_of_buffer(struct vx_core *chip, struct vx_pipe *pipe)
static int vx_pcm_playback_transfer_chunk(struct vx_core *chip,
struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe, int size)
static int vx_update_pipe_position(struct vx_core *chip,
struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe)
static void vx_pcm_playback_transfer(struct vx_core *chip,
struct snd_pcm_substream *subs,
struct vx_pipe *pipe, int nchunks)
static void vx_pcm_playback_update(struct vx_core *chip,
struct snd_pcm_substream *subs,
struct vx_pipe *pipe)
static void vx_pcm_delayed_start(unsigned long arg)
static int vx_pcm_trigger(struct snd_pcm_substream *subs, int cmd)
static snd_pcm_uframes_t vx_pcm_playback_pointer(struct snd_pcm_substream *subs)
static int vx_pcm_hw_params(struct snd_pcm_substream *subs,
struct snd_pcm_hw_params *hw_params)
static int vx_pcm_hw_free(struct snd_pcm_substream *subs)
static int vx_pcm_prepare(struct snd_pcm_substream *subs)
static struct snd_pcm_ops vx_pcm_playback_ops = ;
static struct snd_pcm_hardware vx_pcm_capture_hw = ;
static int vx_pcm_capture_open(struct snd_pcm_substream *subs)
static int vx_pcm_capture_close(struct snd_pcm_substream *subs)
#define DMA_READ_ALIGN	6
static void vx_pcm_capture_update(struct vx_core *chip, struct snd_pcm_substream *subs,
struct vx_pipe *pipe)
static snd_pcm_uframes_t vx_pcm_capture_pointer(struct snd_pcm_substream *subs)
static struct snd_pcm_ops vx_pcm_capture_ops = ;
void vx_pcm_update_intr(struct vx_core *chip, unsigned int events)
static int vx_init_audio_io(struct vx_core *chip)
static void snd_vx_pcm_free(struct snd_pcm *pcm)
int snd_vx_pcm_new(struct vx_core *chip)
