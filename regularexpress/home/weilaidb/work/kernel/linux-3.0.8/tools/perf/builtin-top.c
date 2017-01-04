static struct perf_top top = ;
static bool			system_wide			=  false;
static bool			use_tui, use_stdio;
static int			default_interval		=      0;
static bool			kptr_restrict_warned;
static bool			vmlinux_warned;
static bool			inherit				=  false;
static int			realtime_prio			=      0;
static bool			group				=  false;
static unsigned int		page_size;
static unsigned int		mmap_pages			=    128;
static bool			dump_symtab                     =  false;
static struct winsize		winsize;
static const char		*sym_filter			=   NULL;
struct sym_entry		*sym_filter_entry_sched		=   NULL;
static int			sym_pcnt_filter			=      5;
void get_term_dimensions(struct winsize *ws)
static void update_print_entries(struct winsize *ws)
static void sig_winch_handler(int sig __used)
static int parse_source(struct sym_entry *syme)
static void __zero_source_counters(struct sym_entry *syme)
static void record_precise_ip(struct sym_entry *syme, int counter, u64 ip)
static void show_details(struct sym_entry *syme)
static const char		CONSOLE_CLEAR[] = "[H[2J";
static void __list_insert_active_sym(struct sym_entry *syme)
static void print_sym_table(struct perf_session *session)
static void prompt_integer(int *target, const char *msg)
static void prompt_percent(int *target, const char *msg)
static void prompt_symbol(struct sym_entry **target, const char *msg)
static void print_mapped_keys(void)
static int key_mapped(int c)
static void handle_keypress(struct perf_session *session, int c)
static void *display_thread_tui(void *arg __used)
static void *display_thread(void *arg __used)
static const char *skip_symbols[] = ;
static int symbol_filter(struct map *map, struct symbol *sym)
static void perf_event__process_sample(const union perf_event *event,
struct perf_sample *sample,
struct perf_session *session)
static void perf_session__mmap_read_idx(struct perf_session *self, int idx)
static void perf_session__mmap_read(struct perf_session *self)
static void start_counters(struct perf_evlist *evlist)
static int __cmd_top(void)
static const char * const top_usage[] = ;
static const struct option options[] = ;
int cmd_top(int argc, const char **argv, const char *prefix __used)
