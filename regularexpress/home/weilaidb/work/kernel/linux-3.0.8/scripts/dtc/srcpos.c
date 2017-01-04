#define _GNU_SOURCE
static char *dirname(const char *path)
struct srcfile_state *current_srcfile;
#define MAX_SRCFILE_DEPTH     (100)
static int srcfile_depth;
FILE *srcfile_relative_open(const char *fname, char **fullnamep)
void srcfile_push(const char *fname)
int srcfile_pop(void)
struct srcpos srcpos_empty = ;
#define TAB_SIZE      8
void srcpos_update(struct srcpos *pos, const char *text, int len)
struct srcpos *
srcpos_copy(struct srcpos *pos)
void
srcpos_dump(struct srcpos *pos)
char *
srcpos_string(struct srcpos *pos)
void
srcpos_verror(struct srcpos *pos, char const *fmt, va_list va)
void
srcpos_error(struct srcpos *pos, char const *fmt, ...)
void
srcpos_warn(struct srcpos *pos, char const *fmt, ...)
