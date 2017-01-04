#define MAX_INT2CHAR_LENGTH     16
#define DEPLIBSECT		".dspbridge_deplibs"
struct dcd_manager ;
static struct list_head reg_key_list;
static DEFINE_SPINLOCK(dbdcd_lock);
static u32 refs;
static u32 enum_refs;
static s32 atoi(char *psz_buf);
static int get_attrs_from_buf(char *psz_buf, u32 ul_buf_size,
enum dsp_dcdobjtype obj_type,
struct dcd_genericobj *gen_obj);
static void compress_buf(char *psz_buf, u32 ul_buf_size, s32 char_size);
static char dsp_char2_gpp_char(char *word, s32 dsp_char_size);
static int get_dep_lib_info(struct dcd_manager *hdcd_mgr,
struct dsp_uuid *uuid_obj,
u16 *num_libs,
u16 *num_pers_libs,
struct dsp_uuid *dep_lib_uuids,
bool *prstnt_dep_libs,
enum nldr_phase phase);
int dcd_auto_register(struct dcd_manager *hdcd_mgr,
char *sz_coff_path)
int dcd_auto_unregister(struct dcd_manager *hdcd_mgr,
char *sz_coff_path)
int dcd_create_manager(char *sz_zl_dll_name,
struct dcd_manager **dcd_mgr)
int dcd_destroy_manager(struct dcd_manager *hdcd_mgr)
int dcd_enumerate_object(s32 index, enum dsp_dcdobjtype obj_type,
struct dsp_uuid *uuid_obj)
void dcd_exit(void)
int dcd_get_dep_libs(struct dcd_manager *hdcd_mgr,
struct dsp_uuid *uuid_obj,
u16 num_libs, struct dsp_uuid *dep_lib_uuids,
bool *prstnt_dep_libs,
enum nldr_phase phase)
int dcd_get_num_dep_libs(struct dcd_manager *hdcd_mgr,
struct dsp_uuid *uuid_obj,
u16 *num_libs, u16 *num_pers_libs,
enum nldr_phase phase)
int dcd_get_object_def(struct dcd_manager *hdcd_mgr,
struct dsp_uuid *obj_uuid,
enum dsp_dcdobjtype obj_type,
struct dcd_genericobj *obj_def)
int dcd_get_objects(struct dcd_manager *hdcd_mgr,
char *sz_coff_path, dcd_registerfxn register_fxn,
void *handle)
int dcd_get_library_name(struct dcd_manager *hdcd_mgr,
struct dsp_uuid *uuid_obj,
char *str_lib_name,
u32 *buff_size,
enum nldr_phase phase, bool *phase_split)
bool dcd_init(void)
int dcd_register_object(struct dsp_uuid *uuid_obj,
enum dsp_dcdobjtype obj_type,
char *psz_path_name)
int dcd_unregister_object(struct dsp_uuid *uuid_obj,
enum dsp_dcdobjtype obj_type)
static s32 atoi(char *psz_buf)
static int get_attrs_from_buf(char *psz_buf, u32 ul_buf_size,
enum dsp_dcdobjtype obj_type,
struct dcd_genericobj *gen_obj)
static void compress_buf(char *psz_buf, u32 ul_buf_size, s32 char_size)
static char dsp_char2_gpp_char(char *word, s32 dsp_char_size)
static int get_dep_lib_info(struct dcd_manager *hdcd_mgr,
struct dsp_uuid *uuid_obj,
u16 *num_libs,
u16 *num_pers_libs,
struct dsp_uuid *dep_lib_uuids,
bool *prstnt_dep_libs,
enum nldr_phase phase)
