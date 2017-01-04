#define _SRCPOS_H_
struct srcfile_state ;
extern struct srcfile_state *current_srcfile;
FILE *srcfile_relative_open(const char *fname, char **fullnamep);
void srcfile_push(const char *fname);
int srcfile_pop(void);
struct srcpos ;
#define YYLTYPE struct srcpos
#define YYLLOC_DEFAULT(Current, Rhs, N)						\
do  while (0)
extern struct srcpos srcpos_empty;
extern void srcpos_update(struct srcpos *pos, const char *text, int len);
extern struct srcpos *srcpos_copy(struct srcpos *pos);
extern char *srcpos_string(struct srcpos *pos);
extern void srcpos_dump(struct srcpos *pos);
extern void srcpos_verror(struct srcpos *pos, char const *, va_list va)
__attribute__((format(printf, 2, 0)));
extern void srcpos_error(struct srcpos *pos, char const *, ...)
__attribute__((format(printf, 2, 3)));
extern void srcpos_warn(struct srcpos *pos, char const *, ...)
__attribute__((format(printf, 2, 3)));
