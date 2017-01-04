#define _ASM_IA64_UNWIND_H
struct task_struct;
struct switch_stack;
enum unw_application_register ;
struct unw_stack ;
#define UNW_FLAG_INTERRUPT_FRAME	(1UL << 0)
struct unw_frame_info ;
struct unw_table_entry ;
extern void unw_init (void);
extern void *unw_add_unwind_table (const char *name, unsigned long segment_base, unsigned long gp,
const void *table_start, const void *table_end);
extern void unw_remove_unwind_table (void *handle);
extern void unw_init_from_blocked_task (struct unw_frame_info *info, struct task_struct *t);
extern void unw_init_frame_info (struct unw_frame_info *info, struct task_struct *t,
struct switch_stack *sw);
extern void unw_init_running (void (*callback)(struct unw_frame_info *info, void *arg), void *arg);
extern int unw_unwind (struct unw_frame_info *info);
extern int unw_unwind_to_user (struct unw_frame_info *info);
#define unw_is_intr_frame(info)	(((info)->flags & UNW_FLAG_INTERRUPT_FRAME) != 0)
static inline int
unw_get_ip (struct unw_frame_info *info, unsigned long *valp)
static inline int
unw_get_sp (struct unw_frame_info *info, unsigned long *valp)
static inline int
unw_get_psp (struct unw_frame_info *info, unsigned long *valp)
static inline int
unw_get_bsp (struct unw_frame_info *info, unsigned long *valp)
static inline int
unw_get_cfm (struct unw_frame_info *info, unsigned long *valp)
static inline int
unw_set_cfm (struct unw_frame_info *info, unsigned long val)
static inline int
unw_get_rp (struct unw_frame_info *info, unsigned long *val)
extern int unw_access_gr (struct unw_frame_info *, int, unsigned long *, char *, int);
extern int unw_access_br (struct unw_frame_info *, int, unsigned long *, int);
extern int unw_access_fr (struct unw_frame_info *, int, struct ia64_fpreg *, int);
extern int unw_access_ar (struct unw_frame_info *, int, unsigned long *, int);
extern int unw_access_pr (struct unw_frame_info *, unsigned long *, int);
static inline int
unw_set_gr (struct unw_frame_info *i, int n, unsigned long v, char nat)
static inline int
unw_set_br (struct unw_frame_info *i, int n, unsigned long v)
static inline int
unw_set_fr (struct unw_frame_info *i, int n, struct ia64_fpreg v)
static inline int
unw_set_ar (struct unw_frame_info *i, int n, unsigned long v)
static inline int
unw_set_pr (struct unw_frame_info *i, unsigned long v)
#define unw_get_gr(i,n,v,nat)	unw_access_gr(i,n,v,nat,0)
#define unw_get_br(i,n,v)	unw_access_br(i,n,v,0)
#define unw_get_fr(i,n,v)	unw_access_fr(i,n,v,0)
#define unw_get_ar(i,n,v)	unw_access_ar(i,n,v,0)
#define unw_get_pr(i,v)		unw_access_pr(i,v,0)
