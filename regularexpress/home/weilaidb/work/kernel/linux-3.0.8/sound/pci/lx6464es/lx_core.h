#define LX_CORE_H
#define REG_CRM_NUMBER		12
struct lx6464es;
enum ;
unsigned long lx_dsp_reg_read(struct lx6464es *chip, int port);
void lx_dsp_reg_readbuf(struct lx6464es *chip, int port, u32 *data, u32 len);
void lx_dsp_reg_write(struct lx6464es *chip, int port, unsigned data);
void lx_dsp_reg_writebuf(struct lx6464es *chip, int port, const u32 *data,
u32 len);
enum ;
unsigned long lx_plx_reg_read(struct lx6464es *chip, int port);
void lx_plx_reg_write(struct lx6464es *chip, int port, u32 data);
struct lx_rmh ;
int __devinit lx_dsp_get_version(struct lx6464es *chip, u32 *rdsp_version);
int lx_dsp_get_clock_frequency(struct lx6464es *chip, u32 *rfreq);
int lx_dsp_set_granularity(struct lx6464es *chip, u32 gran);
int lx_dsp_read_async_events(struct lx6464es *chip, u32 *data);
int lx_dsp_get_mac(struct lx6464es *chip, u8 *mac_address);
int lx_pipe_allocate(struct lx6464es *chip, u32 pipe, int is_capture,
int channels);
int lx_pipe_release(struct lx6464es *chip, u32 pipe, int is_capture);
int lx_pipe_sample_count(struct lx6464es *chip, u32 pipe, int is_capture,
u64 *rsample_count);
int lx_pipe_state(struct lx6464es *chip, u32 pipe, int is_capture, u16 *rstate);
int lx_pipe_stop(struct lx6464es *chip, u32 pipe, int is_capture);
int lx_pipe_start(struct lx6464es *chip, u32 pipe, int is_capture);
int lx_pipe_pause(struct lx6464es *chip, u32 pipe, int is_capture);
int lx_pipe_wait_for_start(struct lx6464es *chip, u32 pipe, int is_capture);
int lx_pipe_wait_for_idle(struct lx6464es *chip, u32 pipe, int is_capture);
int lx_stream_set_format(struct lx6464es *chip, struct snd_pcm_runtime *runtime,
u32 pipe, int is_capture);
int lx_stream_state(struct lx6464es *chip, u32 pipe, int is_capture,
int *rstate);
int lx_stream_sample_position(struct lx6464es *chip, u32 pipe, int is_capture,
u64 *r_bytepos);
int lx_stream_set_state(struct lx6464es *chip, u32 pipe,
int is_capture, enum stream_state_t state);
static inline int lx_stream_start(struct lx6464es *chip, u32 pipe,
int is_capture)
static inline int lx_stream_pause(struct lx6464es *chip, u32 pipe,
int is_capture)
static inline int lx_stream_stop(struct lx6464es *chip, u32 pipe,
int is_capture)
int lx_buffer_ask(struct lx6464es *chip, u32 pipe, int is_capture,
u32 *r_needed, u32 *r_freed, u32 *size_array);
int lx_buffer_give(struct lx6464es *chip, u32 pipe, int is_capture,
u32 buffer_size, u32 buf_address_lo, u32 buf_address_hi,
u32 *r_buffer_index);
int lx_buffer_free(struct lx6464es *chip, u32 pipe, int is_capture,
u32 *r_buffer_size);
int lx_buffer_cancel(struct lx6464es *chip, u32 pipe, int is_capture,
u32 buffer_index);
int lx_level_unmute(struct lx6464es *chip, int is_capture, int unmute);
int lx_level_peaks(struct lx6464es *chip, int is_capture, int channels,
u32 *r_levels);
irqreturn_t lx_interrupt(int irq, void *dev_id);
void lx_irq_enable(struct lx6464es *chip);
void lx_irq_disable(struct lx6464es *chip);
void lx_tasklet_capture(unsigned long data);
void lx_tasklet_playback(unsigned long data);
#define HEADER_FMT_BASE		HEADER_FMT_BASE_LIN
#define HEADER_FMT_BASE_LIN	0xFED00000
#define HEADER_FMT_BASE_FLOAT	0xFAD00000
#define HEADER_FMT_MONO		0x00000080
#define HEADER_FMT_INTEL	0x00008000
#define HEADER_FMT_16BITS	0x00002000
#define HEADER_FMT_24BITS	0x00004000
#define HEADER_FMT_UPTO11	0x00000200
#define HEADER_FMT_UPTO32	0x00000100
#define BIT_FMP_HEADER          23
#define BIT_FMP_SD              22
#define BIT_FMP_MULTICHANNEL    19
#define START_STATE             1
#define PAUSE_STATE             0
#define START_PAUSE_IMMEDIATE           0
#define START_PAUSE_ON_SYNCHRO          1
#define START_PAUSE_ON_TIME_CODE        2
#define START_STATE             1
#define PAUSE_STATE             0
static inline void unpack_pointer(dma_addr_t ptr, u32 *r_low, u32 *r_high)
