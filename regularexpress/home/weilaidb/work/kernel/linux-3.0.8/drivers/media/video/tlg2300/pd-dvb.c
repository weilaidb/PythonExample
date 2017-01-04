static void dvb_urb_cleanup(struct pd_dvb_adapter *pd_dvb);
static int dvb_bandwidth[][2] = ;
static int dvb_bandwidth_length = ARRAY_SIZE(dvb_bandwidth);
static s32 dvb_start_streaming(struct pd_dvb_adapter *pd_dvb);
static int poseidon_check_mode_dvbt(struct poseidon *pd)
static int poseidon_ts_bus_ctrl(struct dvb_frontend *fe, int acquire)
static void poseidon_fe_release(struct dvb_frontend *fe)
#define poseidon_fe_release NULL
static s32 poseidon_fe_sleep(struct dvb_frontend *fe)
static bool check_scan_ok(__u32 freq, int bandwidth,
struct pd_dvb_adapter *adapter)
static int fw_delay_overflow(struct pd_dvb_adapter *adapter)
static int poseidon_set_fe(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int pm_dvb_suspend(struct poseidon *pd)
static int pm_dvb_resume(struct poseidon *pd)
static s32 poseidon_fe_init(struct dvb_frontend *fe)
static int poseidon_get_fe(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int poseidon_fe_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *tune)
static int poseidon_read_status(struct dvb_frontend *fe, fe_status_t *stat)
static int poseidon_read_ber(struct dvb_frontend *fe, u32 *ber)
static s32 poseidon_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int poseidon_read_snr(struct dvb_frontend *fe, u16 *snr)
static int poseidon_read_unc_blocks(struct dvb_frontend *fe, u32 *unc)
static struct dvb_frontend_ops poseidon_frontend_ops = ;
static void dvb_urb_irq(struct urb *urb)
static int dvb_urb_init(struct pd_dvb_adapter *pd_dvb)
static void dvb_urb_cleanup(struct pd_dvb_adapter *pd_dvb)
static s32 dvb_start_streaming(struct pd_dvb_adapter *pd_dvb)
void dvb_stop_streaming(struct pd_dvb_adapter *pd_dvb)
static int pd_start_feed(struct dvb_demux_feed *feed)
static int pd_stop_feed(struct dvb_demux_feed *feed)
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
int pd_dvb_usb_device_init(struct poseidon *pd)
void pd_dvb_usb_device_exit(struct poseidon *pd)
void pd_dvb_usb_device_cleanup(struct poseidon *pd)
int pd_dvb_get_adapter_num(struct pd_dvb_adapter *pd_dvb)
