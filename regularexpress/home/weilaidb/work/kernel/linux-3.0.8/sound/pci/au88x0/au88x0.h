#define __SOUND_AU88X0_H
#define	hwread(x,y) readl((x)+(y))
#define	hwwrite(x,y,z) writel((z),(x)+(y))
#define	MIDI_CLOCK_DIV		0x61
#define	MPU401_RESET		0xff
#define	MPU401_ENTER_UART	0x3f
#define	MPU401_ACK		0xfe
#define	SRC_RATIO(x,y)		((((x<<15)/y) + 1)/2)
#define FIFO_STOP 0
#define FIFO_START 1
#define FIFO_PAUSE 2
#define IRQ_ERR_MASK	0x00ff
#define IRQ_FATAL	0x0001
#define IRQ_PARITY	0x0002
#define IRQ_REG		0x0004
#define IRQ_FIFO	0x0008
#define IRQ_DMA		0x0010
#define IRQ_PCMOUT	0x0020
#define IRQ_TIMER	0x1000
#define IRQ_MIDI	0x2000
#define IRQ_MODEM	0x4000
#define VORTEX_RESOURCE_DMA	0x00000000
#define VORTEX_RESOURCE_SRC	0x00000001
#define VORTEX_RESOURCE_MIXIN	0x00000002
#define VORTEX_RESOURCE_MIXOUT	0x00000003
#define VORTEX_RESOURCE_A3D	0x00000004
#define VORTEX_RESOURCE_LAST	0x00000005
#define VORTEX_CODEC_ID_SHIFT	24
#define VORTEX_CODEC_WRITE	0x00800000
#define VORTEX_CODEC_ADDSHIFT 	16
#define VORTEX_CODEC_ADDMASK	0x7f0000
#define VORTEX_CODEC_DATSHIFT	0
#define VORTEX_CODEC_DATMASK	0xffff
#define VORTEX_IS_QUAD(x) ((x)->isquad)
#define IS_BAD_CHIP(x) (\
(x->rev == 0xfe && x->device == PCI_DEVICE_ID_AUREAL_VORTEX_2) || \
(x->rev == 0xfe && x->device == PCI_DEVICE_ID_AUREAL_ADVANTAGE))
#define VORTEX_PCM_ADB		0
#define VORTEX_PCM_SPDIF	1
#define VORTEX_PCM_A3D		2
#define VORTEX_PCM_WT		3
#define VORTEX_PCM_I2S		4
#define VORTEX_PCM_LAST		5
#define MIX_CAPT(x) (vortex->mixcapt[x])
#define MIX_PLAYB(x) (vortex->mixplayb[x])
#define MIX_SPDIF(x) (vortex->mixspdif[x])
#define NR_WTPB 0x20
typedef struct  stream_t;
typedef struct snd_vortex vortex_t;
struct snd_vortex ;
static void vortex_adb_setsrc(vortex_t * vortex, int adbdma,
unsigned int cvrt, int dir);
static void vortex_adbdma_setbuffers(vortex_t * vortex, int adbdma,
int size, int count);
static void vortex_adbdma_setmode(vortex_t * vortex, int adbdma, int ie,
int dir, int fmt, int d,
u32 offset);
static void vortex_adbdma_setstartbuffer(vortex_t * vortex, int adbdma, int sb);
static void vortex_wtdma_setbuffers(vortex_t * vortex, int wtdma,
int size, int count);
static void vortex_wtdma_setmode(vortex_t * vortex, int wtdma, int ie, int fmt, int d,
u32 offset);
static void vortex_wtdma_setstartbuffer(vortex_t * vortex, int wtdma, int sb);
static void vortex_adbdma_startfifo(vortex_t * vortex, int adbdma);
static void vortex_adbdma_pausefifo(vortex_t * vortex, int adbdma);
static void vortex_adbdma_resumefifo(vortex_t * vortex, int adbdma);
static inline int vortex_adbdma_getlinearpos(vortex_t * vortex, int adbdma);
static void vortex_adbdma_resetup(vortex_t *vortex, int adbdma);
static void vortex_wtdma_startfifo(vortex_t * vortex, int wtdma);
static void vortex_wtdma_stopfifo(vortex_t * vortex, int wtdma);
static void vortex_wtdma_pausefifo(vortex_t * vortex, int wtdma);
static void vortex_wtdma_resumefifo(vortex_t * vortex, int wtdma);
static inline int vortex_wtdma_getlinearpos(vortex_t * vortex, int wtdma);
static void vortex_codec_init(vortex_t * vortex);
static void vortex_codec_write(struct snd_ac97 * codec, unsigned short addr,
unsigned short data);
static unsigned short vortex_codec_read(struct snd_ac97 * codec, unsigned short addr);
static void vortex_spdif_init(vortex_t * vortex, int spdif_sr, int spdif_mode);
static int vortex_core_init(vortex_t * card);
static int vortex_core_shutdown(vortex_t * card);
static void vortex_enable_int(vortex_t * card);
static irqreturn_t vortex_interrupt(int irq, void *dev_id);
static int vortex_alsafmt_aspfmt(int alsafmt);
static void vortex_connect_default(vortex_t * vortex, int en);
static int vortex_adb_allocroute(vortex_t * vortex, int dma, int nr_ch,
int dir, int type);
static char vortex_adb_checkinout(vortex_t * vortex, int resmap[], int out,
int restype);
static int vortex_wt_allocroute(vortex_t * vortex, int dma, int nr_ch);
static void vortex_wt_connect(vortex_t * vortex, int en);
static void vortex_wt_init(vortex_t * vortex);
static void vortex_route(vortex_t * vortex, int en, unsigned char channel,
unsigned char source, unsigned char dest);
static void vortex_connection_mixin_mix(vortex_t * vortex, int en,
unsigned char mixin,
unsigned char mix, int a);
static void vortex_mix_setinputvolumebyte(vortex_t * vortex,
unsigned char mix, int mixin,
unsigned char vol);
static void vortex_mix_setvolumebyte(vortex_t * vortex, unsigned char mix,
unsigned char vol);
static void vortex_Vort3D_enable(vortex_t * v);
static void vortex_Vort3D_disable(vortex_t * v);
static void vortex_Vort3D_connect(vortex_t * vortex, int en);
static void vortex_Vort3D_InitializeSource(a3dsrc_t * a, int en);
static int vortex_gameport_register(vortex_t * card);
static void vortex_gameport_unregister(vortex_t * card);
static int vortex_eq_init(vortex_t * vortex);
static int vortex_eq_free(vortex_t * vortex);
static int snd_vortex_new_pcm(vortex_t * vortex, int idx, int nr);
static int snd_vortex_mixer(vortex_t * vortex);
static int snd_vortex_midi(vortex_t * vortex);
