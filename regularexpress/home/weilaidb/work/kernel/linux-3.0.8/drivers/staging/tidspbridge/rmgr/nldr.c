#define DYNMEMSECT  ".dspbridge_mem"
#define DEPLIBSECT  ".dspbridge_deplibs"
#define MAXDEPTH	    5
#define MAXLIBS	 5
#define MAXMEMSEGS      32
#define MAXSEGID	3
#define MEMINTERNALID   32
#define MEMEXTERNALID   33
#define NULLID	  63
#define FLAGBIT	 7
#define SEGMASK	 0x3f
#define CREATEBIT	0
#define DELETEBIT	8
#define EXECUTEBIT      16
#define DYNM_CODE	0x2
#define DYNM_DATA	0x4
#define DYNM_CODEDATA   (DYNM_CODE | DYNM_DATA)
#define DYNM_INTERNAL   0x8
#define DYNM_EXTERNAL   0x10
#define CREATEDATAFLAGBIT   0
#define CREATECODEFLAGBIT   1
#define EXECUTEDATAFLAGBIT  2
#define EXECUTECODEFLAGBIT  3
#define DELETEDATAFLAGBIT   4
#define DELETECODEFLAGBIT   5
#define MAXFLAGS	    6
#define PCREATE	 "create"
#define PDELETE	 "delete"
#define PEXECUTE	"execute"
static inline bool is_equal_uuid(struct dsp_uuid *uuid1,
struct dsp_uuid *uuid2)
struct mem_seg_info ;
struct lib_node ;
struct ovly_sect ;
struct ovly_node ;
struct nldr_object ;
struct nldr_nodeobject ;
static struct dbll_fxns ldr_fxns = ;
static u32 refs;
static int add_ovly_info(void *handle, struct dbll_sect_info *sect_info,
u32 addr, u32 bytes);
static int add_ovly_node(struct dsp_uuid *uuid_obj,
enum dsp_dcdobjtype obj_type, void *handle);
static int add_ovly_sect(struct nldr_object *nldr_obj,
struct ovly_sect **lst,
struct dbll_sect_info *sect_inf,
bool *exists, u32 addr, u32 bytes);
static s32 fake_ovly_write(void *handle, u32 dsp_address, void *buf, u32 bytes,
s32 mtype);
static void free_sects(struct nldr_object *nldr_obj,
struct ovly_sect *phase_sects, u16 alloc_num);
static bool get_symbol_value(void *handle, void *parg, void *rmm_handle,
char *sym_name, struct dbll_sym_val **sym);
static int load_lib(struct nldr_nodeobject *nldr_node_obj,
struct lib_node *root, struct dsp_uuid uuid,
bool root_prstnt,
struct dbll_library_obj **lib_path,
enum nldr_phase phase, u16 depth);
static int load_ovly(struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase);
static int remote_alloc(void **ref, u16 mem_sect, u32 size,
u32 align, u32 *dsp_address,
s32 segmnt_id,
s32 req, bool reserve);
static int remote_free(void **ref, u16 space, u32 dsp_address, u32 size,
bool reserve);
static void unload_lib(struct nldr_nodeobject *nldr_node_obj,
struct lib_node *root);
static void unload_ovly(struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase);
static bool find_in_persistent_lib_array(struct nldr_nodeobject *nldr_node_obj,
struct dbll_library_obj *lib);
int nldr_allocate(struct nldr_object *nldr_obj, void *priv_ref,
const struct dcd_nodeprops *node_props,
struct nldr_nodeobject **nldr_nodeobj,
bool *pf_phase_split)
int nldr_create(struct nldr_object **nldr,
struct dev_object *hdev_obj,
const struct nldr_attrs *pattrs)
void nldr_delete(struct nldr_object *nldr_obj)
void nldr_exit(void)
int nldr_get_fxn_addr(struct nldr_nodeobject *nldr_node_obj,
char *str_fxn, u32 * addr)
int nldr_get_rmm_manager(struct nldr_object *nldr,
struct rmm_target_obj **rmm_mgr)
bool nldr_init(void)
int nldr_load(struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase)
int nldr_unload(struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase)
static int add_ovly_info(void *handle, struct dbll_sect_info *sect_info,
u32 addr, u32 bytes)
static int add_ovly_node(struct dsp_uuid *uuid_obj,
enum dsp_dcdobjtype obj_type, void *handle)
static int add_ovly_sect(struct nldr_object *nldr_obj,
struct ovly_sect **lst,
struct dbll_sect_info *sect_inf,
bool *exists, u32 addr, u32 bytes)
static s32 fake_ovly_write(void *handle, u32 dsp_address, void *buf, u32 bytes,
s32 mtype)
static void free_sects(struct nldr_object *nldr_obj,
struct ovly_sect *phase_sects, u16 alloc_num)
static bool get_symbol_value(void *handle, void *parg, void *rmm_handle,
char *sym_name, struct dbll_sym_val **sym)
static int load_lib(struct nldr_nodeobject *nldr_node_obj,
struct lib_node *root, struct dsp_uuid uuid,
bool root_prstnt,
struct dbll_library_obj **lib_path,
enum nldr_phase phase, u16 depth)
static int load_ovly(struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase)
static int remote_alloc(void **ref, u16 mem_sect, u32 size,
u32 align, u32 *dsp_address,
s32 segmnt_id, s32 req,
bool reserve)
static int remote_free(void **ref, u16 space, u32 dsp_address,
u32 size, bool reserve)
static void unload_lib(struct nldr_nodeobject *nldr_node_obj,
struct lib_node *root)
static void unload_ovly(struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase)
static bool find_in_persistent_lib_array(struct nldr_nodeobject *nldr_node_obj,
struct dbll_library_obj *lib)
int nldr_find_addr(struct nldr_nodeobject *nldr_node, u32 sym_addr,
u32 offset_range, void *offset_output, char *sym_name)
