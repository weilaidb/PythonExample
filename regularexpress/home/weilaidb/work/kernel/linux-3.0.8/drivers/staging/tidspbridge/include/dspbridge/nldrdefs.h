#define NLDRDEFS_
#define NLDR_MAXPATHLENGTH       255
struct nldr_object;
struct nldr_nodeobject;
enum nldr_loadtype ;
typedef u32(*nldr_ovlyfxn) (void *priv_ref, u32 dsp_run_addr,
u32 dsp_load_addr, u32 ul_num_bytes, u32 mem_space);
typedef u32(*nldr_writefxn) (void *priv_ref,
u32 dsp_add, void *pbuf,
u32 ul_num_bytes, u32 mem_space);
struct nldr_attrs ;
enum nldr_phase ;
typedef int(*nldr_allocatefxn) (struct nldr_object *nldr_obj,
void *priv_ref,
const struct dcd_nodeprops
* node_props,
struct nldr_nodeobject
**nldr_nodeobj,
bool *pf_phase_split);
typedef int(*nldr_createfxn) (struct nldr_object **nldr,
struct dev_object *hdev_obj,
const struct nldr_attrs *pattrs);
typedef void (*nldr_deletefxn) (struct nldr_object *nldr_obj);
typedef void (*nldr_exitfxn) (void);
typedef void (*nldr_freefxn) (struct nldr_nodeobject *nldr_node_obj);
typedef int(*nldr_getfxnaddrfxn) (struct nldr_nodeobject
* nldr_node_obj,
char *str_fxn, u32 * addr);
typedef bool(*nldr_initfxn) (void);
typedef int(*nldr_loadfxn) (struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase);
typedef int(*nldr_unloadfxn) (struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase);
struct node_ldr_fxns ;
