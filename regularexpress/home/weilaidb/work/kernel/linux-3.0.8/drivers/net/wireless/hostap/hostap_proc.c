#define PROC_LIMIT (PAGE_SIZE - 80)
static int prism2_debug_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int prism2_stats_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int prism2_wds_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int prism2_bss_list_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int prism2_crypt_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int prism2_pda_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int prism2_aux_dump_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int prism2_io_debug_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int prism2_scan_results_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
void hostap_init_proc(local_info_t *local)
void hostap_remove_proc(local_info_t *local)
EXPORT_SYMBOL(hostap_init_proc);
EXPORT_SYMBOL(hostap_remove_proc);
