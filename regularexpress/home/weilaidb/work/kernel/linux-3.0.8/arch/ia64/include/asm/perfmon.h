#define _ASM_IA64_PERFMON_H
#define PFM_WRITE_PMCS		0x01
#define PFM_WRITE_PMDS		0x02
#define PFM_READ_PMDS		0x03
#define PFM_STOP		0x04
#define PFM_START		0x05
#define PFM_ENABLE		0x06
#define PFM_DISABLE		0x07
#define PFM_CREATE_CONTEXT	0x08
#define PFM_DESTROY_CONTEXT	0x09
#define PFM_RESTART		0x0a
#define PFM_PROTECT_CONTEXT	0x0b
#define PFM_GET_FEATURES	0x0c
#define PFM_DEBUG		0x0d
#define PFM_UNPROTECT_CONTEXT	0x0e
#define PFM_GET_PMC_RESET_VAL	0x0f
#define PFM_LOAD_CONTEXT	0x10
#define PFM_UNLOAD_CONTEXT	0x11
#define PFM_WRITE_IBRS		0x20
#define PFM_WRITE_DBRS		0x21
#define PFM_FL_NOTIFY_BLOCK    	 0x01
#define PFM_FL_SYSTEM_WIDE	 0x02
#define PFM_FL_OVFL_NO_MSG	 0x80
#define PFM_SETFL_EXCL_IDLE      0x01
#define PFM_REGFL_OVFL_NOTIFY	0x1
#define PFM_REGFL_RANDOM	0x2
#define PFM_REG_RETFL_NOTAVAIL	(1UL<<31)
#define PFM_REG_RETFL_EINVAL	(1UL<<30)
#define PFM_REG_RETFL_MASK	(PFM_REG_RETFL_NOTAVAIL|PFM_REG_RETFL_EINVAL)
#define PFM_REG_HAS_ERROR(flag)	(((flag) & PFM_REG_RETFL_MASK) != 0)
typedef unsigned char pfm_uuid_t[16];
typedef struct  pfarg_context_t;
typedef struct  pfarg_reg_t;
typedef struct  pfarg_dbreg_t;
typedef struct  pfarg_features_t;
typedef struct  pfarg_load_t;
typedef struct  pfm_ovfl_msg_t;
typedef struct  pfm_end_msg_t;
typedef struct  pfm_gen_msg_t;
#define PFM_MSG_OVFL	1
#define PFM_MSG_END	2
typedef union  pfm_msg_t;
#define PFM_VERSION_MAJ		 2U
#define PFM_VERSION_MIN		 0U
#define PFM_VERSION		 (((PFM_VERSION_MAJ&0xffff)<<16)|(PFM_VERSION_MIN & 0xffff))
#define PFM_VERSION_MAJOR(x)	 (((x)>>16) & 0xffff)
#define PFM_VERSION_MINOR(x)	 ((x) & 0xffff)
#define PMU_FIRST_COUNTER	4
#define PMU_MAX_PMCS		256
#define PMU_MAX_PMDS		256
extern long perfmonctl(int fd, int cmd, void *arg, int narg);
typedef struct  pfm_intr_handler_desc_t;
extern void pfm_save_regs (struct task_struct *);
extern void pfm_load_regs (struct task_struct *);
extern void pfm_exit_thread(struct task_struct *);
extern int  pfm_use_debug_registers(struct task_struct *);
extern int  pfm_release_debug_registers(struct task_struct *);
extern void pfm_syst_wide_update_task(struct task_struct *, unsigned long info, int is_ctxswin);
extern void pfm_inherit(struct task_struct *task, struct pt_regs *regs);
extern void pfm_init_percpu(void);
extern void pfm_handle_work(void);
extern int  pfm_install_alt_pmu_interrupt(pfm_intr_handler_desc_t *h);
extern int  pfm_remove_alt_pmu_interrupt(pfm_intr_handler_desc_t *h);
#define PFM_PMD_SHORT_RESET	0
#define PFM_PMD_LONG_RESET	1
typedef union  pfm_ovfl_ctrl_t;
typedef struct  pfm_ovfl_arg_t;
typedef struct  pfm_buffer_fmt_t;
extern int pfm_register_buffer_fmt(pfm_buffer_fmt_t *fmt);
extern int pfm_unregister_buffer_fmt(pfm_uuid_t uuid);
extern int pfm_mod_read_pmds(struct task_struct *, void *req, unsigned int nreq, struct pt_regs *regs);
extern int pfm_mod_write_pmcs(struct task_struct *, void *req, unsigned int nreq, struct pt_regs *regs);
extern int pfm_mod_write_ibrs(struct task_struct *task, void *req, unsigned int nreq, struct pt_regs *regs);
extern int pfm_mod_write_dbrs(struct task_struct *task, void *req, unsigned int nreq, struct pt_regs *regs);
#define PFM_CPUINFO_SYST_WIDE	0x1
#define PFM_CPUINFO_DCR_PP	0x2
#define PFM_CPUINFO_EXCL_IDLE	0x4
typedef struct  pfm_sysctl_t;
extern pfm_sysctl_t pfm_sysctl;
