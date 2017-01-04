#define FLAG_DISABLE_HIBERNATION 0x0001
#define FLAG_HAVE_CAPS		 0x0002
#define FLAG_HAS_VSYNC_IRQ	 0x0004
#define FLAG_HAVE_STATUS	 0x0008
#define CMD_GET_CLIENT_CAP     0x0601
#define CMD_GET_CLIENT_STATUS  0x0602
union mddi_rev ;
struct reg_read_info ;
struct mddi_info ;
static void mddi_init_rev_encap(struct mddi_info *mddi);
#define mddi_readl(r) readl(mddi->base + (MDDI_##r))
#define mddi_writel(v, r) writel((v), mddi->base + (MDDI_##r))
void mddi_activate_link(struct msm_mddi_client_data *cdata)
static void mddi_handle_link_list_done(struct mddi_info *mddi)
static void mddi_reset_rev_encap_ptr(struct mddi_info *mddi)
static void mddi_handle_rev_data(struct mddi_info *mddi, union mddi_rev *rev)
static void mddi_wait_interrupt(struct mddi_info *mddi, uint32_t intmask);
static void mddi_handle_rev_data_avail(struct mddi_info *mddi)
static irqreturn_t mddi_isr(int irq, void *data)
static long mddi_wait_interrupt_timeout(struct mddi_info *mddi,
uint32_t intmask, int timeout)
static void mddi_wait_interrupt(struct mddi_info *mddi, uint32_t intmask)
static void mddi_init_rev_encap(struct mddi_info *mddi)
void mddi_set_auto_hibernate(struct msm_mddi_client_data *cdata, int on)
static uint16_t mddi_init_registers(struct mddi_info *mddi)
static void mddi_suspend(struct msm_mddi_client_data *cdata)
static void mddi_resume(struct msm_mddi_client_data *cdata)
static int __init mddi_get_client_caps(struct mddi_info *mddi)
int mddi_check_status(struct mddi_info *mddi)
void mddi_remote_write(struct msm_mddi_client_data *cdata, uint32_t val,
uint32_t reg)
uint32_t mddi_remote_read(struct msm_mddi_client_data *cdata, uint32_t reg)
static struct mddi_info mddi_info[2];
static int __init mddi_clk_setup(struct platform_device *pdev,
struct mddi_info *mddi,
unsigned long clk_rate)
static int __init mddi_rev_data_setup(struct mddi_info *mddi)
static int __devinit mddi_probe(struct platform_device *pdev)
static struct platform_driver mddi_driver = ;
static int __init _mddi_init(void)
module_init(_mddi_init);
