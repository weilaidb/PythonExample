MODULE_AUTHOR("Open-FCoE.org");
MODULE_DESCRIPTION("libfc");
MODULE_LICENSE("GPL v2");
unsigned int fc_debug_logging;
module_param_named(debug_logging, fc_debug_logging, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(debug_logging, "a bit mask of logging levels");
DEFINE_MUTEX(fc_prov_mutex);
static LIST_HEAD(fc_local_ports);
struct blocking_notifier_head fc_lport_notifier_head =
BLOCKING_NOTIFIER_INIT(fc_lport_notifier_head);
EXPORT_SYMBOL(fc_lport_notifier_head);
struct fc4_prov *fc_active_prov[FC_FC4_PROV_SIZE] = ;
struct fc4_prov *fc_passive_prov[FC_FC4_PROV_SIZE] = ;
static int __init libfc_init(void)
module_init(libfc_init);
static void __exit libfc_exit(void)
module_exit(libfc_exit);
u32 fc_copy_buffer_to_sglist(void *buf, size_t len,
struct scatterlist *sg,
u32 *nents, size_t *offset,
enum km_type km_type, u32 *crc)
void fc_fill_hdr(struct fc_frame *fp, const struct fc_frame *in_fp,
enum fc_rctl r_ctl, u32 f_ctl, u16 seq_cnt, u32 parm_offset)
EXPORT_SYMBOL(fc_fill_hdr);
void fc_fill_reply_hdr(struct fc_frame *fp, const struct fc_frame *in_fp,
enum fc_rctl r_ctl, u32 parm_offset)
EXPORT_SYMBOL(fc_fill_reply_hdr);
void fc_fc4_conf_lport_params(struct fc_lport *lport, enum fc_fh_type type)
void fc_lport_iterate(void (*notify)(struct fc_lport *, void *), void *arg)
EXPORT_SYMBOL(fc_lport_iterate);
int fc_fc4_register_provider(enum fc_fh_type type, struct fc4_prov *prov)
EXPORT_SYMBOL(fc_fc4_register_provider);
void fc_fc4_deregister_provider(enum fc_fh_type type, struct fc4_prov *prov)
EXPORT_SYMBOL(fc_fc4_deregister_provider);
void fc_fc4_add_lport(struct fc_lport *lport)
void fc_fc4_del_lport(struct fc_lport *lport)
