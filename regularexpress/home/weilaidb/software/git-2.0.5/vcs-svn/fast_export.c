#define MAX_GITSVN_LINE_LEN 4096
static uint32_t first_commit_done;
static struct line_buffer postimage = LINE_BUFFER_INIT;
static struct line_buffer report_buffer = LINE_BUFFER_INIT;
static int init_postimage(void)
void fast_export_init(int fd)
void fast_export_deinit(void)
void fast_export_delete(const char *path)
static void fast_export_truncate(const char *path, uint32_t mode)
void fast_export_modify(const char *path, uint32_t mode, const char *dataref)
void fast_export_begin_note(uint32_t revision, const char *author,
const char *log, unsigned long timestamp, const char *note_ref)
void fast_export_note(const char *committish, const char *dataref)
static char gitsvnline[MAX_GITSVN_LINE_LEN];
void fast_export_begin_commit(uint32_t revision, const char *author,
const struct strbuf *log,
const char *uuid, const char *url,
unsigned long timestamp, const char *local_ref)
void fast_export_end_commit(uint32_t revision)
static void ls_from_rev(uint32_t rev, const char *path)
static void ls_from_active_commit(const char *path)
static const char *get_response_line(void)
static void die_short_read(struct line_buffer *input)
static int parse_cat_response_line(const char *header, off_t *len)
static void check_preimage_overflow(off_t a, off_t b)
static long apply_delta(off_t len, struct line_buffer *input,
const char *old_data, uint32_t old_mode)
void fast_export_buf_to_data(const struct strbuf *data)
void fast_export_data(uint32_t mode, off_t len, struct line_buffer *input)
static int parse_ls_response(const char *response, uint32_t *mode,
struct strbuf *dataref)
int fast_export_ls_rev(uint32_t rev, const char *path,
uint32_t *mode, struct strbuf *dataref)
int fast_export_ls(const char *path, uint32_t *mode, struct strbuf *dataref)
void fast_export_blob_delta(uint32_t mode,
uint32_t old_mode, const char *old_data,
off_t len, struct line_buffer *input)
