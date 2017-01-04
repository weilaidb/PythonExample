#define _UNWIND_H_
struct unwind_table_entry ;
struct unwind_table ;
struct unwind_frame_info ;
struct unwind_table *
unwind_table_add(const char *name, unsigned long base_addr,
unsigned long gp, void *start, void *end);
void
unwind_table_remove(struct unwind_table *table);
void unwind_frame_init(struct unwind_frame_info *info, struct task_struct *t,
struct pt_regs *regs);
void unwind_frame_init_from_blocked_task(struct unwind_frame_info *info, struct task_struct *t);
void unwind_frame_init_running(struct unwind_frame_info *info, struct pt_regs *regs);
int unwind_once(struct unwind_frame_info *info);
int unwind_to_user(struct unwind_frame_info *info);
int unwind_init(void);
