static void bnx2fc_logo_resp(struct fc_seq *seq, struct fc_frame *fp,
void *arg);
static void bnx2fc_flogi_resp(struct fc_seq *seq, struct fc_frame *fp,
void *arg);
static int bnx2fc_initiate_els(struct bnx2fc_rport *tgt, unsigned int op,
void *data, u32 data_len,
void (*cb_func)(struct bnx2fc_els_cb_arg *cb_arg),
struct bnx2fc_els_cb_arg *cb_arg, u32 timer_msec);
static void bnx2fc_rrq_compl(struct bnx2fc_els_cb_arg *cb_arg)
int bnx2fc_send_rrq(struct bnx2fc_cmd *aborted_io_req)
static void bnx2fc_l2_els_compl(struct bnx2fc_els_cb_arg *cb_arg)
int bnx2fc_send_adisc(struct bnx2fc_rport *tgt, struct fc_frame *fp)
int bnx2fc_send_logo(struct bnx2fc_rport *tgt, struct fc_frame *fp)
int bnx2fc_send_rls(struct bnx2fc_rport *tgt, struct fc_frame *fp)
static int bnx2fc_initiate_els(struct bnx2fc_rport *tgt, unsigned int op,
void *data, u32 data_len,
void (*cb_func)(struct bnx2fc_els_cb_arg *cb_arg),
struct bnx2fc_els_cb_arg *cb_arg, u32 timer_msec)
void bnx2fc_process_els_compl(struct bnx2fc_cmd *els_req,
struct fcoe_task_ctx_entry *task, u8 num_rq)
static void bnx2fc_flogi_resp(struct fc_seq *seq, struct fc_frame *fp,
void *arg)
static void bnx2fc_logo_resp(struct fc_seq *seq, struct fc_frame *fp,
void *arg)
struct fc_seq *bnx2fc_elsct_send(struct fc_lport *lport, u32 did,
struct fc_frame *fp, unsigned int op,
void (*resp)(struct fc_seq *,
struct fc_frame *,
void *),
void *arg, u32 timeout)
