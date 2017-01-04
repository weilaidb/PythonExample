#define DBLL_
extern bool symbols_reloaded;
extern void dbll_close(struct dbll_library_obj *zl_lib);
extern int dbll_create(struct dbll_tar_obj **target_obj,
struct dbll_attrs *pattrs);
extern void dbll_delete(struct dbll_tar_obj *target);
extern void dbll_exit(void);
extern bool dbll_get_addr(struct dbll_library_obj *zl_lib, char *name,
struct dbll_sym_val **sym_val);
extern void dbll_get_attrs(struct dbll_tar_obj *target,
struct dbll_attrs *pattrs);
extern bool dbll_get_c_addr(struct dbll_library_obj *zl_lib, char *name,
struct dbll_sym_val **sym_val);
extern int dbll_get_sect(struct dbll_library_obj *lib, char *name,
u32 *paddr, u32 *psize);
extern bool dbll_init(void);
extern int dbll_load(struct dbll_library_obj *lib,
dbll_flags flags,
struct dbll_attrs *attrs, u32 * entry);
extern int dbll_open(struct dbll_tar_obj *target, char *file,
dbll_flags flags,
struct dbll_library_obj **lib_obj);
extern int dbll_read_sect(struct dbll_library_obj *lib,
char *name, char *buf, u32 size);
extern void dbll_unload(struct dbll_library_obj *lib, struct dbll_attrs *attrs);
bool dbll_find_dsp_symbol(struct dbll_library_obj *zl_lib, u32 address,
u32 offset_range, u32 *sym_addr_output, char *name_output);
