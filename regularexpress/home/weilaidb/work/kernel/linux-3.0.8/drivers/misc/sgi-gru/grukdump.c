#define CCH_LOCK_ATTEMPTS	10
static int gru_user_copy_handle(void __user **dp, void *s)
static int gru_dump_context_data(void *grubase,
struct gru_context_configuration_handle *cch,
void __user *ubuf, int ctxnum, int dsrcnt,
int flush_cbrs)
static int gru_dump_tfm(struct gru_state *gru,
void __user *ubuf, void __user *ubufend)
static int gru_dump_tgh(struct gru_state *gru,
void __user *ubuf, void __user *ubufend)
static int gru_dump_context(struct gru_state *gru, int ctxnum,
void __user *ubuf, void __user *ubufend, char data_opt,
char lock_cch, char flush_cbrs)
int gru_dump_chiplet_request(unsigned long arg)
