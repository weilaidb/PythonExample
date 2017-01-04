struct aac_common aac_config = ;
static int aac_alloc_comm(struct aac_dev *dev, void **commaddr, unsigned long commsize, unsigned long commalign)
static void aac_queue_init(struct aac_dev * dev, struct aac_queue * q, u32 *mem, int qsize)
int aac_send_shutdown(struct aac_dev * dev)
static int aac_comm_init(struct aac_dev * dev)
struct aac_dev *aac_init_adapter(struct aac_dev *dev)
