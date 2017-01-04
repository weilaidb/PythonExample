struct perf_top_browser ;
static void perf_top_browser__write(struct ui_browser *browser, void *entry, int row)
static void perf_top_browser__update_rb_tree(struct perf_top_browser *browser)
static void perf_top_browser__annotate(struct perf_top_browser *browser)
static int perf_top_browser__run(struct perf_top_browser *browser)
int perf_top__tui_browser(struct perf_top *top)
