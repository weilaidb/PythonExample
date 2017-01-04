#define MLOG_MASK_PREFIX ML_QUORUM
static struct o2quo_state  o2quo_state;
static void o2quo_fence_self(void)
void o2quo_disk_timeout(void)
static void o2quo_make_decision(struct work_struct *work)
static void o2quo_set_hold(struct o2quo_state *qs, u8 node)
static void o2quo_clear_hold(struct o2quo_state *qs, u8 node)
void o2quo_hb_up(u8 node)
void o2quo_hb_down(u8 node)
void o2quo_hb_still_up(u8 node)
void o2quo_conn_up(u8 node)
void o2quo_conn_err(u8 node)
void o2quo_init(void)
void o2quo_exit(void)
