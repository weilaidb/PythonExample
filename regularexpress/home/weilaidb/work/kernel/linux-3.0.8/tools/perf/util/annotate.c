int symbol__annotate_init(struct map *map __used, struct symbol *sym)
int symbol__alloc_hist(struct symbol *sym, int nevents)
void symbol__annotate_zero_histograms(struct symbol *sym)
int symbol__inc_addr_samples(struct symbol *sym, struct map *map,
int evidx, u64 addr)
static struct objdump_line *objdump_line__new(s64 offset, char *line, size_t privsize)
void objdump_line__free(struct objdump_line *self)
static void objdump__add_line(struct list_head *head, struct objdump_line *line)
struct objdump_line *objdump__get_next_ip_line(struct list_head *head,
struct objdump_line *pos)
static int objdump_line__print(struct objdump_line *oline, struct symbol *sym,
int evidx, u64 len, int min_pcnt,
int printed, int max_lines,
struct objdump_line *queue)
static int symbol__parse_objdump_line(struct symbol *sym, struct map *map,
FILE *file, size_t privsize)
int symbol__annotate(struct symbol *sym, struct map *map, size_t privsize)
static void insert_source_line(struct rb_root *root, struct source_line *src_line)
static void symbol__free_source_line(struct symbol *sym, int len)
static int symbol__get_source_line(struct symbol *sym, struct map *map,
int evidx, struct rb_root *root, int len,
const char *filename)
static void print_summary(struct rb_root *root, const char *filename)
static void symbol__annotate_hits(struct symbol *sym, int evidx)
int symbol__annotate_printf(struct symbol *sym, struct map *map, int evidx,
bool full_paths, int min_pcnt, int max_lines,
int context)
void symbol__annotate_zero_histogram(struct symbol *sym, int evidx)
void symbol__annotate_decay_histogram(struct symbol *sym, int evidx)
void objdump_line_list__purge(struct list_head *head)
int symbol__tty_annotate(struct symbol *sym, struct map *map, int evidx,
bool print_lines, bool full_paths, int min_pcnt,
int max_lines)
