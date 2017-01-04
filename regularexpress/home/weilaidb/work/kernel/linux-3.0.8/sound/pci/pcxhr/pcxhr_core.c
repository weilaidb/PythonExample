#define PCXHR_PLX_OFFSET_MIN	0x40
#define PCXHR_PLX_MBOX0		0x40
#define PCXHR_PLX_MBOX1		0x44
#define PCXHR_PLX_MBOX2		0x48
#define PCXHR_PLX_MBOX3		0x4C
#define PCXHR_PLX_MBOX4		0x50
#define PCXHR_PLX_MBOX5		0x54
#define PCXHR_PLX_MBOX6		0x58
#define PCXHR_PLX_MBOX7		0x5C
#define PCXHR_PLX_L2PCIDB	0x64
#define PCXHR_PLX_IRQCS		0x68
#define PCXHR_PLX_CHIPSC	0x6C
#define PCXHR_DSP_ICR		0x00
#define PCXHR_DSP_CVR		0x04
#define PCXHR_DSP_ISR		0x08
#define PCXHR_DSP_IVR		0x0C
#define PCXHR_DSP_RXH		0x14
#define PCXHR_DSP_TXH		0x14
#define PCXHR_DSP_RXM		0x18
#define PCXHR_DSP_TXM		0x18
#define PCXHR_DSP_RXL		0x1C
#define PCXHR_DSP_TXL		0x1C
#define PCXHR_DSP_RESET		0x20
#define PCXHR_DSP_OFFSET_MAX	0x20
#define PCXHR_PLX 1
#define PCXHR_DSP 2
#if (PCXHR_DSP_OFFSET_MAX > PCXHR_PLX_OFFSET_MIN)
#undef  PCXHR_REG_TO_PORT(x)
#define PCXHR_REG_TO_PORT(x)	((x)>PCXHR_DSP_OFFSET_MAX ? PCXHR_PLX : PCXHR_DSP)
#define PCXHR_INPB(mgr,x)	inb((mgr)->port[PCXHR_REG_TO_PORT(x)] + (x))
#define PCXHR_INPL(mgr,x)	inl((mgr)->port[PCXHR_REG_TO_PORT(x)] + (x))
#define PCXHR_OUTPB(mgr,x,data)	outb((data), (mgr)->port[PCXHR_REG_TO_PORT(x)] + (x))
#define PCXHR_OUTPL(mgr,x,data)	outl((data), (mgr)->port[PCXHR_REG_TO_PORT(x)] + (x))
#define PCXHR_MBOX0_HF5			(1 << 0)
#define PCXHR_MBOX0_HF4			(1 << 1)
#define PCXHR_MBOX0_BOOT_HERE		(1 << 23)
#define PCXHR_IRQCS_ENABLE_PCIIRQ	(1 << 8)
#define PCXHR_IRQCS_ENABLE_PCIDB	(1 << 9)
#define PCXHR_IRQCS_ACTIVE_PCIDB	(1 << 13)
#define PCXHR_CHIPSC_INIT_VALUE		0x100D767E
#define PCXHR_CHIPSC_RESET_XILINX	(1 << 16)
#define PCXHR_CHIPSC_GPI_USERI		(1 << 17)
#define PCXHR_CHIPSC_DATA_CLK		(1 << 24)
#define PCXHR_CHIPSC_DATA_IN		(1 << 26)
#define PCXHR_ICR_HI08_RREQ		0x01
#define PCXHR_ICR_HI08_TREQ		0x02
#define PCXHR_ICR_HI08_HDRQ		0x04
#define PCXHR_ICR_HI08_HF0		0x08
#define PCXHR_ICR_HI08_HF1		0x10
#define PCXHR_ICR_HI08_HLEND		0x20
#define PCXHR_ICR_HI08_INIT		0x80
#define PCXHR_CVR_HI08_HC		0x80
#define PCXHR_ISR_HI08_RXDF		0x01
#define PCXHR_ISR_HI08_TXDE		0x02
#define PCXHR_ISR_HI08_TRDY		0x04
#define PCXHR_ISR_HI08_ERR		0x08
#define PCXHR_ISR_HI08_CHK		0x10
#define PCXHR_ISR_HI08_HREQ		0x80
#define PCXHR_WAIT_DEFAULT		2
#define PCXHR_WAIT_IT			25
#define PCXHR_WAIT_IT_EXTRA		65
static int pcxhr_check_reg_bit(struct pcxhr_mgr *mgr, unsigned int reg,
unsigned char mask, unsigned char bit, int time,
unsigned char* read)
#define PCXHR_TIMEOUT_DSP		200
#define PCXHR_MASK_EXTRA_INFO		0x0000FE
#define PCXHR_MASK_IT_HF0		0x000100
#define PCXHR_MASK_IT_HF1		0x000200
#define PCXHR_MASK_IT_NO_HF0_HF1	0x000400
#define PCXHR_MASK_IT_MANAGE_HF5	0x000800
#define PCXHR_MASK_IT_WAIT		0x010000
#define PCXHR_MASK_IT_WAIT_EXTRA	0x020000
#define PCXHR_IT_SEND_BYTE_XILINX	(0x0000003C | PCXHR_MASK_IT_HF0)
#define PCXHR_IT_TEST_XILINX		(0x0000003C | PCXHR_MASK_IT_HF1 | \
PCXHR_MASK_IT_MANAGE_HF5)
#define PCXHR_IT_DOWNLOAD_BOOT		(0x0000000C | PCXHR_MASK_IT_HF1 | \
PCXHR_MASK_IT_MANAGE_HF5 | \
PCXHR_MASK_IT_WAIT)
#define PCXHR_IT_RESET_BOARD_FUNC	(0x0000000C | PCXHR_MASK_IT_HF0 | \
PCXHR_MASK_IT_MANAGE_HF5 | \
PCXHR_MASK_IT_WAIT_EXTRA)
#define PCXHR_IT_DOWNLOAD_DSP		(0x0000000C | \
PCXHR_MASK_IT_MANAGE_HF5 | \
PCXHR_MASK_IT_WAIT)
#define PCXHR_IT_DEBUG			(0x0000005A | PCXHR_MASK_IT_NO_HF0_HF1)
#define PCXHR_IT_RESET_SEMAPHORE	(0x0000005C | PCXHR_MASK_IT_NO_HF0_HF1)
#define PCXHR_IT_MESSAGE		(0x00000074 | PCXHR_MASK_IT_NO_HF0_HF1)
#define PCXHR_IT_RESET_CHK		(0x00000076 | PCXHR_MASK_IT_NO_HF0_HF1)
#define PCXHR_IT_UPDATE_RBUFFER		(0x00000078 | PCXHR_MASK_IT_NO_HF0_HF1)
static int pcxhr_send_it_dsp(struct pcxhr_mgr *mgr,
unsigned int itdsp, int atomic)
void pcxhr_reset_xilinx_com(struct pcxhr_mgr *mgr)
static void pcxhr_enable_irq(struct pcxhr_mgr *mgr, int enable)
void pcxhr_reset_dsp(struct pcxhr_mgr *mgr)
void pcxhr_enable_dsp(struct pcxhr_mgr *mgr)
int pcxhr_load_xilinx_binary(struct pcxhr_mgr *mgr,
const struct firmware *xilinx, int second)
static int pcxhr_download_dsp(struct pcxhr_mgr *mgr, const struct firmware *dsp)
int pcxhr_load_eeprom_binary(struct pcxhr_mgr *mgr,
const struct firmware *eeprom)
int pcxhr_load_boot_binary(struct pcxhr_mgr *mgr, const struct firmware *boot)
int pcxhr_load_dsp_binary(struct pcxhr_mgr *mgr, const struct firmware *dsp)
struct pcxhr_cmd_info ;
enum ;
static struct pcxhr_cmd_info pcxhr_dsp_cmds[] = ;
static char* cmd_names[] = ;
static int pcxhr_read_rmh_status(struct pcxhr_mgr *mgr, struct pcxhr_rmh *rmh)
static int pcxhr_send_msg_nolock(struct pcxhr_mgr *mgr, struct pcxhr_rmh *rmh)
void pcxhr_init_rmh(struct pcxhr_rmh *rmh, int cmd)
void pcxhr_set_pipe_cmd_params(struct pcxhr_rmh *rmh, int capture,
unsigned int param1, unsigned int param2,
unsigned int param3)
int pcxhr_send_msg(struct pcxhr_mgr *mgr, struct pcxhr_rmh *rmh)
static inline int pcxhr_pipes_running(struct pcxhr_mgr *mgr)
#define PCXHR_PIPE_STATE_CAPTURE_OFFSET		12
#define MAX_WAIT_FOR_DSP			20
static int pcxhr_prepair_pipe_start(struct pcxhr_mgr *mgr,
int audio_mask, int *retry)
static int pcxhr_stop_pipes(struct pcxhr_mgr *mgr, int audio_mask)
static int pcxhr_toggle_pipes(struct pcxhr_mgr *mgr, int audio_mask)
int pcxhr_set_pipe_state(struct pcxhr_mgr *mgr, int playback_mask,
int capture_mask, int start)
int pcxhr_write_io_num_reg_cont(struct pcxhr_mgr *mgr, unsigned int mask,
unsigned int value, int *changed)
#define PCXHR_IRQ_TIMER		0x000300
#define PCXHR_IRQ_FREQ_CHANGE	0x000800
#define PCXHR_IRQ_TIME_CODE	0x001000
#define PCXHR_IRQ_NOTIFY	0x002000
#define PCXHR_IRQ_ASYNC		0x008000
#define PCXHR_IRQ_MASK		0x00bb00
#define PCXHR_FATAL_DSP_ERR	0xff0000
enum pcxhr_async_err_src ;
static int pcxhr_handle_async_err(struct pcxhr_mgr *mgr, u32 err,
enum pcxhr_async_err_src err_src, int pipe,
int is_capture)
void pcxhr_msg_tasklet(unsigned long arg)
static u_int64_t pcxhr_stream_read_position(struct pcxhr_mgr *mgr,
struct pcxhr_stream *stream)
static void pcxhr_update_timer_pos(struct pcxhr_mgr *mgr,
struct pcxhr_stream *stream,
int samples_to_add)
irqreturn_t pcxhr_interrupt(int irq, void *dev_id)
