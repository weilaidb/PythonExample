static void ui__error_window(const char *fmt, ...)
struct annotate_browser ;
struct objdump_line_rb_node ;
static inline
struct objdump_line_rb_node *objdump_line__rb(struct objdump_line *self)
static void annotate_browser__write(struct ui_browser *self, void *entry, int row)
static double objdump_line__calc_percent(struct objdump_line *self,
struct symbol *sym, int evidx)
static void objdump__insert_line(struct rb_root *self,
struct objdump_line_rb_node *line)
static void annotate_browser__set_top(struct annotate_browser *self,
struct rb_node *nd)
static void annotate_browser__calc_percent(struct annotate_browser *browser,
int evidx)
static int annotate_browser__run(struct annotate_browser *self, int evidx,
int refresh)
int hist_entry__tui_annotate(struct hist_entry *he, int evidx)
int symbol__tui_annotate(struct symbol *sym, struct map *map, int evidx,
int refresh)
