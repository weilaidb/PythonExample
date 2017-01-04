#define QUOTE_NONE 0
#define QUOTE_SHELL 1
#define QUOTE_PERL 2
#define QUOTE_PYTHON 4
#define QUOTE_TCL 8
typedef enum  cmp_type;
struct atom_value ;
struct ref_sort ;
struct refinfo ;
static struct  valid_atom[] = ;
static const char **used_atom;
static cmp_type *used_atom_type;
static int used_atom_cnt, need_tagged, need_symref;
static int need_color_reset_at_eol;
static int parse_atom(const char *atom, const char *ep)
static const char *find_next(const char *cp)
static int verify_format(const char *format)
static void *get_obj(const unsigned char *sha1, struct object **obj, unsigned long *sz, int *eaten)
static int grab_objectname(const char *name, const unsigned char *sha1,
struct atom_value *v)
static void grab_common_values(struct atom_value *val, int deref, struct object *obj, void *buf, unsigned long sz)
static void grab_tag_values(struct atom_value *val, int deref, struct object *obj, void *buf, unsigned long sz)
static int num_parents(struct commit *commit)
static void grab_commit_values(struct atom_value *val, int deref, struct object *obj, void *buf, unsigned long sz)
static const char *find_wholine(const char *who, int wholen, const char *buf, unsigned long sz)
static const char *copy_line(const char *buf)
static const char *copy_name(const char *buf)
static const char *copy_email(const char *buf)
static char *copy_subject(const char *buf, unsigned long len)
static void grab_date(const char *buf, struct atom_value *v, const char *atomname)
static void grab_person(const char *who, struct atom_value *val, int deref, struct object *obj, void *buf, unsigned long sz)
static void find_subpos(const char *buf, unsigned long sz,
const char **sub, unsigned long *sublen,
const char **body, unsigned long *bodylen,
unsigned long *nonsiglen,
const char **sig, unsigned long *siglen)
static void grab_sub_body_contents(struct atom_value *val, int deref, struct object *obj, void *buf, unsigned long sz)
static void fill_missing_values(struct atom_value *val)
static void grab_values(struct atom_value *val, int deref, struct object *obj, void *buf, unsigned long sz)
static inline char *copy_advance(char *dst, const char *src)
static void populate_value(struct refinfo *ref)
static void get_value(struct refinfo *ref, int atom, struct atom_value **v)
struct grab_ref_cbdata ;
static int grab_single_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static int cmp_ref_sort(struct ref_sort *s, struct refinfo *a, struct refinfo *b)
static struct ref_sort *ref_sort;
static int compare_refs(const void *a_, const void *b_)
static void sort_refs(struct ref_sort *sort, struct refinfo **refs, int num_refs)
static void print_value(struct atom_value *v, int quote_style)
static int hex1(char ch)
static int hex2(const char *cp)
static void emit(const char *cp, const char *ep)
static void show_ref(struct refinfo *info, const char *format, int quote_style)
static struct ref_sort *default_sort(void)
static int opt_parse_sort(const struct option *opt, const char *arg, int unset)
static char const * const for_each_ref_usage[] = ;
int cmd_for_each_ref(int argc, const char **argv, const char *prefix)
