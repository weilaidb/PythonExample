#define PBL_VIRT 1
#define PBL_PHYS 2
static int
send_pbl_messages(struct c2_dev *c2dev, __be32 stag_index,
unsigned long va, u32 pbl_depth,
struct c2_vq_req *vq_req, int pbl_type)
#define C2_PBL_MAX_DEPTH 131072
int
c2_nsmr_register_phys_kern(struct c2_dev *c2dev, u64 *addr_list,
int page_size, int pbl_depth, u32 length,
u32 offset, u64 *va, enum c2_acf acf,
struct c2_mr *mr)
int c2_stag_dealloc(struct c2_dev *c2dev, u32 stag_index)
