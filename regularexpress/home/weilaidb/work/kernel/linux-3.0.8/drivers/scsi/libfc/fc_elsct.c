struct fc_seq *fc_elsct_send(struct fc_lport *lport, u32 did,
struct fc_frame *fp, unsigned int op,
void (*resp)(struct fc_seq *,
struct fc_frame *,
void *),
void *arg, u32 timer_msec)
EXPORT_SYMBOL(fc_elsct_send);
int fc_elsct_init(struct fc_lport *lport)
EXPORT_SYMBOL(fc_elsct_init);
const char *fc_els_resp_type(struct fc_frame *fp)
