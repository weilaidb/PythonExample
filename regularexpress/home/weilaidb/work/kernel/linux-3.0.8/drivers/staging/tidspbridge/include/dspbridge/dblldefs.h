#define DBLLDEFS_
#define DBLL_NOLOAD   0x0
#define DBLL_SYMB     0x1
#define DBLL_CODE     0x2
#define DBLL_DATA     0x4
#define DBLL_DYNAMIC  0x8
#define DBLL_BSS      0x20
#define DBLL_MAXPATHLENGTH       255
struct dbll_tar_obj;
typedef s32 dbll_flags;
struct dbll_library_obj;
struct dbll_sect_info ;
struct dbll_sym_val ;
typedef s32(*dbll_alloc_fxn) (void *hdl, s32 space, u32 size, u32 align,
u32 *dsp_address, s32 seg_id, s32 req,
bool reserved);
typedef s32(*dbll_f_close_fxn) (void *);
typedef bool(*dbll_free_fxn) (void *hdl, u32 addr, s32 space, u32 size,
bool reserved);
typedef void *(*dbll_f_open_fxn) (const char *, const char *);
typedef int(*dbll_log_write_fxn) (void *handle,
struct dbll_sect_info *sect, u32 addr,
u32 bytes);
typedef s32(*dbll_read_fxn) (void *, size_t, size_t, void *);
typedef s32(*dbll_seek_fxn) (void *, long, int);
typedef bool(*dbll_sym_lookup) (void *handle, void *parg, void *rmm_handle,
const char *name, struct dbll_sym_val ** sym);
typedef s32(*dbll_tell_fxn) (void *);
typedef s32(*dbll_write_fxn) (void *hdl, u32 dsp_address, void *buf,
u32 n, s32 mtype);
struct dbll_attrs ;
typedef void (*dbll_close_fxn) (struct dbll_library_obj *library);
typedef int(*dbll_create_fxn) (struct dbll_tar_obj **target_obj,
struct dbll_attrs *attrs);
typedef void (*dbll_delete_fxn) (struct dbll_tar_obj *target);
typedef void (*dbll_exit_fxn) (void);
typedef bool(*dbll_get_addr_fxn) (struct dbll_library_obj *lib, char *name,
struct dbll_sym_val **sym_val);
typedef void (*dbll_get_attrs_fxn) (struct dbll_tar_obj *target,
struct dbll_attrs *attrs);
typedef bool(*dbll_get_c_addr_fxn) (struct dbll_library_obj *lib, char *name,
struct dbll_sym_val **sym_val);
typedef int(*dbll_get_sect_fxn) (struct dbll_library_obj *lib,
char *name, u32 * addr, u32 * size);
typedef bool(*dbll_init_fxn) (void);
typedef int(*dbll_load_fxn) (struct dbll_library_obj *lib,
dbll_flags flags,
struct dbll_attrs *attrs, u32 *entry);
typedef int(*dbll_open_fxn) (struct dbll_tar_obj *target, char *file,
dbll_flags flags,
struct dbll_library_obj **lib_obj);
typedef int(*dbll_read_sect_fxn) (struct dbll_library_obj *lib,
char *name, char *content,
u32 cont_size);
typedef void (*dbll_unload_fxn) (struct dbll_library_obj *library,
struct dbll_attrs *attrs);
struct dbll_fxns ;
