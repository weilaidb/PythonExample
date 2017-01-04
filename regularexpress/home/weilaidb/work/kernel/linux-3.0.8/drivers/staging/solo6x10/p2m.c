int solo_p2m_dma(struct solo_dev *solo_dev, u8 id, int wr,
void *sys_addr, u32 ext_addr, u32 size)
int solo_p2m_dma_t(struct solo_dev *solo_dev, u8 id, int wr,
dma_addr_t dma_addr, u32 ext_addr, u32 size)
void solo_p2m_push_desc(struct p2m_desc *desc, int wr, dma_addr_t dma_addr,
u32 ext_addr, u32 size, int repeat, u32 ext_size)
int solo_p2m_dma_desc(struct solo_dev *solo_dev, u8 id,
struct p2m_desc *desc, int desc_count)
int solo_p2m_dma_sg(struct solo_dev *solo_dev, u8 id,
struct p2m_desc *pdesc, int wr,
struct scatterlist *sg, u32 sg_off,
u32 ext_addr, u32 size)
#define P2M_TEST_CHAR		0xbe
static unsigned long long p2m_test(struct solo_dev *solo_dev, u8 id,
u32 base, int size)
#define TEST_CHUNK_SIZE		(8 * 1024)
static void run_p2m_test(struct solo_dev *solo_dev)
#define run_p2m_test(__solo)	do  while (0)
void solo_p2m_isr(struct solo_dev *solo_dev, int id)
void solo_p2m_error_isr(struct solo_dev *solo_dev, u32 status)
void solo_p2m_exit(struct solo_dev *solo_dev)
int solo_p2m_init(struct solo_dev *solo_dev)
