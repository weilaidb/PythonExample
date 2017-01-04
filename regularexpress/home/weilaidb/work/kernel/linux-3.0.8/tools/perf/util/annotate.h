#define __PERF_ANNOTATE_H
struct objdump_line ;
void objdump_line__free(struct objdump_line *self);
struct objdump_line *objdump__get_next_ip_line(struct list_head *head,
struct objdump_line *pos);
struct sym_hist ;
struct source_line ;
struct annotated_source ;
struct annotation ;
struct sannotation ;
static inline struct sym_hist *annotation__histogram(struct annotation *notes, int idx)
static inline struct annotation *symbol__annotation(struct symbol *sym)
int symbol__inc_addr_samples(struct symbol *sym, struct map *map,
int evidx, u64 addr);
int symbol__alloc_hist(struct symbol *sym, int nevents);
void symbol__annotate_zero_histograms(struct symbol *sym);
int symbol__annotate(struct symbol *sym, struct map *map, size_t privsize);
int symbol__annotate_init(struct map *map __used, struct symbol *sym);
int symbol__annotate_printf(struct symbol *sym, struct map *map, int evidx,
bool full_paths, int min_pcnt, int max_lines,
int context);
void symbol__annotate_zero_histogram(struct symbol *sym, int evidx);
void symbol__annotate_decay_histogram(struct symbol *sym, int evidx);
void objdump_line_list__purge(struct list_head *head);
int symbol__tty_annotate(struct symbol *sym, struct map *map, int evidx,
bool print_lines, bool full_paths, int min_pcnt,
int max_lines);
static inline int symbol__tui_annotate(struct symbol *sym __used,
struct map *map __used,
int evidx __used, int refresh __used)
int symbol__tui_annotate(struct symbol *sym, struct map *map, int evidx,
int refresh);
