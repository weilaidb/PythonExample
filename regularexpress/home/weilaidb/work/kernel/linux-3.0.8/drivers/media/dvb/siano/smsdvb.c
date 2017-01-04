DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
struct smsdvb_client_t ;
static struct list_head g_smsdvb_clients;
static struct mutex g_smsdvb_clientslock;
static int sms_dbg;
module_param_named(debug, sms_dbg, int, 0644);
MODULE_PARM_DESC(debug, "set debug level (info=1, adv=2 (or-able))");
static void sms_board_dvb3_event(struct smsdvb_client_t *client,
enum SMS_DVB3_EVENTS event)
static void smsdvb_update_dvb_stats(struct RECEPTION_STATISTICS_S *pReceptionData,
struct SMSHOSTLIB_STATISTICS_ST *p)
;
static void smsdvb_update_isdbt_stats(struct RECEPTION_STATISTICS_S *pReceptionData,
struct SMSHOSTLIB_STATISTICS_ISDBT_ST *p)
static int smsdvb_onresponse(void *context, struct smscore_buffer_t *cb)
static void smsdvb_unregister_client(struct smsdvb_client_t *client)
static void smsdvb_onremove(void *context)
static int smsdvb_start_feed(struct dvb_demux_feed *feed)
static int smsdvb_stop_feed(struct dvb_demux_feed *feed)
static int smsdvb_sendrequest_and_wait(struct smsdvb_client_t *client,
void *buffer, size_t size,
struct completion *completion)
static int smsdvb_send_statistics_request(struct smsdvb_client_t *client)
static inline int led_feedback(struct smsdvb_client_t *client)
static int smsdvb_read_status(struct dvb_frontend *fe, fe_status_t *stat)
static int smsdvb_read_ber(struct dvb_frontend *fe, u32 *ber)
static int smsdvb_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int smsdvb_read_snr(struct dvb_frontend *fe, u16 *snr)
static int smsdvb_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int smsdvb_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *tune)
static int smsdvb_dvbt_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int smsdvb_isdbt_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int smsdvb_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int smsdvb_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int smsdvb_init(struct dvb_frontend *fe)
static int smsdvb_sleep(struct dvb_frontend *fe)
static void smsdvb_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops smsdvb_fe_ops = ;
static int smsdvb_hotplug(struct smscore_device_t *coredev,
struct device *device, int arrival)
static int __init smsdvb_module_init(void)
static void __exit smsdvb_module_exit(void)
module_init(smsdvb_module_init);
module_exit(smsdvb_module_exit);
MODULE_DESCRIPTION("SMS DVB subsystem adaptation module");
MODULE_AUTHOR("Siano Mobile Silicon, Inc. (uris@siano-ms.com)");
MODULE_LICENSE("GPL");
