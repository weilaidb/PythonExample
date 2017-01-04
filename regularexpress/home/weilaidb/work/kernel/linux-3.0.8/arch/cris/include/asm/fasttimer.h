typedef void fast_timer_function_type(unsigned long);
struct fasttime_t ;
struct fast_timer;
extern struct fast_timer *fast_timer_list;
void start_one_shot_timer(struct fast_timer *t,
fast_timer_function_type *function,
unsigned long data,
unsigned long delay_us,
const char *name);
int del_fast_timer(struct fast_timer * t);
void schedule_usleep(unsigned long us);
int fast_timer_init(void);
