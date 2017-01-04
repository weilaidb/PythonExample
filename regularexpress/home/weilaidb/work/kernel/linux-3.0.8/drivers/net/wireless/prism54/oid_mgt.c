static const int frequency_list_bg[] = ;
int
channel_of_freq(int f)
#define OID_STRUCT(name,oid,s,t) [name] =
#define OID_STRUCT_C(name,oid,s,t) OID_STRUCT(name,oid,s,t | OID_FLAG_CACHED)
#define OID_U32(name,oid) OID_STRUCT(name,oid,u32,OID_TYPE_U32)
#define OID_U32_C(name,oid) OID_STRUCT_C(name,oid,u32,OID_TYPE_U32)
#define OID_STRUCT_MLME(name,oid) OID_STRUCT(name,oid,struct obj_mlme,OID_TYPE_MLME)
#define OID_STRUCT_MLMEEX(name,oid) OID_STRUCT(name,oid,struct obj_mlmeex,OID_TYPE_MLMEEX)
#define OID_UNKNOWN(name,oid) OID_STRUCT(name,oid,0,0)
struct oid_t isl_oid[] = ;
int
mgt_init(islpci_private *priv)
void
mgt_clean(islpci_private *priv)
void
mgt_le_to_cpu(int type, void *data)
static void
mgt_cpu_to_le(int type, void *data)
int
mgt_set_request(islpci_private *priv, enum oid_num_t n, int extra, void *data)
int
mgt_set_varlen(islpci_private *priv, enum oid_num_t n, void *data, int extra_len)
int
mgt_get_request(islpci_private *priv, enum oid_num_t n, int extra, void *data,
union oid_res_t *res)
int
mgt_commit_list(islpci_private *priv, enum oid_num_t *l, int n)
void
mgt_set(islpci_private *priv, enum oid_num_t n, void *data)
void
mgt_get(islpci_private *priv, enum oid_num_t n, void *res)
static enum oid_num_t commit_part1[] = ;
static enum oid_num_t commit_part2[] = ;
static int
mgt_update_addr(islpci_private *priv)
#define VEC_SIZE(a) ARRAY_SIZE(a)
int
mgt_commit(islpci_private *priv)
if (rvalue)
printk(KERN_DEBUG "%s: Unlatching OIDs failed\n", priv->ndev->name);
}
int
mgt_mlme_answer(islpci_private *priv)
enum oid_num_t
mgt_oidtonum(u32 oid)
int
mgt_response_to_str(enum oid_num_t n, union oid_res_t *r, char *str)
