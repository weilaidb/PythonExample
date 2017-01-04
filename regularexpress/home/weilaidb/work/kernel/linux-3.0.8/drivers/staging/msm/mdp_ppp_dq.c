static boolean mdp_ppp_intr_flag = FALSE;
static boolean mdp_ppp_busy_flag = FALSE;
static LIST_HEAD(mdp_ppp_djob_clnrq);
static DEFINE_SPINLOCK(mdp_ppp_djob_clnrq_lock);
static struct workqueue_struct *mdp_ppp_djob_clnr;
static LIST_HEAD(mdp_ppp_dq);
static DEFINE_SPINLOCK(mdp_ppp_dq_lock);
static struct mdp_ppp_djob *curr_djob;
static int mdp_ppp_ret_code;
inline int mdp_ppp_get_ret_code(void)
inline void mdp_ppp_outdw(uint32_t addr, uint32_t data)
inline void mdp_ppp_dq_init(void)
static void mdp_ppp_del_djob(struct mdp_ppp_djob *job)
static void mdp_ppp_djob_cleaner(struct work_struct *work)
inline struct mdp_ppp_djob *mdp_ppp_new_djob(void)
inline void mdp_ppp_clear_curr_djob(void)
static void mdp_ppp_flush_dirty_djobs(void *cond)
void mdp_ppp_wait(void)
static void mdp_ppp_process_roi(struct list_head *roi_cmd_list)
static void mdp_ppp_dispatch_djob(struct mdp_ppp_djob *job)
static inline void mdp_ppp_enqueue_djob(struct mdp_ppp_djob *job)
void mdp_ppp_process_curr_djob(void)
void mdp_ppp_djob_done(void)
