#define MAX_BASIC_TYPE_BITS	64
static int strtailcmp(const char *s1, const char *s2)
static int line_list__add_line(struct list_head *head, int line)
static int line_list__has_line(struct list_head *head, int line)
static void line_list__init(struct list_head *head)
static void line_list__free(struct list_head *head)
static char *debuginfo_path;
static const Dwfl_Callbacks offline_callbacks = ;
static Dwarf *dwfl_init_offline_dwarf(int fd, Dwfl **dwflp, Dwarf_Addr *bias)
#if _ELFUTILS_PREREQ(0, 148)
static int __linux_kernel_find_elf(Dwfl_Module *mod,
void **userdata,
const char *module_name,
Dwarf_Addr base,
char **file_name, Elf **elfp)
static const Dwfl_Callbacks kernel_callbacks = ;
static Dwarf *dwfl_init_live_kernel_dwarf(Dwarf_Addr addr, Dwfl **dwflp,
Dwarf_Addr *bias)
static Dwarf *dwfl_init_live_kernel_dwarf(Dwarf_Addr addr __used, Dwfl **dwflp,
Dwarf_Addr *bias)
static const char *cu_find_realpath(Dwarf_Die *cu_die, const char *fname)
static const char *cu_get_comp_dir(Dwarf_Die *cu_die)
static int cu_find_lineinfo(Dwarf_Die *cudie, unsigned long addr,
const char **fname, int *lineno)
static bool die_compare_name(Dwarf_Die *dw_die, const char *tname)
static int die_get_call_lineno(Dwarf_Die *in_die)
static Dwarf_Die *die_get_type(Dwarf_Die *vr_die, Dwarf_Die *die_mem)
static Dwarf_Die *__die_get_real_type(Dwarf_Die *vr_die, Dwarf_Die *die_mem)
static Dwarf_Die *die_get_real_type(Dwarf_Die *vr_die, Dwarf_Die *die_mem)
static int die_get_attr_udata(Dwarf_Die *tp_die, unsigned int attr_name,
Dwarf_Word *result)
static bool die_is_signed_type(Dwarf_Die *tp_die)
static int die_get_byte_size(Dwarf_Die *tp_die)
static int die_get_bit_size(Dwarf_Die *tp_die)
static int die_get_bit_offset(Dwarf_Die *tp_die)
static int die_get_data_member_location(Dwarf_Die *mb_die, Dwarf_Word *offs)
enum ;
static Dwarf_Die *die_find_child(Dwarf_Die *rt_die,
int (*callback)(Dwarf_Die *, void *),
void *data, Dwarf_Die *die_mem)
struct __addr_die_search_param ;
static int __die_search_func_cb(Dwarf_Die *fn_die, void *data)
static Dwarf_Die *die_find_real_subprogram(Dwarf_Die *cu_die, Dwarf_Addr addr,
Dwarf_Die *die_mem)
static int __die_find_inline_cb(Dwarf_Die *die_mem, void *data)
static Dwarf_Die *die_find_inlinefunc(Dwarf_Die *sp_die, Dwarf_Addr addr,
Dwarf_Die *die_mem)
typedef int (* line_walk_handler_t) (const char *fname, int lineno,
Dwarf_Addr addr, void *data);
struct __line_walk_param ;
static int __die_walk_funclines_cb(Dwarf_Die *in_die, void *data)
static int __die_walk_funclines(Dwarf_Die *sp_die,
line_walk_handler_t handler, void *data)
static int __die_walk_culines_cb(Dwarf_Die *sp_die, void *data)
static int die_walk_lines(Dwarf_Die *pdie, line_walk_handler_t handler,
void *data)
struct __find_variable_param ;
static int __die_find_variable_cb(Dwarf_Die *die_mem, void *data)
static Dwarf_Die *die_find_variable_at(Dwarf_Die *sp_die, const char *name,
Dwarf_Addr addr, Dwarf_Die *die_mem)
static int __die_find_member_cb(Dwarf_Die *die_mem, void *data)
static Dwarf_Die *die_find_member(Dwarf_Die *st_die, const char *name,
Dwarf_Die *die_mem)
static int die_get_typename(Dwarf_Die *vr_die, char *buf, int len)
static int die_get_varname(Dwarf_Die *vr_die, char *buf, int len)
static struct probe_trace_arg_ref *alloc_trace_arg_ref(long offs)
static int convert_variable_location(Dwarf_Die *vr_die, Dwarf_Addr addr,
Dwarf_Op *fb_ops,
struct probe_trace_arg *tvar)
#define BYTES_TO_BITS(nb)	((nb) * BITS_PER_LONG / sizeof(long))
static int convert_variable_type(Dwarf_Die *vr_die,
struct probe_trace_arg *tvar,
const char *cast)
static int convert_variable_fields(Dwarf_Die *vr_die, const char *varname,
struct perf_probe_arg_field *field,
struct probe_trace_arg_ref **ref_ptr,
Dwarf_Die *die_mem)
static int convert_variable(Dwarf_Die *vr_die, struct probe_finder *pf)
static int find_variable(Dwarf_Die *sp_die, struct probe_finder *pf)
static int convert_to_trace_point(Dwarf_Die *sp_die, Dwarf_Addr paddr,
bool retprobe, struct probe_trace_point *tp)
static int call_probe_finder(Dwarf_Die *sp_die, struct probe_finder *pf)
static int probe_point_line_walker(const char *fname, int lineno,
Dwarf_Addr addr, void *data)
static int find_probe_point_by_line(struct probe_finder *pf)
static int find_lazy_match_lines(struct list_head *head,
const char *fname, const char *pat)
static int probe_point_lazy_walker(const char *fname, int lineno,
Dwarf_Addr addr, void *data)
static int find_probe_point_lazy(Dwarf_Die *sp_die, struct probe_finder *pf)
struct dwarf_callback_param ;
static int probe_point_inline_cb(Dwarf_Die *in_die, void *data)
static int probe_point_search_cb(Dwarf_Die *sp_die, void *data)
static int find_probe_point_by_func(struct probe_finder *pf)
struct pubname_callback_param ;
static int pubname_search_cb(Dwarf *dbg, Dwarf_Global *gl, void *data)
static int find_probes(int fd, struct probe_finder *pf)
static int add_probe_trace_event(Dwarf_Die *sp_die, struct probe_finder *pf)
int find_probe_trace_events(int fd, struct perf_probe_event *pev,
struct probe_trace_event **tevs, int max_tevs)
#define MAX_VAR_LEN 64
static int collect_variables_cb(Dwarf_Die *die_mem, void *data)
static int add_available_vars(Dwarf_Die *sp_die, struct probe_finder *pf)
int find_available_vars_at(int fd, struct perf_probe_event *pev,
struct variable_list **vls, int max_vls,
bool externs)
int find_perf_probe_point(unsigned long addr, struct perf_probe_point *ppt)
static int line_range_add_line(const char *src, unsigned int lineno,
struct line_range *lr)
static int line_range_walk_cb(const char *fname, int lineno,
Dwarf_Addr addr __used,
void *data)
static int find_line_range_by_line(Dwarf_Die *sp_die, struct line_finder *lf)
static int line_range_inline_cb(Dwarf_Die *in_die, void *data)
static int line_range_search_cb(Dwarf_Die *sp_die, void *data)
static int find_line_range_by_func(struct line_finder *lf)
int find_line_range(int fd, struct line_range *lr)
