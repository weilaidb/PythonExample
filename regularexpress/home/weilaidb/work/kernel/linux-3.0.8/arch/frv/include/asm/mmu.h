#define _ASM_MMU_H
typedef struct  mm_context_t;
extern int __nongpreldata cxn_pinned;
extern int cxn_pin_by_pid(pid_t pid);
