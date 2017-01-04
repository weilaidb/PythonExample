static int timeout_base_ns[] = ;
static int timeout_us;
static int nobau;
static int baudisabled;
static spinlock_t disable_lock;
static cycles_t congested_cycles;
static int max_concurr		= MAX_BAU_CONCURRENT;
static int max_concurr_const	= MAX_BAU_CONCURRENT;
static int plugged_delay	= PLUGGED_DELAY;
static int plugsb4reset		= PLUGSB4RESET;
static int timeoutsb4reset	= TIMEOUTSB4RESET;
static int ipi_reset_limit	= IPI_RESET_LIMIT;
static int complete_threshold	= COMPLETE_THRESHOLD;
static int congested_respns_us	= CONGESTED_RESPONSE_US;
static int congested_reps	= CONGESTED_REPS;
static int congested_period	= CONGESTED_PERIOD;
static struct tunables tunables[] = ;
static struct dentry *tunables_dir;
static struct dentry *tunables_file;
static char *stat_description[] = ;
static int __init
setup_nobau(char *arg)
early_param("nobau", setup_nobau);
static int uv_base_pnode __read_mostly;
static int uv_nshift __read_mostly;
static unsigned long uv_mmask __read_mostly;
static DEFINE_PER_CPU(struct ptc_stats, ptcstats);
static DEFINE_PER_CPU(struct bau_control, bau_control);
static DEFINE_PER_CPU(cpumask_var_t, uv_flush_tlb_mask);
static int __init uvhub_to_first_node(int uvhub)
static int __init uvhub_to_first_apicid(int uvhub)
static void reply_to_message(struct msg_desc *mdp, struct bau_control *bcp)
static void bau_process_retry_msg(struct msg_desc *mdp,
struct bau_control *bcp)
static void bau_process_message(struct msg_desc *mdp,
struct bau_control *bcp)
static int uvhub_to_first_cpu(int uvhub)
static void do_reset(void *ptr)
static void reset_with_ipi(struct bau_targ_hubmask *distribution, int sender)
static inline unsigned long cycles_2_us(unsigned long long cyc)
static inline void quiesce_local_uvhub(struct bau_control *hmaster)
static inline void end_uvhub_quiesce(struct bau_control *hmaster)
static unsigned long uv1_read_status(unsigned long mmr_offset, int right_shift)
static int uv1_wait_completion(struct bau_desc *bau_desc,
unsigned long mmr_offset, int right_shift,
struct bau_control *bcp, long try)
static unsigned long uv2_read_status(unsigned long offset, int rshft, int cpu)
static int uv2_wait_completion(struct bau_desc *bau_desc,
unsigned long mmr_offset, int right_shift,
struct bau_control *bcp, long try)
static int wait_completion(struct bau_desc *bau_desc,
struct bau_control *bcp, long try)
static inline cycles_t sec_2_cycles(unsigned long sec)
static void destination_plugged(struct bau_desc *bau_desc,
struct bau_control *bcp,
struct bau_control *hmaster, struct ptc_stats *stat)
static void destination_timeout(struct bau_desc *bau_desc,
struct bau_control *bcp, struct bau_control *hmaster,
struct ptc_stats *stat)
static void disable_for_congestion(struct bau_control *bcp,
struct ptc_stats *stat)
static void count_max_concurr(int stat, struct bau_control *bcp,
struct bau_control *hmaster)
static void record_send_stats(cycles_t time1, cycles_t time2,
struct bau_control *bcp, struct ptc_stats *stat,
int completion_status, int try)
static void uv1_throttle(struct bau_control *hmaster, struct ptc_stats *stat)
static void handle_cmplt(int completion_status, struct bau_desc *bau_desc,
struct bau_control *bcp, struct bau_control *hmaster,
struct ptc_stats *stat)
int uv_flush_send_and_wait(struct bau_desc *bau_desc,
struct cpumask *flush_mask, struct bau_control *bcp)
static int check_enable(struct bau_control *bcp, struct ptc_stats *stat)
static void record_send_statistics(struct ptc_stats *stat, int locals, int hubs,
int remotes, struct bau_desc *bau_desc)
static int set_distrib_bits(struct cpumask *flush_mask, struct bau_control *bcp,
struct bau_desc *bau_desc, int *localsp, int *remotesp)
const struct cpumask *uv_flush_tlb_others(const struct cpumask *cpumask,
struct mm_struct *mm, unsigned long va,
unsigned int cpu)
void uv_bau_message_interrupt(struct pt_regs *regs)
static void __init enable_timeouts(void)
static void *ptc_seq_start(struct seq_file *file, loff_t *offset)
static void *ptc_seq_next(struct seq_file *file, void *data, loff_t *offset)
static void ptc_seq_stop(struct seq_file *file, void *data)
static inline unsigned long long usec_2_cycles(unsigned long microsec)
static int ptc_seq_show(struct seq_file *file, void *data)
static ssize_t tunables_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t ptc_proc_write(struct file *file, const char __user *user,
size_t count, loff_t *data)
static int local_atoi(const char *name)
static int parse_tunables_write(struct bau_control *bcp, char *instr,
int count)
static ssize_t tunables_write(struct file *file, const char __user *user,
size_t count, loff_t *data)
static const struct seq_operations uv_ptc_seq_ops = ;
static int ptc_proc_open(struct inode *inode, struct file *file)
static int tunables_open(struct inode *inode, struct file *file)
static const struct file_operations proc_uv_ptc_operations = ;
static const struct file_operations tunables_fops = ;
static int __init uv_ptc_init(void)
static void activation_descriptor_init(int node, int pnode, int base_pnode)
static void pq_init(int node, int pnode)
static void __init init_uvhub(int uvhub, int vector, int base_pnode)
static int calculate_destination_timeout(void)
static void __init init_per_cpu_tunables(void)
static int __init get_cpu_topology(int base_pnode,
struct uvhub_desc *uvhub_descs,
unsigned char *uvhub_mask)
static void make_per_cpu_thp(struct bau_control *smaster)
static int scan_sock(struct socket_desc *sdp, struct uvhub_desc *bdp,
struct bau_control **smasterp,
struct bau_control **hmasterp)
static int __init summarize_uvhub_sockets(int nuvhubs,
struct uvhub_desc *uvhub_descs,
unsigned char *uvhub_mask)
static int __init init_per_cpu(int nuvhubs, int base_part_pnode)
static int __init uv_bau_init(void)
core_initcall(uv_bau_init);
fs_initcall(uv_ptc_init);
