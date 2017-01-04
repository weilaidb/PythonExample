struct class *mdp_class;
#define MDP_CMD_DEBUG_ACCESS_BASE (0x10000)
static uint16_t mdp_default_ccs[] = ;
static DECLARE_WAIT_QUEUE_HEAD(mdp_dma2_waitqueue);
static DECLARE_WAIT_QUEUE_HEAD(mdp_ppp_waitqueue);
static struct msmfb_callback *dma_callback;
static struct clk *clk;
static unsigned int mdp_irq_mask;
static DEFINE_SPINLOCK(mdp_lock);
DEFINE_MUTEX(mdp_mutex);
static int enable_mdp_irq(struct mdp_info *mdp, uint32_t mask)
static int locked_disable_mdp_irq(struct mdp_info *mdp, uint32_t mask)
static int disable_mdp_irq(struct mdp_info *mdp, uint32_t mask)
static irqreturn_t mdp_isr(int irq, void *data)
static uint32_t mdp_check_mask(uint32_t mask)
static int mdp_wait(struct mdp_info *mdp, uint32_t mask, wait_queue_head_t *wq)
void mdp_dma_wait(struct mdp_device *mdp_dev)
static int mdp_ppp_wait(struct mdp_info *mdp)
void mdp_dma_to_mddi(struct mdp_info *mdp, uint32_t addr, uint32_t stride,
uint32_t width, uint32_t height, uint32_t x, uint32_t y,
struct msmfb_callback *callback)
void mdp_dma(struct mdp_device *mdp_dev, uint32_t addr, uint32_t stride,
uint32_t width, uint32_t height, uint32_t x, uint32_t y,
struct msmfb_callback *callback, int interface)
int get_img(struct mdp_img *img, struct fb_info *info,
unsigned long *start, unsigned long *len,
struct file **filep)
void put_img(struct file *src_file, struct file *dst_file)
int mdp_blit(struct mdp_device *mdp_dev, struct fb_info *fb,
struct mdp_blit_req *req)
void mdp_set_grp_disp(struct mdp_device *mdp_dev, unsigned disp_id)
int register_mdp_client(struct class_interface *cint)
int mdp_probe(struct platform_device *pdev)
static struct platform_driver msm_mdp_driver = ;
static int __init mdp_init(void)
subsys_initcall(mdp_init);
