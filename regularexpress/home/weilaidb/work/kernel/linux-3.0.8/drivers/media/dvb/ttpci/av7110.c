#define TS_WIDTH  376
#define TS_HEIGHT 512
#define TS_BUFLEN (TS_WIDTH*TS_HEIGHT)
#define TS_MAX_PACKETS (TS_BUFLEN/TS_SIZE)
int av7110_debug;
static int vidmode = CVBS_RGB_OUT;
static int pids_off;
static int adac = DVB_ADAC_TI;
static int hw_sections;
static int rgb_on;
static int volume = 255;
static int budgetpatch;
static int wss_cfg_4_3 = 0x4008;
static int wss_cfg_16_9 = 0x0007;
static int tv_standard;
static int full_ts;
module_param_named(debug, av7110_debug, int, 0644);
MODULE_PARM_DESC(debug, "debug level (bitmask, default 0)");
module_param(vidmode, int, 0444);
MODULE_PARM_DESC(vidmode,"analog video out: 0 off, 1 CVBS+RGB (default), 2 CVBS+YC, 3 YC");
module_param(pids_off, int, 0444);
MODULE_PARM_DESC(pids_off,"clear video/audio/PCR PID filters when demux is closed");
module_param(adac, int, 0444);
MODULE_PARM_DESC(adac,"audio DAC type: 0 TI, 1 CRYSTAL, 2 MSP (use if autodetection fails)");
module_param(hw_sections, int, 0444);
MODULE_PARM_DESC(hw_sections, "0 use software section filter, 1 use hardware");
module_param(rgb_on, int, 0444);
MODULE_PARM_DESC(rgb_on, "For Siemens DVB-C cards only: Enable RGB control"
" signal on SCART pin 16 to switch SCART video mode from CVBS to RGB");
module_param(volume, int, 0444);
MODULE_PARM_DESC(volume, "initial volume: default 255 (range 0-255)");
module_param(budgetpatch, int, 0444);
MODULE_PARM_DESC(budgetpatch, "use budget-patch hardware modification: default 0 (0 no, 1 autodetect, 2 always)");
module_param(full_ts, int, 0444);
MODULE_PARM_DESC(full_ts, "enable code for full-ts hardware modification: 0 disable (default), 1 enable");
module_param(wss_cfg_4_3, int, 0444);
MODULE_PARM_DESC(wss_cfg_4_3, "WSS 4:3 - default 0x4008 - bit 15: disable, 14: burst mode, 13..0: wss data");
module_param(wss_cfg_16_9, int, 0444);
MODULE_PARM_DESC(wss_cfg_16_9, "WSS 16:9 - default 0x0007 - bit 15: disable, 14: burst mode, 13..0: wss data");
module_param(tv_standard, int, 0444);
MODULE_PARM_DESC(tv_standard, "TV standard: 0 PAL (default), 1 NTSC");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static void restart_feeds(struct av7110 *av7110);
static int budget_start_feed(struct dvb_demux_feed *feed);
static int budget_stop_feed(struct dvb_demux_feed *feed);
static int av7110_num;
#define FE_FUNC_OVERRIDE(fe_func, av7110_copy, av7110_func) \
static void init_av7110_av(struct av7110 *av7110)
static void recover_arm(struct av7110 *av7110)
static void av7110_arm_sync(struct av7110 *av7110)
static int arm_thread(void *data)
static int DvbDmxFilterCallback(u8 *buffer1, size_t buffer1_len,
u8 *buffer2, size_t buffer2_len,
struct dvb_demux_filter *dvbdmxfilter,
enum dmx_success success,
struct av7110 *av7110)
static inline void print_time(char *s)
#define DEBI_READ 0
#define DEBI_WRITE 1
static inline void start_debi_dma(struct av7110 *av7110, int dir,
unsigned long addr, unsigned int len)
static void debiirq(unsigned long cookie)
static void gpioirq(unsigned long cookie)
static int dvb_osd_ioctl(struct file *file,
unsigned int cmd, void *parg)
static const struct file_operations dvb_osd_fops = ;
static struct dvb_device dvbdev_osd = ;
static inline int SetPIDs(struct av7110 *av7110, u16 vpid, u16 apid, u16 ttpid,
u16 subpid, u16 pcrpid)
int ChangePIDs(struct av7110 *av7110, u16 vpid, u16 apid, u16 ttpid,
u16 subpid, u16 pcrpid)
static int StartHWFilter(struct dvb_demux_filter *dvbdmxfilter)
static int StopHWFilter(struct dvb_demux_filter *dvbdmxfilter)
static int dvb_feed_start_pid(struct dvb_demux_feed *dvbdmxfeed)
static int dvb_feed_stop_pid(struct dvb_demux_feed *dvbdmxfeed)
static int av7110_start_feed(struct dvb_demux_feed *feed)
static int av7110_stop_feed(struct dvb_demux_feed *feed)
static void restart_feeds(struct av7110 *av7110)
static int dvb_get_stc(struct dmx_demux *demux, unsigned int num,
uint64_t *stc, unsigned int *base)
static int av7110_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int av7110_diseqc_send_master_cmd(struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd* cmd)
static int av7110_diseqc_send_burst(struct dvb_frontend* fe,
fe_sec_mini_cmd_t minicmd)
static int stop_ts_capture(struct av7110 *budget)
static int start_ts_capture(struct av7110 *budget)
static int budget_start_feed(struct dvb_demux_feed *feed)
static int budget_stop_feed(struct dvb_demux_feed *feed)
static void vpeirq(unsigned long cookie)
static int av7110_register(struct av7110 *av7110)
static void dvb_unregister(struct av7110 *av7110)
int i2c_writereg(struct av7110 *av7110, u8 id, u8 reg, u8 val)
u8 i2c_readreg(struct av7110 *av7110, u8 id, u8 reg)
static int check_firmware(struct av7110* av7110)
static void put_firmware(struct av7110* av7110)
static int get_firmware(struct av7110* av7110)
static int alps_bsrv2_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters *params)
static struct ves1x93_config alps_bsrv2_config = ;
static int alps_tdbe2_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters *params)
static struct ves1820_config alps_tdbe2_config = ;
static int grundig_29504_451_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters *params)
static struct tda8083_config grundig_29504_451_config = ;
static int philips_cd1516_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters *params)
static struct ves1820_config philips_cd1516_config = ;
static int alps_tdlb7_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters *params)
static int alps_tdlb7_request_firmware(struct dvb_frontend* fe, const struct firmware **fw, char* name)
static struct sp8870_config alps_tdlb7_config = ;
static u8 nexusca_stv0297_inittab[] = ;
static int nexusca_stv0297_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters *params)
static struct stv0297_config nexusca_stv0297_config = ;
static int grundig_29504_401_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters *params)
static struct l64781_config grundig_29504_401_config = ;
static int av7110_fe_lock_fix(struct av7110* av7110, fe_status_t status)
static int av7110_fe_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static int av7110_fe_init(struct dvb_frontend* fe)
static int av7110_fe_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int av7110_fe_diseqc_reset_overload(struct dvb_frontend* fe)
static int av7110_fe_diseqc_send_master_cmd(struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd* cmd)
static int av7110_fe_diseqc_send_burst(struct dvb_frontend* fe, fe_sec_mini_cmd_t minicmd)
static int av7110_fe_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int av7110_fe_set_voltage(struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static int av7110_fe_dishnetwork_send_legacy_command(struct dvb_frontend* fe, unsigned long cmd)
static void dvb_s_recover(struct av7110* av7110)
static u8 read_pwm(struct av7110* av7110)
static int frontend_init(struct av7110 *av7110)
static int __devinit av7110_attach(struct saa7146_dev* dev,
struct saa7146_pci_extension_data *pci_ext)
static int __devexit av7110_detach(struct saa7146_dev* saa)
static void av7110_irq(struct saa7146_dev* dev, u32 *isr)
static struct saa7146_extension av7110_extension_driver;
#define MAKE_AV7110_INFO(x_var,x_name) \
static struct saa7146_pci_extension_data x_var =
MAKE_AV7110_INFO(tts_1_X_fsc,"Technotrend/Hauppauge WinTV DVB-S rev1.X or Fujitsu Siemens DVB-C");
MAKE_AV7110_INFO(ttt_1_X,    "Technotrend/Hauppauge WinTV DVB-T rev1.X");
MAKE_AV7110_INFO(ttc_1_X,    "Technotrend/Hauppauge WinTV Nexus-CA rev1.X");
MAKE_AV7110_INFO(ttc_2_X,    "Technotrend/Hauppauge WinTV DVB-C rev2.X");
MAKE_AV7110_INFO(tts_2_X,    "Technotrend/Hauppauge WinTV Nexus-S rev2.X");
MAKE_AV7110_INFO(tts_2_3,    "Technotrend/Hauppauge WinTV Nexus-S rev2.3");
MAKE_AV7110_INFO(tts_1_3se,  "Technotrend/Hauppauge WinTV DVB-S rev1.3 SE");
MAKE_AV7110_INFO(ttt,        "Technotrend/Hauppauge DVB-T");
MAKE_AV7110_INFO(fsc,        "Fujitsu Siemens DVB-C");
MAKE_AV7110_INFO(fss,        "Fujitsu Siemens DVB-S rev1.6");
MAKE_AV7110_INFO(gxs_1_3,    "Galaxis DVB-S rev1.3");
static struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static struct saa7146_extension av7110_extension_driver = ;
static int __init av7110_init(void)
static void __exit av7110_exit(void)
module_init(av7110_init);
module_exit(av7110_exit);
MODULE_DESCRIPTION("driver for the SAA7146 based AV110 PCI DVB cards by "
"Siemens, Technotrend, Hauppauge");
MODULE_AUTHOR("Ralph Metzler, Marcus Metzler, others");
MODULE_LICENSE("GPL");
