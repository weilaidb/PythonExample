static int mchannels[NR_MIXIN];
static int rampchs[NR_MIXIN];
static void vortex_mixer_en_sr(vortex_t * vortex, int channel)
static void vortex_mixer_dis_sr(vortex_t * vortex, int channel)
static void
vortex_mix_setvolumebyte(vortex_t * vortex, unsigned char mix,
unsigned char vol)
static void
vortex_mix_setinputvolumebyte(vortex_t * vortex, unsigned char mix,
int mixin, unsigned char vol)
static void
vortex_mix_setenablebit(vortex_t * vortex, unsigned char mix, int mixin, int en)
static void
vortex_mix_killinput(vortex_t * vortex, unsigned char mix, int mixin)
static void
vortex_mix_enableinput(vortex_t * vortex, unsigned char mix, int mixin)
static void
vortex_mix_disableinput(vortex_t * vortex, unsigned char mix, int channel,
int ramp)
static int
vortex_mixer_addWTD(vortex_t * vortex, unsigned char mix, unsigned char ch)
static int
vortex_mixer_delWTD(vortex_t * vortex, unsigned char mix, unsigned char ch)
static void vortex_mixer_init(vortex_t * vortex)
static void vortex_src_en_sr(vortex_t * vortex, int channel)
static void vortex_src_dis_sr(vortex_t * vortex, int channel)
static void vortex_src_flushbuffers(vortex_t * vortex, unsigned char src)
static void vortex_src_cleardrift(vortex_t * vortex, unsigned char src)
static void
vortex_src_set_throttlesource(vortex_t * vortex, unsigned char src, int en)
static int
vortex_src_persist_convratio(vortex_t * vortex, unsigned char src, int ratio)
static void vortex_src_setupchannel(vortex_t * card, unsigned char src,
unsigned int cr, unsigned int b, int sweep, int d,
int dirplay, int sl, unsigned int tr, int thsource)
static void vortex_srcblock_init(vortex_t * vortex)
static int
vortex_src_addWTD(vortex_t * vortex, unsigned char src, unsigned char ch)
static int
vortex_src_delWTD(vortex_t * vortex, unsigned char src, unsigned char ch)
static void
vortex_fifo_clearadbdata(vortex_t * vortex, int fifo, int x)
}
static void vortex_fifo_setadbvalid(vortex_t * vortex, int fifo, int en)
static void
vortex_fifo_setadbctrl(vortex_t * vortex, int fifo, int b, int priority,
int empty, int valid, int f)
static void vortex_fifo_clearwtdata(vortex_t * vortex, int fifo, int x)
static void vortex_fifo_wtinitialize(vortex_t * vortex, int fifo, int j)
static void vortex_fifo_setwtvalid(vortex_t * vortex, int fifo, int en)
static void
vortex_fifo_setwtctrl(vortex_t * vortex, int fifo, int ctrl, int priority,
int empty, int valid, int f)
static void vortex_fifo_init(vortex_t * vortex)
static void vortex_adbdma_init(vortex_t * vortex)
static void vortex_adbdma_setfirstbuffer(vortex_t * vortex, int adbdma)
static void vortex_adbdma_setstartbuffer(vortex_t * vortex, int adbdma, int sb)
static void
vortex_adbdma_setbuffers(vortex_t * vortex, int adbdma,
int psize, int count)
static void
vortex_adbdma_setmode(vortex_t * vortex, int adbdma, int ie, int dir,
int fmt, int d, u32 offset)
static int vortex_adbdma_bufshift(vortex_t * vortex, int adbdma)
static void vortex_adbdma_resetup(vortex_t *vortex, int adbdma)
static inline int vortex_adbdma_getlinearpos(vortex_t * vortex, int adbdma)
static void vortex_adbdma_startfifo(vortex_t * vortex, int adbdma)
static void vortex_adbdma_resumefifo(vortex_t * vortex, int adbdma)
static void vortex_adbdma_pausefifo(vortex_t * vortex, int adbdma)
static void vortex_wtdma_setfirstbuffer(vortex_t * vortex, int wtdma)
static void vortex_wtdma_setstartbuffer(vortex_t * vortex, int wtdma, int sb)
static void
vortex_wtdma_setbuffers(vortex_t * vortex, int wtdma,
int psize, int count)
static void
vortex_wtdma_setmode(vortex_t * vortex, int wtdma, int ie, int fmt, int d, u32 offset)
static int vortex_wtdma_bufshift(vortex_t * vortex, int wtdma)
static inline int vortex_wtdma_getlinearpos(vortex_t * vortex, int wtdma)
static void vortex_wtdma_startfifo(vortex_t * vortex, int wtdma)
static void vortex_wtdma_resumefifo(vortex_t * vortex, int wtdma)
static void vortex_wtdma_pausefifo(vortex_t * vortex, int wtdma)
static void vortex_wtdma_stopfifo(vortex_t * vortex, int wtdma)
typedef int ADBRamLink;
static void vortex_adb_init(vortex_t * vortex)
static void vortex_adb_en_sr(vortex_t * vortex, int channel)
static void vortex_adb_dis_sr(vortex_t * vortex, int channel)
static void
vortex_adb_addroutes(vortex_t * vortex, unsigned char channel,
ADBRamLink * route, int rnum)
static void
vortex_adb_delroutes(vortex_t * vortex, unsigned char channel,
ADBRamLink route0, ADBRamLink route1)
static void
vortex_route(vortex_t * vortex, int en, unsigned char channel,
unsigned char source, unsigned char dest)
static void
vortex_routeLRT(vortex_t * vortex, int en, unsigned char ch,
unsigned char source0, unsigned char source1,
unsigned char dest)
static void
vortex_connection_adbdma_src(vortex_t * vortex, int en, unsigned char ch,
unsigned char adbdma, unsigned char src)
static void
vortex_connection_src_mixin(vortex_t * vortex, int en,
unsigned char channel, unsigned char src,
unsigned char mixin)
static void
vortex_connection_mixin_mix(vortex_t * vortex, int en, unsigned char mixin,
unsigned char mix, int a)
static void
vortex_connection_adb_mixin(vortex_t * vortex, int en,
unsigned char channel, unsigned char source,
unsigned char mixin)
static void
vortex_connection_src_adbdma(vortex_t * vortex, int en, unsigned char ch,
unsigned char src, unsigned char adbdma)
static void
vortex_connection_src_src_adbdma(vortex_t * vortex, int en,
unsigned char ch, unsigned char src0,
unsigned char src1, unsigned char adbdma)
static void
vortex_connection_mix_adb(vortex_t * vortex, int en, unsigned char ch,
unsigned char mix, unsigned char dest)
static void
vortex_connection_mix_src(vortex_t * vortex, int en, unsigned char ch,
unsigned char mix, unsigned char src)
static void
vortex_connect_codecplay(vortex_t * vortex, int en, unsigned char mixers[])
static void
vortex_connect_codecrec(vortex_t * vortex, int en, unsigned char mixin0,
unsigned char mixin1)
static int resnum[VORTEX_RESOURCE_LAST] =
;
static char
vortex_adb_checkinout(vortex_t * vortex, int resmap[], int out, int restype)
static int
vortex_adb_allocroute(vortex_t * vortex, int dma, int nr_ch, int dir, int type);
static void vortex_connect_default(vortex_t * vortex, int en)
static int
vortex_adb_allocroute(vortex_t * vortex, int dma, int nr_ch, int dir, int type)
static void
vortex_adb_setsrc(vortex_t * vortex, int adbdma, unsigned int rate, int dir)
static void vortex_settimer(vortex_t * vortex, int period)
static void vortex_enable_int(vortex_t * card)
static void vortex_disable_int(vortex_t * card)
static irqreturn_t vortex_interrupt(int irq, void *dev_id)
#define POLL_COUNT 1000
static void vortex_codec_init(vortex_t * vortex)
static void
vortex_codec_write(struct snd_ac97 * codec, unsigned short addr, unsigned short data)
static unsigned short vortex_codec_read(struct snd_ac97 * codec, unsigned short addr)
static void vortex_spdif_init(vortex_t * vortex, int spdif_sr, int spdif_mode)
static int __devinit vortex_core_init(vortex_t * vortex)
static int vortex_core_shutdown(vortex_t * vortex)
static int vortex_alsafmt_aspfmt(int alsafmt)
