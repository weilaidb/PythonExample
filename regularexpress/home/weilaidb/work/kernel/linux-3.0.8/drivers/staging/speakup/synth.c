#define MAXSYNTHS       16
static struct spk_synth *synths[MAXSYNTHS];
struct spk_synth *synth;
char pitch_buff[32] = "";
static int module_status;
int quiet_boot;
struct speakup_info_t speakup_info = ;
EXPORT_SYMBOL_GPL(speakup_info);
static int do_synth_init(struct spk_synth *in_synth);
int serial_synth_probe(struct spk_synth *synth)
EXPORT_SYMBOL_GPL(serial_synth_probe);
void spk_do_catch_up(struct spk_synth *synth)
EXPORT_SYMBOL_GPL(spk_do_catch_up);
const char *spk_synth_immediate(struct spk_synth *synth, const char *buff)
EXPORT_SYMBOL_GPL(spk_synth_immediate);
void spk_synth_flush(struct spk_synth *synth)
EXPORT_SYMBOL_GPL(spk_synth_flush);
int spk_synth_is_alive_nop(struct spk_synth *synth)
EXPORT_SYMBOL_GPL(spk_synth_is_alive_nop);
int spk_synth_is_alive_restart(struct spk_synth *synth)
EXPORT_SYMBOL_GPL(spk_synth_is_alive_restart);
static void thread_wake_up(u_long data)
static DEFINE_TIMER(thread_timer, thread_wake_up, 0, 0);
void synth_start(void)
void do_flush(void)
void synth_write(const char *buf, size_t count)
void synth_printf(const char *fmt, ...)
EXPORT_SYMBOL_GPL(synth_printf);
static int index_count;
static int sentence_count;
void reset_index_count(int sc)
int synth_supports_indexing(void)
void synth_insert_next_index(int sent_num)
void get_index_count(int *linecount, int *sentcount)
static struct resource synth_res;
int synth_request_region(unsigned long start, unsigned long n)
EXPORT_SYMBOL_GPL(synth_request_region);
int synth_release_region(unsigned long start, unsigned long n)
EXPORT_SYMBOL_GPL(synth_release_region);
struct var_t synth_time_vars[] = ;
int synth_init(char *synth_name)
static int do_synth_init(struct spk_synth *in_synth)
void synth_release(void)
int synth_add(struct spk_synth *in_synth)
EXPORT_SYMBOL_GPL(synth_add);
void synth_remove(struct spk_synth *in_synth)
EXPORT_SYMBOL_GPL(synth_remove);
short punc_masks[] = ;
