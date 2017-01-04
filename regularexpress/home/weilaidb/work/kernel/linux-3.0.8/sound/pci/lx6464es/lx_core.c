static const unsigned long dsp_port_offsets[] = ;
static void __iomem *lx_dsp_register(struct lx6464es *chip, int port)
unsigned long lx_dsp_reg_read(struct lx6464es *chip, int port)
void lx_dsp_reg_readbuf(struct lx6464es *chip, int port, u32 *data, u32 len)
void lx_dsp_reg_write(struct lx6464es *chip, int port, unsigned data)
void lx_dsp_reg_writebuf(struct lx6464es *chip, int port, const u32 *data,
u32 len)
static const unsigned long plx_port_offsets[] = ;
static void __iomem *lx_plx_register(struct lx6464es *chip, int port)
unsigned long lx_plx_reg_read(struct lx6464es *chip, int port)
void lx_plx_reg_write(struct lx6464es *chip, int port, u32 data)
u32 lx_plx_mbox_read(struct lx6464es *chip, int mbox_nr)
int lx_plx_mbox_write(struct lx6464es *chip, int mbox_nr, u32 value)
#define CMD_NAME(a) a
#define CMD_NAME(a) NULL
#define Reg_CSM_MR			0x00000002
#define Reg_CSM_MC			0x00000001
struct dsp_cmd_info ;
static struct dsp_cmd_info dsp_commands[] =
;
static void lx_message_init(struct lx_rmh *rmh, enum cmd_mb_opcodes cmd)
#define LXRMH "lx6464es rmh: "
static void lx_message_dump(struct lx_rmh *rmh)
static inline void lx_message_dump(struct lx_rmh *rmh)
#define XILINX_TIMEOUT_MS       40
#define XILINX_POLL_NO_SLEEP    100
#define XILINX_POLL_ITERATIONS  150
static int lx_message_send_atomic(struct lx6464es *chip, struct lx_rmh *rmh)
int __devinit lx_dsp_get_version(struct lx6464es *chip, u32 *rdsp_version)
int lx_dsp_get_clock_frequency(struct lx6464es *chip, u32 *rfreq)
int lx_dsp_get_mac(struct lx6464es *chip, u8 *mac_address)
int lx_dsp_set_granularity(struct lx6464es *chip, u32 gran)
int lx_dsp_read_async_events(struct lx6464es *chip, u32 *data)
#define CSES_TIMEOUT        100
#define CSES_CE             0x0001
#define CSES_BROADCAST      0x0002
#define CSES_UPDATE_LDSV    0x0004
int lx_dsp_es_check_pipeline(struct lx6464es *chip)
#define PIPE_INFO_TO_CMD(capture, pipe)					\
((u32)((u32)(pipe) | ((capture) ? ID_IS_CAPTURE : 0L)) << ID_OFFSET)
int lx_pipe_allocate(struct lx6464es *chip, u32 pipe, int is_capture,
int channels)
int lx_pipe_release(struct lx6464es *chip, u32 pipe, int is_capture)
int lx_buffer_ask(struct lx6464es *chip, u32 pipe, int is_capture,
u32 *r_needed, u32 *r_freed, u32 *size_array)
int lx_pipe_stop(struct lx6464es *chip, u32 pipe, int is_capture)
static int lx_pipe_toggle_state(struct lx6464es *chip, u32 pipe, int is_capture)
int lx_pipe_start(struct lx6464es *chip, u32 pipe, int is_capture)
int lx_pipe_pause(struct lx6464es *chip, u32 pipe, int is_capture)
int lx_pipe_sample_count(struct lx6464es *chip, u32 pipe, int is_capture,
u64 *rsample_count)
int lx_pipe_state(struct lx6464es *chip, u32 pipe, int is_capture, u16 *rstate)
static int lx_pipe_wait_for_state(struct lx6464es *chip, u32 pipe,
int is_capture, u16 state)
int lx_pipe_wait_for_start(struct lx6464es *chip, u32 pipe, int is_capture)
int lx_pipe_wait_for_idle(struct lx6464es *chip, u32 pipe, int is_capture)
int lx_stream_set_state(struct lx6464es *chip, u32 pipe,
int is_capture, enum stream_state_t state)
int lx_stream_set_format(struct lx6464es *chip, struct snd_pcm_runtime *runtime,
u32 pipe, int is_capture)
int lx_stream_state(struct lx6464es *chip, u32 pipe, int is_capture,
int *rstate)
int lx_stream_sample_position(struct lx6464es *chip, u32 pipe, int is_capture,
u64 *r_bytepos)
int lx_buffer_give(struct lx6464es *chip, u32 pipe, int is_capture,
u32 buffer_size, u32 buf_address_lo, u32 buf_address_hi,
u32 *r_buffer_index)
int lx_buffer_free(struct lx6464es *chip, u32 pipe, int is_capture,
u32 *r_buffer_size)
int lx_buffer_cancel(struct lx6464es *chip, u32 pipe, int is_capture,
u32 buffer_index)
int lx_level_unmute(struct lx6464es *chip, int is_capture, int unmute)
static u32 peak_map[] = ;
int lx_level_peaks(struct lx6464es *chip, int is_capture, int channels,
u32 *r_levels)
#define PCX_IRQ_NONE 0
#define IRQCS_ACTIVE_PCIDB  0x00002000L
#define IRQCS_ENABLE_PCIIRQ 0x00000100L
#define IRQCS_ENABLE_PCIDB  0x00000200L
static u32 lx_interrupt_test_ack(struct lx6464es *chip)
static int lx_interrupt_ack(struct lx6464es *chip, u32 *r_irqsrc,
int *r_async_pending, int *r_async_escmd)
static int lx_interrupt_handle_async_events(struct lx6464es *chip, u32 irqsrc,
int *r_freq_changed,
u64 *r_notified_in_pipe_mask,
u64 *r_notified_out_pipe_mask)
static int lx_interrupt_request_new_buffer(struct lx6464es *chip,
struct lx_stream *lx_stream)
void lx_tasklet_playback(unsigned long data)
void lx_tasklet_capture(unsigned long data)
static int lx_interrupt_handle_audio_transfer(struct lx6464es *chip,
u64 notified_in_pipe_mask,
u64 notified_out_pipe_mask)
irqreturn_t lx_interrupt(int irq, void *dev_id)
static void lx_irq_set(struct lx6464es *chip, int enable)
void lx_irq_enable(struct lx6464es *chip)
void lx_irq_disable(struct lx6464es *chip)
