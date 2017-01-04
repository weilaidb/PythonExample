#define C2_MIN_PAGESIZE  1024
#define C2_MAX_MRS       32768
#define C2_MAX_QPS       16000
#define C2_MAX_WQE_SZ    256
#define C2_MAX_QP_WR     ((128*1024)/C2_MAX_WQE_SZ)
#define C2_MAX_SGES      4
#define C2_MAX_SGE_RD    1
#define C2_MAX_CQS       32768
#define C2_MAX_CQES      4096
#define C2_MAX_PDS       16384
static int c2_adapter_init(struct c2_dev *c2dev)
static void c2_adapter_term(struct c2_dev *c2dev)
static int c2_rnic_query(struct c2_dev *c2dev, struct ib_device_attr *props)
int c2_add_addr(struct c2_dev *c2dev, __be32 inaddr, __be32 inmask)
int c2_del_addr(struct c2_dev *c2dev, __be32 inaddr, __be32 inmask)
static int c2_rnic_open(struct c2_dev *c2dev)
static int c2_rnic_close(struct c2_dev *c2dev)
int __devinit c2_rnic_init(struct c2_dev *c2dev)
void __devexit c2_rnic_term(struct c2_dev *c2dev)
