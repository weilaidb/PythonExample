#define PFM_CTX_UNLOADED	1
#define PFM_CTX_LOADED		2
#define PFM_CTX_MASKED		3
#define PFM_CTX_ZOMBIE		4
#define PFM_INVALID_ACTIVATION	(~0UL)
#define PFM_NUM_PMC_REGS	64
#define PFM_NUM_PMD_REGS	64
#define PFM_MAX_MSGS		32
#define PFM_CTXQ_EMPTY(g)	((g)->ctx_msgq_head == (g)->ctx_msgq_tail)
#define PFM_REG_NOTIMPL		0x0
#define PFM_REG_IMPL		0x1
#define PFM_REG_END		0x2
#define PFM_REG_MONITOR		(0x1<<4|PFM_REG_IMPL)
#define PFM_REG_COUNTING	(0x2<<4|PFM_REG_MONITOR)
#define PFM_REG_CONTROL		(0x4<<4|PFM_REG_IMPL)
#define	PFM_REG_CONFIG		(0x8<<4|PFM_REG_IMPL)
#define PFM_REG_BUFFER	 	(0xc<<4|PFM_REG_IMPL)
#define PMC_IS_LAST(i)	(pmu_conf->pmc_desc[i].type & PFM_REG_END)
#define PMD_IS_LAST(i)	(pmu_conf->pmd_desc[i].type & PFM_REG_END)
#define PMC_OVFL_NOTIFY(ctx, i)	((ctx)->ctx_pmds[i].flags &  PFM_REGFL_OVFL_NOTIFY)
#define PMC_IS_IMPL(i)	  (i< PMU_MAX_PMCS && (pmu_conf->pmc_desc[i].type & PFM_REG_IMPL))
#define PMD_IS_IMPL(i)	  (i< PMU_MAX_PMDS && (pmu_conf->pmd_desc[i].type & PFM_REG_IMPL))
#define PMD_IS_COUNTING(i) ((pmu_conf->pmd_desc[i].type & PFM_REG_COUNTING) == PFM_REG_COUNTING)
#define PMC_IS_COUNTING(i) ((pmu_conf->pmc_desc[i].type & PFM_REG_COUNTING) == PFM_REG_COUNTING)
#define PMC_IS_MONITOR(i)  ((pmu_conf->pmc_desc[i].type & PFM_REG_MONITOR)  == PFM_REG_MONITOR)
#define PMC_IS_CONTROL(i)  ((pmu_conf->pmc_desc[i].type & PFM_REG_CONTROL)  == PFM_REG_CONTROL)
#define PMC_DFL_VAL(i)     pmu_conf->pmc_desc[i].default_value
#define PMC_RSVD_MASK(i)   pmu_conf->pmc_desc[i].reserved_mask
#define PMD_PMD_DEP(i)	   pmu_conf->pmd_desc[i].dep_pmd[0]
#define PMC_PMD_DEP(i)	   pmu_conf->pmc_desc[i].dep_pmd[0]
#define PFM_NUM_IBRS	  IA64_NUM_DBG_REGS
#define PFM_NUM_DBRS	  IA64_NUM_DBG_REGS
#define CTX_OVFL_NOBLOCK(c)	((c)->ctx_fl_block == 0)
#define CTX_HAS_SMPL(c)		((c)->ctx_fl_is_sampling)
#define PFM_CTX_TASK(h)		(h)->ctx_task
#define PMU_PMC_OI		5
#define CTX_USED_PMD(ctx, mask) (ctx)->ctx_used_pmds[0] |= (mask)
#define CTX_IS_USED_PMD(ctx, c) (((ctx)->ctx_used_pmds[0] & (1UL << (c))) != 0UL)
#define CTX_USED_MONITOR(ctx, mask) (ctx)->ctx_used_monitors[0] |= (mask)
#define CTX_USED_IBR(ctx,n) 	(ctx)->ctx_used_ibrs[(n)>>6] |= 1UL<< ((n) % 64)
#define CTX_USED_DBR(ctx,n) 	(ctx)->ctx_used_dbrs[(n)>>6] |= 1UL<< ((n) % 64)
#define CTX_USES_DBREGS(ctx)	(((pfm_context_t *)(ctx))->ctx_fl_using_dbreg==1)
#define PFM_CODE_RR	0
#define PFM_DATA_RR	1
#define PFM_CPUINFO_CLEAR(v)	pfm_get_cpu_var(pfm_syst_info) &= ~(v)
#define PFM_CPUINFO_SET(v)	pfm_get_cpu_var(pfm_syst_info) |= (v)
#define PFM_CPUINFO_GET()	pfm_get_cpu_var(pfm_syst_info)
#define RDEP(x)	(1UL<<(x))
#define PROTECT_CTX(c, f) \
do  while(0)
#define UNPROTECT_CTX(c, f) \
do  while(0)
#define PROTECT_CTX_NOPRINT(c, f) \
do  while(0)
#define UNPROTECT_CTX_NOPRINT(c, f) \
do  while(0)
#define PROTECT_CTX_NOIRQ(c) \
do  while(0)
#define UNPROTECT_CTX_NOIRQ(c) \
do  while(0)
#define GET_ACTIVATION()	pfm_get_cpu_var(pmu_activation_number)
#define INC_ACTIVATION()	pfm_get_cpu_var(pmu_activation_number)++
#define SET_ACTIVATION(c)	(c)->ctx_last_activation = GET_ACTIVATION()
#define SET_ACTIVATION(t) 	do  while(0)
#define GET_ACTIVATION(t) 	do  while(0)
#define INC_ACTIVATION(t) 	do  while(0)
#define SET_PMU_OWNER(t, c)	do  while(0)
#define GET_PMU_OWNER()		pfm_get_cpu_var(pmu_owner)
#define GET_PMU_CTX()		pfm_get_cpu_var(pmu_ctx)
#define LOCK_PFS(g)	    	spin_lock_irqsave(&pfm_sessions.pfs_lock, g)
#define UNLOCK_PFS(g)	    	spin_unlock_irqrestore(&pfm_sessions.pfs_lock, g)
#define PFM_REG_RETFLAG_SET(flags, val)	do  while(0)
#define PMC0_HAS_OVFL(cmp0)  (cmp0 & ~0x1UL)
#define PFMFS_MAGIC 0xa0b4d889
#define PFM_DEBUGGING 1
#define DPRINT(a) \
do  while (0)
#define DPRINT_ovfl(a) \
do  while (0)
typedef struct  pfm_counter_t;
typedef struct  pfm_context_flags_t;
#define PFM_TRAP_REASON_NONE		0x0
#define PFM_TRAP_REASON_BLOCK		0x1
#define PFM_TRAP_REASON_RESET		0x2
typedef struct pfm_context  pfm_context_t;
#define PFM_IS_FILE(f)		((f)->f_op == &pfm_file_ops)
#define PFM_GET_CTX(t)	 	((pfm_context_t *)(t)->thread.pfm_context)
#define SET_LAST_CPU(ctx, v)	(ctx)->ctx_last_cpu = (v)
#define GET_LAST_CPU(ctx)	(ctx)->ctx_last_cpu
#define SET_LAST_CPU(ctx, v)	do  while(0)
#define GET_LAST_CPU(ctx)	do  while(0)
#define ctx_fl_block		ctx_flags.block
#define ctx_fl_system		ctx_flags.system
#define ctx_fl_using_dbreg	ctx_flags.using_dbreg
#define ctx_fl_is_sampling	ctx_flags.is_sampling
#define ctx_fl_excl_idle	ctx_flags.excl_idle
#define ctx_fl_going_zombie	ctx_flags.going_zombie
#define ctx_fl_trap_reason	ctx_flags.trap_reason
#define ctx_fl_no_msg		ctx_flags.no_msg
#define ctx_fl_can_restart	ctx_flags.can_restart
#define PFM_SET_WORK_PENDING(t, v)	do  while(0);
#define PFM_GET_WORK_PENDING(t)		(t)->thread.pfm_needs_checking
typedef struct  pfm_session_t;
typedef int (*pfm_reg_check_t)(struct task_struct *task, pfm_context_t *ctx, unsigned int cnum, unsigned long *val, struct pt_regs *regs);
typedef struct  pfm_reg_desc_t;
#define PMC_PM(cnum, val)	(((val) >> (pmu_conf->pmc_desc[cnum].pm_pos)) & 0x1)
typedef struct  pmu_config_t;
#define PFM_PMU_IRQ_RESEND	1
typedef struct  ibr_mask_reg_t;
typedef struct  dbr_mask_reg_t;
typedef union  dbreg_t;
typedef struct  pfm_cmd_desc_t;
#define PFM_CMD_FD		0x01
#define PFM_CMD_ARG_READ	0x02
#define PFM_CMD_ARG_RW		0x04
#define PFM_CMD_STOP		0x08
#define PFM_CMD_NAME(cmd)	pfm_cmd_tab[(cmd)].cmd_name
#define PFM_CMD_READ_ARG(cmd)	(pfm_cmd_tab[(cmd)].cmd_flags & PFM_CMD_ARG_READ)
#define PFM_CMD_RW_ARG(cmd)	(pfm_cmd_tab[(cmd)].cmd_flags & PFM_CMD_ARG_RW)
#define PFM_CMD_USE_FD(cmd)	(pfm_cmd_tab[(cmd)].cmd_flags & PFM_CMD_FD)
#define PFM_CMD_STOPPED(cmd)	(pfm_cmd_tab[(cmd)].cmd_flags & PFM_CMD_STOP)
#define PFM_CMD_ARG_MANY	-1
typedef struct  pfm_stats_t;
static pfm_stats_t		pfm_stats[NR_CPUS];
static pfm_session_t		pfm_sessions;
static DEFINE_SPINLOCK(pfm_alt_install_check);
static pfm_intr_handler_desc_t  *pfm_alt_intr_handler;
static struct proc_dir_entry 	*perfmon_dir;
static pfm_uuid_t		pfm_null_uuid = ;
static spinlock_t		pfm_buffer_fmt_lock;
static LIST_HEAD(pfm_buffer_fmt_list);
static pmu_config_t		*pmu_conf;
pfm_sysctl_t pfm_sysctl;
EXPORT_SYMBOL(pfm_sysctl);
static ctl_table pfm_ctl_table[]=;
static ctl_table pfm_sysctl_dir[] = ;
static ctl_table pfm_sysctl_root[] = ;
static struct ctl_table_header *pfm_sysctl_header;
static int pfm_context_unload(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs);
#define pfm_get_cpu_var(v)		__ia64_per_cpu_var(v)
#define pfm_get_cpu_data(a,b)		per_cpu(a, b)
static inline void
pfm_put_task(struct task_struct *task)
static inline void
pfm_reserve_page(unsigned long a)
static inline void
pfm_unreserve_page(unsigned long a)
static inline unsigned long
pfm_protect_ctx_ctxsw(pfm_context_t *x)
static inline void
pfm_unprotect_ctx_ctxsw(pfm_context_t *x, unsigned long f)
static inline unsigned int
pfm_do_munmap(struct mm_struct *mm, unsigned long addr, size_t len, int acct)
static inline unsigned long
pfm_get_unmapped_area(struct file *file, unsigned long addr, unsigned long len, unsigned long pgoff, unsigned long flags, unsigned long exec)
static const struct dentry_operations pfmfs_dentry_operations;
static struct dentry *
pfmfs_mount(struct file_system_type *fs_type, int flags, const char *dev_name, void *data)
static struct file_system_type pfm_fs_type = ;
DEFINE_PER_CPU(unsigned long, pfm_syst_info);
DEFINE_PER_CPU(struct task_struct *, pmu_owner);
DEFINE_PER_CPU(pfm_context_t  *, pmu_ctx);
DEFINE_PER_CPU(unsigned long, pmu_activation_number);
EXPORT_PER_CPU_SYMBOL_GPL(pfm_syst_info);
static const struct file_operations pfm_file_ops;
static void pfm_lazy_save_regs (struct task_struct *ta);
void dump_pmu_state(const char *);
static int pfm_write_ibr_dbr(int mode, pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs);
static pmu_config_t *pmu_confs[]=;
static int pfm_end_notify_user(pfm_context_t *ctx);
static inline void
pfm_clear_psr_pp(void)
static inline void
pfm_set_psr_pp(void)
static inline void
pfm_clear_psr_up(void)
static inline void
pfm_set_psr_up(void)
static inline unsigned long
pfm_get_psr(void)
static inline void
pfm_set_psr_l(unsigned long val)
static inline void
pfm_freeze_pmu(void)
static inline void
pfm_unfreeze_pmu(void)
static inline void
pfm_restore_ibrs(unsigned long *ibrs, unsigned int nibrs)
static inline void
pfm_restore_dbrs(unsigned long *dbrs, unsigned int ndbrs)
static inline unsigned long
pfm_read_soft_counter(pfm_context_t *ctx, int i)
static inline void
pfm_write_soft_counter(pfm_context_t *ctx, int i, unsigned long val)
static pfm_msg_t *
pfm_get_new_msg(pfm_context_t *ctx)
static pfm_msg_t *
pfm_get_next_msg(pfm_context_t *ctx)
static void
pfm_reset_msgq(pfm_context_t *ctx)
static void *
pfm_rvmalloc(unsigned long size)
static void
pfm_rvfree(void *mem, unsigned long size)
static pfm_context_t *
pfm_context_alloc(int ctx_flags)
static void
pfm_context_free(pfm_context_t *ctx)
static void
pfm_mask_monitoring(struct task_struct *task)
static void
pfm_restore_monitoring(struct task_struct *task)
static inline void
pfm_save_pmds(unsigned long *pmds, unsigned long mask)
static inline void
pfm_restore_pmds(unsigned long *pmds, unsigned long mask)
static inline void
pfm_copy_pmds(struct task_struct *task, pfm_context_t *ctx)
static inline void
pfm_copy_pmcs(struct task_struct *task, pfm_context_t *ctx)
static inline void
pfm_restore_pmcs(unsigned long *pmcs, unsigned long mask)
static inline int
pfm_uuid_cmp(pfm_uuid_t a, pfm_uuid_t b)
static inline int
pfm_buf_fmt_exit(pfm_buffer_fmt_t *fmt, struct task_struct *task, void *buf, struct pt_regs *regs)
static inline int
pfm_buf_fmt_getsize(pfm_buffer_fmt_t *fmt, struct task_struct *task, unsigned int flags, int cpu, void *arg, unsigned long *size)
static inline int
pfm_buf_fmt_validate(pfm_buffer_fmt_t *fmt, struct task_struct *task, unsigned int flags,
int cpu, void *arg)
static inline int
pfm_buf_fmt_init(pfm_buffer_fmt_t *fmt, struct task_struct *task, void *buf, unsigned int flags,
int cpu, void *arg)
static inline int
pfm_buf_fmt_restart(pfm_buffer_fmt_t *fmt, struct task_struct *task, pfm_ovfl_ctrl_t *ctrl, void *buf, struct pt_regs *regs)
static inline int
pfm_buf_fmt_restart_active(pfm_buffer_fmt_t *fmt, struct task_struct *task, pfm_ovfl_ctrl_t *ctrl, void *buf, struct pt_regs *regs)
static pfm_buffer_fmt_t *
__pfm_find_buffer_fmt(pfm_uuid_t uuid)
static pfm_buffer_fmt_t *
pfm_find_buffer_fmt(pfm_uuid_t uuid)
int
pfm_register_buffer_fmt(pfm_buffer_fmt_t *fmt)
EXPORT_SYMBOL(pfm_register_buffer_fmt);
int
pfm_unregister_buffer_fmt(pfm_uuid_t uuid)
EXPORT_SYMBOL(pfm_unregister_buffer_fmt);
extern void update_pal_halt_status(int);
static int
pfm_reserve_session(struct task_struct *task, int is_syswide, unsigned int cpu)
static int
pfm_unreserve_session(pfm_context_t *ctx, int is_syswide, unsigned int cpu)
static int
pfm_remove_smpl_mapping(struct task_struct *task, void *vaddr, unsigned long size)
static inline void
pfm_exit_smpl_buffer(pfm_buffer_fmt_t *fmt)
static struct vfsmount *pfmfs_mnt __read_mostly;
static int __init
init_pfm_fs(void)
static ssize_t
pfm_read(struct file *filp, char __user *buf, size_t size, loff_t *ppos)
static ssize_t
pfm_write(struct file *file, const char __user *ubuf,
size_t size, loff_t *ppos)
static unsigned int
pfm_poll(struct file *filp, poll_table * wait)
static long
pfm_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static inline int
pfm_do_fasync(int fd, struct file *filp, pfm_context_t *ctx, int on)
static int
pfm_fasync(int fd, struct file *filp, int on)
static void
pfm_syswide_force_stop(void *info)
static void
pfm_syswide_cleanup_other_cpu(pfm_context_t *ctx)
static int
pfm_flush(struct file *filp, fl_owner_t id)
static int
pfm_close(struct inode *inode, struct file *filp)
static int
pfm_no_open(struct inode *irrelevant, struct file *dontcare)
static const struct file_operations pfm_file_ops = ;
static int
pfmfs_delete_dentry(const struct dentry *dentry)
static char *pfmfs_dname(struct dentry *dentry, char *buffer, int buflen)
static const struct dentry_operations pfmfs_dentry_operations = ;
static struct file *
pfm_alloc_file(pfm_context_t *ctx)
static int
pfm_remap_buffer(struct vm_area_struct *vma, unsigned long buf, unsigned long addr, unsigned long size)
static int
pfm_smpl_buffer_alloc(struct task_struct *task, struct file *filp, pfm_context_t *ctx, unsigned long rsize, void **user_vaddr)
static int
pfm_bad_permissions(struct task_struct *task)
static int
pfarg_is_sane(struct task_struct *task, pfarg_context_t *pfx)
static int
pfm_setup_buffer_fmt(struct task_struct *task, struct file *filp, pfm_context_t *ctx, unsigned int ctx_flags,
unsigned int cpu, pfarg_context_t *arg)
static void
pfm_reset_pmu_state(pfm_context_t *ctx)
static int
pfm_ctx_getsize(void *arg, size_t *sz)
static int
pfm_task_incompatible(pfm_context_t *ctx, struct task_struct *task)
static int
pfm_get_task(pfm_context_t *ctx, pid_t pid, struct task_struct **task)
static int
pfm_context_create(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static inline unsigned long
pfm_new_counter_value (pfm_counter_t *reg, int is_long_reset)
static void
pfm_reset_regs_masked(pfm_context_t *ctx, unsigned long *ovfl_regs, int is_long_reset)
static void
pfm_reset_regs(pfm_context_t *ctx, unsigned long *ovfl_regs, int is_long_reset)
static int
pfm_write_pmcs(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_write_pmds(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_read_pmds(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
int
pfm_mod_write_pmcs(struct task_struct *task, void *req, unsigned int nreq, struct pt_regs *regs)
EXPORT_SYMBOL(pfm_mod_write_pmcs);
int
pfm_mod_read_pmds(struct task_struct *task, void *req, unsigned int nreq, struct pt_regs *regs)
EXPORT_SYMBOL(pfm_mod_read_pmds);
int
pfm_use_debug_registers(struct task_struct *task)
int
pfm_release_debug_registers(struct task_struct *task)
static int
pfm_restart(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_debug(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_write_ibr_dbr(int mode, pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_write_ibrs(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_write_dbrs(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
int
pfm_mod_write_ibrs(struct task_struct *task, void *req, unsigned int nreq, struct pt_regs *regs)
EXPORT_SYMBOL(pfm_mod_write_ibrs);
int
pfm_mod_write_dbrs(struct task_struct *task, void *req, unsigned int nreq, struct pt_regs *regs)
EXPORT_SYMBOL(pfm_mod_write_dbrs);
static int
pfm_get_features(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_stop(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_start(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_get_pmc_reset(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static int
pfm_check_task_exist(pfm_context_t *ctx)
static int
pfm_context_load(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
static void pfm_flush_pmds(struct task_struct *, pfm_context_t *ctx);
static int
pfm_context_unload(pfm_context_t *ctx, void *arg, int count, struct pt_regs *regs)
void
pfm_exit_thread(struct task_struct *task)
#define PFM_CMD(name, flags, arg_count, arg_type, getsz)
#define PFM_CMD_S(name, flags)
#define PFM_CMD_PCLRWS	(PFM_CMD_FD|PFM_CMD_ARG_RW|PFM_CMD_STOP)
#define PFM_CMD_PCLRW	(PFM_CMD_FD|PFM_CMD_ARG_RW)
#define PFM_CMD_NONE
static pfm_cmd_desc_t pfm_cmd_tab[]=;
#define PFM_CMD_COUNT	(sizeof(pfm_cmd_tab)/sizeof(pfm_cmd_desc_t))
static int
pfm_check_task_state(pfm_context_t *ctx, int cmd, unsigned long flags)
asmlinkage long
sys_perfmonctl (int fd, int cmd, void __user *arg, int count)
static void
pfm_resume_after_ovfl(pfm_context_t *ctx, unsigned long ovfl_regs, struct pt_regs *regs)
static void
pfm_context_force_terminate(pfm_context_t *ctx, struct pt_regs *regs)
static int pfm_ovfl_notify_user(pfm_context_t *ctx, unsigned long ovfl_pmds);
void
pfm_handle_work(void)
static int
pfm_notify_user(pfm_context_t *ctx, pfm_msg_t *msg)
static int
pfm_ovfl_notify_user(pfm_context_t *ctx, unsigned long ovfl_pmds)
static int
pfm_end_notify_user(pfm_context_t *ctx)
static void pfm_overflow_handler(struct task_struct *task, pfm_context_t *ctx,
unsigned long pmc0, struct pt_regs *regs)
static int
pfm_do_interrupt_handler(void *arg, struct pt_regs *regs)
static irqreturn_t
pfm_interrupt_handler(int irq, void *arg)
#define PFM_PROC_SHOW_HEADER	((void *)(long)nr_cpu_ids+1)
static void *
pfm_proc_start(struct seq_file *m, loff_t *pos)
static void *
pfm_proc_next(struct seq_file *m, void *v, loff_t *pos)
static void
pfm_proc_stop(struct seq_file *m, void *v)
static void
pfm_proc_show_header(struct seq_file *m)
static int
pfm_proc_show(struct seq_file *m, void *v)
const struct seq_operations pfm_seq_ops = ;
static int
pfm_proc_open(struct inode *inode, struct file *file)
void
pfm_syst_wide_update_task(struct task_struct *task, unsigned long info, int is_ctxswin)
static void
pfm_force_cleanup(pfm_context_t *ctx, struct pt_regs *regs)
void
pfm_save_regs(struct task_struct *task)
void
pfm_save_regs(struct task_struct *task)
static void
pfm_lazy_save_regs (struct task_struct *task)
void
pfm_load_regs (struct task_struct *task)
void
pfm_load_regs (struct task_struct *task)
static void
pfm_flush_pmds(struct task_struct *task, pfm_context_t *ctx)
static struct irqaction perfmon_irqaction = ;
static void
pfm_alt_save_pmu_state(void *data)
void
pfm_alt_restore_pmu_state(void *data)
int
pfm_install_alt_pmu_interrupt(pfm_intr_handler_desc_t *hdl)
EXPORT_SYMBOL_GPL(pfm_install_alt_pmu_interrupt);
int
pfm_remove_alt_pmu_interrupt(pfm_intr_handler_desc_t *hdl)
EXPORT_SYMBOL_GPL(pfm_remove_alt_pmu_interrupt);
static int init_pfm_fs(void);
static int __init
pfm_probe_pmu(void)
static const struct file_operations pfm_proc_fops = ;
int __init
pfm_init(void)
__initcall(pfm_init);
void
pfm_init_percpu (void)
void
dump_pmu_state(const char *from)
void
pfm_inherit(struct task_struct *task, struct pt_regs *regs)
asmlinkage long
sys_perfmonctl (int fd, int cmd, void *arg, int count)
