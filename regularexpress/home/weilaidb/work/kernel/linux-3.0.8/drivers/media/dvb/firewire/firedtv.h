#define _FIREDTV_H
struct firedtv_tuner_status ;
enum model_type ;
struct device;
struct input_dev;
struct fdtv_ir_context;
struct firedtv ;
int avc_recv(struct firedtv *fdtv, void *data, size_t length);
int avc_tuner_status(struct firedtv *fdtv, struct firedtv_tuner_status *stat);
struct dvb_frontend_parameters;
int avc_tuner_dsd(struct firedtv *fdtv, struct dvb_frontend_parameters *params);
int avc_tuner_set_pids(struct firedtv *fdtv, unsigned char pidc, u16 pid[]);
int avc_tuner_get_ts(struct firedtv *fdtv);
int avc_identify_subunit(struct firedtv *fdtv);
struct dvb_diseqc_master_cmd;
int avc_lnb_control(struct firedtv *fdtv, char voltage, char burst,
char conttone, char nrdiseq,
struct dvb_diseqc_master_cmd *diseqcmd);
void avc_remote_ctrl_work(struct work_struct *work);
int avc_register_remote_control(struct firedtv *fdtv);
int avc_ca_app_info(struct firedtv *fdtv, char *app_info, unsigned int *len);
int avc_ca_info(struct firedtv *fdtv, char *app_info, unsigned int *len);
int avc_ca_reset(struct firedtv *fdtv);
int avc_ca_pmt(struct firedtv *fdtv, char *app_info, int length);
int avc_ca_get_time_date(struct firedtv *fdtv, int *interval);
int avc_ca_enter_menu(struct firedtv *fdtv);
int avc_ca_get_mmi(struct firedtv *fdtv, char *mmi_object, unsigned int *len);
int cmp_establish_pp_connection(struct firedtv *fdtv, int plug, int channel);
void cmp_break_pp_connection(struct firedtv *fdtv, int plug, int channel);
int fdtv_ca_register(struct firedtv *fdtv);
void fdtv_ca_release(struct firedtv *fdtv);
int fdtv_start_feed(struct dvb_demux_feed *dvbdmxfeed);
int fdtv_stop_feed(struct dvb_demux_feed *dvbdmxfeed);
int fdtv_dvb_register(struct firedtv *fdtv, const char *name);
void fdtv_dvb_unregister(struct firedtv *fdtv);
void fdtv_frontend_init(struct firedtv *fdtv, const char *name);
int fdtv_lock(struct firedtv *fdtv, u64 addr, void *data);
int fdtv_read(struct firedtv *fdtv, u64 addr, void *data);
int fdtv_write(struct firedtv *fdtv, u64 addr, void *data, size_t len);
int fdtv_start_iso(struct firedtv *fdtv);
void fdtv_stop_iso(struct firedtv *fdtv);
int fdtv_register_rc(struct firedtv *fdtv, struct device *dev);
void fdtv_unregister_rc(struct firedtv *fdtv);
void fdtv_handle_rc(struct firedtv *fdtv, unsigned int code);
static inline int fdtv_register_rc(struct firedtv *fdtv,
struct device *dev)
static inline void fdtv_unregister_rc(struct firedtv *fdtv)
static inline void fdtv_handle_rc(struct firedtv *fdtv, unsigned int code)
