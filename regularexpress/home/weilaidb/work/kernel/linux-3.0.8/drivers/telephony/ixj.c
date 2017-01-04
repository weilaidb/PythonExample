#define PERFMON_STATS
#define IXJDEBUG 0
#define MAXRINGS 5
#define TYPE(inode) (iminor(inode) >> 4)
#define NUM(inode) (iminor(inode) & 0xf)
static DEFINE_MUTEX(ixj_mutex);
static int ixjdebug;
static int hertz = HZ;
static int samplerate = 100;
module_param(ixjdebug, int, 0);
static DEFINE_PCI_DEVICE_TABLE(ixj_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, ixj_pci_tbl);
static IXJ *ixj[IXJMAX];
#define	get_ixj(b)	ixj[(b)]
static IXJ *ixj_alloc()
static void ixj_fsk_free(IXJ *j)
static void ixj_fsk_alloc(IXJ *j)
static IXJ ixj[IXJMAX];
#define	get_ixj(b)	(&ixj[(b)])
static IXJ *ixj_alloc(void)
static inline void ixj_fsk_free(IXJ *j)
static inline void ixj_fsk_alloc(IXJ *j)
#define ixj_perfmon(x)	((x)++)
#define ixj_perfmon(x)	do  while(0)
static int ixj_convert_loaded;
static int ixj_WriteDSPCommand(unsigned short, IXJ *j);
static int Stub(IXJ * J, unsigned long arg)
static IXJ_REGFUNC ixj_PreRead = &Stub;
static IXJ_REGFUNC ixj_PostRead = &Stub;
static IXJ_REGFUNC ixj_PreWrite = &Stub;
static IXJ_REGFUNC ixj_PostWrite = &Stub;
static void ixj_read_frame(IXJ *j);
static void ixj_write_frame(IXJ *j);
static void ixj_init_timer(IXJ *j);
static void ixj_add_timer(IXJ *	j);
static void ixj_timeout(unsigned long ptr);
static int read_filters(IXJ *j);
static int LineMonitor(IXJ *j);
static int ixj_fasync(int fd, struct file *, int mode);
static int ixj_set_port(IXJ *j, int arg);
static int ixj_set_pots(IXJ *j, int arg);
static int ixj_hookstate(IXJ *j);
static int ixj_record_start(IXJ *j);
static void ixj_record_stop(IXJ *j);
static void set_rec_volume(IXJ *j, int volume);
static int get_rec_volume(IXJ *j);
static int set_rec_codec(IXJ *j, int rate);
static void ixj_vad(IXJ *j, int arg);
static int ixj_play_start(IXJ *j);
static void ixj_play_stop(IXJ *j);
static int ixj_set_tone_on(unsigned short arg, IXJ *j);
static int ixj_set_tone_off(unsigned short, IXJ *j);
static int ixj_play_tone(IXJ *j, char tone);
static void ixj_aec_start(IXJ *j, int level);
static int idle(IXJ *j);
static void ixj_ring_on(IXJ *j);
static void ixj_ring_off(IXJ *j);
static void aec_stop(IXJ *j);
static void ixj_ringback(IXJ *j);
static void ixj_busytone(IXJ *j);
static void ixj_dialtone(IXJ *j);
static void ixj_cpt_stop(IXJ *j);
static char daa_int_read(IXJ *j);
static char daa_CR_read(IXJ *j, int cr);
static int daa_set_mode(IXJ *j, int mode);
static int ixj_linetest(IXJ *j);
static int ixj_daa_write(IXJ *j);
static int ixj_daa_cid_read(IXJ *j);
static void DAA_Coeff_US(IXJ *j);
static void DAA_Coeff_UK(IXJ *j);
static void DAA_Coeff_France(IXJ *j);
static void DAA_Coeff_Germany(IXJ *j);
static void DAA_Coeff_Australia(IXJ *j);
static void DAA_Coeff_Japan(IXJ *j);
static int ixj_init_filter(IXJ *j, IXJ_FILTER * jf);
static int ixj_init_filter_raw(IXJ *j, IXJ_FILTER_RAW * jfr);
static int ixj_init_tone(IXJ *j, IXJ_TONE * ti);
static int ixj_build_cadence(IXJ *j, IXJ_CADENCE __user * cp);
static int ixj_build_filter_cadence(IXJ *j, IXJ_FILTER_CADENCE __user * cp);
static int SCI_Control(IXJ *j, int control);
static int SCI_Prepare(IXJ *j);
static int SCI_WaitHighSCI(IXJ *j);
static int SCI_WaitLowSCI(IXJ *j);
static DWORD PCIEE_GetSerialNumber(WORD wAddress);
static int ixj_PCcontrol_wait(IXJ *j);
static void ixj_pre_cid(IXJ *j);
static void ixj_write_cid(IXJ *j);
static void ixj_write_cid_bit(IXJ *j, int bit);
static int set_base_frame(IXJ *j, int size);
static int set_play_codec(IXJ *j, int rate);
static void set_rec_depth(IXJ *j, int depth);
static int ixj_mixer(long val, IXJ *j);
static inline void ixj_read_HSR(IXJ *j)
static inline int IsControlReady(IXJ *j)
static inline int IsPCControlReady(IXJ *j)
static inline int IsStatusReady(IXJ *j)
static inline int IsRxReady(IXJ *j)
static inline int IsTxReady(IXJ *j)
static inline void set_play_volume(IXJ *j, int volume)
static int set_play_volume_linear(IXJ *j, int volume)
static inline void set_play_depth(IXJ *j, int depth)
static inline int get_play_volume(IXJ *j)
static int get_play_volume_linear(IXJ *j)
static inline BYTE SLIC_GetState(IXJ *j)
static bool SLIC_SetState(BYTE byState, IXJ *j)
static int ixj_wink(IXJ *j)
static void ixj_init_timer(IXJ *j)
static void ixj_add_timer(IXJ *j)
static void ixj_tone_timeout(IXJ *j)
static inline void ixj_kill_fasync(IXJ *j, IXJ_SIGEVENT event, int dir)
static void ixj_pstn_state(IXJ *j)
static void ixj_timeout(unsigned long ptr)
static int ixj_status_wait(IXJ *j)
static int ixj_PCcontrol_wait(IXJ *j)
static int ixj_WriteDSPCommand(unsigned short cmd, IXJ *j)
static inline int ixj_gpio_read(IXJ *j)
static inline void LED_SetState(int state, IXJ *j)
static int ixj_set_port(IXJ *j, int arg)
static int ixj_set_pots(IXJ *j, int arg)
static void ixj_ring_on(IXJ *j)
static int ixj_siadc(IXJ *j, int val)
static int ixj_sidac(IXJ *j, int val)
static int ixj_pcmcia_cable_check(IXJ *j)
static int ixj_hookstate(IXJ *j)
static void ixj_ring_off(IXJ *j)
static void ixj_ring_start(IXJ *j)
static int ixj_ring(IXJ *j)
static int ixj_open(struct phone_device *p, struct file *file_p)
static int ixj_release(struct inode *inode, struct file *file_p)
static int read_filters(IXJ *j)
static int LineMonitor(IXJ *j)
static void ulaw2alaw(unsigned char *buff, unsigned long len)
static void alaw2ulaw(unsigned char *buff, unsigned long len)
static ssize_t ixj_read(struct file * file_p, char __user *buf, size_t length, loff_t * ppos)
static ssize_t ixj_enhanced_read(struct file * file_p, char __user *buf, size_t length,
loff_t * ppos)
static ssize_t ixj_write(struct file *file_p, const char __user *buf, size_t count, loff_t * ppos)
static ssize_t ixj_enhanced_write(struct file * file_p, const char __user *buf, size_t count, loff_t * ppos)
static void ixj_read_frame(IXJ *j)
static short fsk[][6][20] =
;
static void ixj_write_cid_bit(IXJ *j, int bit)
static void ixj_write_cid_byte(IXJ *j, char byte)
static void ixj_write_cid_seize(IXJ *j)
static void ixj_write_cidcw_seize(IXJ *j)
static int ixj_write_cid_string(IXJ *j, char *s, int checksum)
static void ixj_pad_fsk(IXJ *j, int pad)
static void ixj_pre_cid(IXJ *j)
static void ixj_post_cid(IXJ *j)
static void ixj_write_cid(IXJ *j)
static void ixj_write_cidcw(IXJ *j)
static void ixj_write_vmwi(IXJ *j, int msg)
static void ixj_write_frame(IXJ *j)
static int idle(IXJ *j)
static int set_base_frame(IXJ *j, int size)
static int set_rec_codec(IXJ *j, int rate)
static int ixj_record_start(IXJ *j)
static void ixj_record_stop(IXJ *j)
static void ixj_vad(IXJ *j, int arg)
static void set_rec_depth(IXJ *j, int depth)
static void set_dtmf_prescale(IXJ *j, int volume)
static int get_dtmf_prescale(IXJ *j)
static void set_rec_volume(IXJ *j, int volume)
static int set_rec_volume_linear(IXJ *j, int volume)
static int get_rec_volume(IXJ *j)
static int get_rec_volume_linear(IXJ *j)
static int get_rec_level(IXJ *j)
static void ixj_aec_start(IXJ *j, int level)
static void aec_stop(IXJ *j)
static int set_play_codec(IXJ *j, int rate)
static int ixj_play_start(IXJ *j)
static void ixj_play_stop(IXJ *j)
static inline int get_play_level(IXJ *j)
static unsigned int ixj_poll(struct file *file_p, poll_table * wait)
static int ixj_play_tone(IXJ *j, char tone)
static int ixj_set_tone_on(unsigned short arg, IXJ *j)
static int SCI_WaitHighSCI(IXJ *j)
static int SCI_WaitLowSCI(IXJ *j)
static int SCI_Control(IXJ *j, int control)
static int SCI_Prepare(IXJ *j)
static int ixj_get_mixer(long val, IXJ *j)
static int ixj_mixer(long val, IXJ *j)
static int daa_load(BYTES * p_bytes, IXJ *j)
static int ixj_daa_cr4(IXJ *j, char reg)
static char daa_int_read(IXJ *j)
static char daa_CR_read(IXJ *j, int cr)
static int ixj_daa_cid_reset(IXJ *j)
static int ixj_daa_cid_read(IXJ *j)
static char daa_get_version(IXJ *j)
static int daa_set_mode(IXJ *j, int mode)
static int ixj_daa_write(IXJ *j)
static int ixj_set_tone_off(unsigned short arg, IXJ *j)
static int ixj_get_tone_on(IXJ *j)
static int ixj_get_tone_off(IXJ *j)
static void ixj_busytone(IXJ *j)
static void ixj_dialtone(IXJ *j)
static void ixj_cpt_stop(IXJ *j)
static void ixj_ringback(IXJ *j)
static void ixj_testram(IXJ *j)
static int ixj_build_cadence(IXJ *j, IXJ_CADENCE __user * cp)
static int ixj_build_filter_cadence(IXJ *j, IXJ_FILTER_CADENCE __user * cp)
static void add_caps(IXJ *j)
static int capabilities_check(IXJ *j, struct phone_capability *pcreq)
static long do_ixj_ioctl(struct file *file_p, unsigned int cmd, unsigned long arg)
static long ixj_ioctl(struct file *file_p, unsigned int cmd, unsigned long arg)
static int ixj_fasync(int fd, struct file *file_p, int mode)
static const struct file_operations ixj_fops =
;
static int ixj_linetest(IXJ *j)
static int ixj_selfprobe(IXJ *j)
IXJ *ixj_pcmcia_probe(unsigned long dsp, unsigned long xilinx)
EXPORT_SYMBOL(ixj_pcmcia_probe);
static int ixj_get_status_proc(char *buf)
static int ixj_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
static void cleanup(void)
typedef struct  DATABLOCK;
static void PCIEE_WriteBit(WORD wEEPROMAddress, BYTE lastLCC, BYTE byData)
static BYTE PCIEE_ReadBit(WORD wEEPROMAddress, BYTE lastLCC)
static bool PCIEE_ReadWord(WORD wAddress, WORD wLoc, WORD * pwResult)
static DWORD PCIEE_GetSerialNumber(WORD wAddress)
static int dspio[IXJMAX + 1] =
;
static int xio[IXJMAX + 1] =
;
module_param_array(dspio, int, NULL, 0);
module_param_array(xio, int, NULL, 0);
MODULE_DESCRIPTION("Quicknet VoIP Telephony card module - www.quicknet.net");
MODULE_AUTHOR("Ed Okerson <eokerson@quicknet.net>");
MODULE_LICENSE("GPL");
static void __exit ixj_exit(void)
static IXJ *new_ixj(unsigned long port)
static int __init ixj_probe_isapnp(int *cnt)
static int __init ixj_probe_isa(int *cnt)
static int __init ixj_probe_pci(int *cnt)
static int __init ixj_init(void)
module_init(ixj_init);
module_exit(ixj_exit);
static void DAA_Coeff_US(IXJ *j)
static void DAA_Coeff_UK(IXJ *j)
static void DAA_Coeff_France(IXJ *j)
static void DAA_Coeff_Germany(IXJ *j)
static void DAA_Coeff_Australia(IXJ *j)
static void DAA_Coeff_Japan(IXJ *j)
static s16 tone_table[][19] =
;
static int ixj_init_filter(IXJ *j, IXJ_FILTER * jf)
static int ixj_init_filter_raw(IXJ *j, IXJ_FILTER_RAW * jfr)
static int ixj_init_tone(IXJ *j, IXJ_TONE * ti)
