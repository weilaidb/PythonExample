#define __MICROBLAZE_UNWIND_H
struct stack_trace;
struct trap_handler_info ;
extern struct trap_handler_info microblaze_trap_handlers;
extern const char _hw_exception_handler;
extern const char ex_handler_unhandled;
void microblaze_unwind(struct task_struct *task, struct stack_trace *trace);
