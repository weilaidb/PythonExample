typedef int (*pickaxe_fn)(mmfile_t *one, mmfile_t *two,
struct diff_options *o,
regex_t *regexp, kwset_t kws);
struct diffgrep_cb ;
static void diffgrep_consume(void *priv, char *line, unsigned long len)
static int diff_grep(mmfile_t *one, mmfile_t *two,
struct diff_options *o,
regex_t *regexp, kwset_t kws)
static unsigned int contains(mmfile_t *mf, regex_t *regexp, kwset_t kws)
static int has_changes(mmfile_t *one, mmfile_t *two,
struct diff_options *o,
regex_t *regexp, kwset_t kws)
static int pickaxe_match(struct diff_filepair *p, struct diff_options *o,
regex_t *regexp, kwset_t kws, pickaxe_fn fn)
static void pickaxe(struct diff_queue_struct *q, struct diff_options *o,
regex_t *regexp, kwset_t kws, pickaxe_fn fn)
void diffcore_pickaxe(struct diff_options *o)
