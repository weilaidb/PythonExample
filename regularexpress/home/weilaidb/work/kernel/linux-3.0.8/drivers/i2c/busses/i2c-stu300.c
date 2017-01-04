#define NAME "stu300"
#define I2C_CR					(0x00000000)
#define I2C_CR_RESET_VALUE			(0x00)
#define I2C_CR_RESET_UMASK			(0x00)
#define I2C_CR_DDC1_ENABLE			(0x80)
#define I2C_CR_TRANS_ENABLE			(0x40)
#define I2C_CR_PERIPHERAL_ENABLE		(0x20)
#define I2C_CR_DDC2B_ENABLE			(0x10)
#define I2C_CR_START_ENABLE			(0x08)
#define I2C_CR_ACK_ENABLE			(0x04)
#define I2C_CR_STOP_ENABLE			(0x02)
#define I2C_CR_INTERRUPT_ENABLE			(0x01)
#define I2C_SR1					(0x00000004)
#define I2C_SR1_RESET_VALUE			(0x00)
#define I2C_SR1_RESET_UMASK			(0x00)
#define I2C_SR1_EVF_IND				(0x80)
#define I2C_SR1_ADD10_IND			(0x40)
#define I2C_SR1_TRA_IND				(0x20)
#define I2C_SR1_BUSY_IND			(0x10)
#define I2C_SR1_BTF_IND				(0x08)
#define I2C_SR1_ADSL_IND			(0x04)
#define I2C_SR1_MSL_IND				(0x02)
#define I2C_SR1_SB_IND				(0x01)
#define I2C_SR2					(0x00000008)
#define I2C_SR2_RESET_VALUE			(0x00)
#define I2C_SR2_RESET_UMASK			(0x40)
#define I2C_SR2_MASK				(0xBF)
#define I2C_SR2_SCLFAL_IND			(0x80)
#define I2C_SR2_ENDAD_IND			(0x20)
#define I2C_SR2_AF_IND				(0x10)
#define I2C_SR2_STOPF_IND			(0x08)
#define I2C_SR2_ARLO_IND			(0x04)
#define I2C_SR2_BERR_IND			(0x02)
#define I2C_SR2_DDC2BF_IND			(0x01)
#define I2C_CCR					(0x0000000C)
#define I2C_CCR_RESET_VALUE			(0x00)
#define I2C_CCR_RESET_UMASK			(0x00)
#define I2C_CCR_MASK				(0xFF)
#define I2C_CCR_FMSM				(0x80)
#define I2C_CCR_CC_MASK				(0x7F)
#define I2C_OAR1				(0x00000010)
#define I2C_OAR1_RESET_VALUE			(0x00)
#define I2C_OAR1_RESET_UMASK			(0x00)
#define I2C_OAR1_ADD_MASK			(0xFF)
#define I2C_OAR2				(0x00000014)
#define I2C_OAR2_RESET_VALUE			(0x40)
#define I2C_OAR2_RESET_UMASK			(0x19)
#define I2C_OAR2_MASK				(0xE6)
#define I2C_OAR2_FR_25_10MHZ			(0x00)
#define I2C_OAR2_FR_10_1667MHZ			(0x20)
#define I2C_OAR2_FR_1667_2667MHZ		(0x40)
#define I2C_OAR2_FR_2667_40MHZ			(0x60)
#define I2C_OAR2_FR_40_5333MHZ			(0x80)
#define I2C_OAR2_FR_5333_66MHZ			(0xA0)
#define I2C_OAR2_FR_66_80MHZ			(0xC0)
#define I2C_OAR2_FR_80_100MHZ			(0xE0)
#define I2C_OAR2_FR_MASK			(0xE0)
#define I2C_OAR2_ADD_MASK			(0x06)
#define I2C_DR					(0x00000018)
#define I2C_DR_RESET_VALUE			(0x00)
#define I2C_DR_RESET_UMASK			(0xFF)
#define I2C_DR_D_MASK				(0xFF)
#define I2C_ECCR				(0x0000001C)
#define I2C_ECCR_RESET_VALUE			(0x00)
#define I2C_ECCR_RESET_UMASK			(0xE0)
#define I2C_ECCR_MASK				(0x1F)
#define I2C_ECCR_CC_MASK			(0x1F)
enum stu300_event ;
enum stu300_error ;
#define STU300_TIMEOUT (msecs_to_jiffies(1000))
#define NUM_ADDR_RESEND_ATTEMPTS 12
static unsigned int scl_frequency = 100000;
module_param(scl_frequency, uint,  0644);
struct stu300_dev ;
static int stu300_init_hw(struct stu300_dev *dev);
static inline void stu300_wr8(u32 value, void __iomem *address)
static inline u32 stu300_r8(void __iomem *address)
static void stu300_irq_enable(struct stu300_dev *dev)
static void stu300_irq_disable(struct stu300_dev *dev)
static int stu300_event_occurred(struct stu300_dev *dev,
enum stu300_event mr_event)
static irqreturn_t stu300_irh(int irq, void *data)
static int stu300_start_and_await_event(struct stu300_dev *dev,
u8 cr_value,
enum stu300_event mr_event)
static int stu300_await_event(struct stu300_dev *dev,
enum stu300_event mr_event)
#define BUSY_RELEASE_ATTEMPTS 10
static int stu300_wait_while_busy(struct stu300_dev *dev)
struct stu300_clkset ;
static const struct stu300_clkset stu300_clktable[] = ;
static int stu300_set_clk(struct stu300_dev *dev, unsigned long clkrate)
static int stu300_init_hw(struct stu300_dev *dev)
static int stu300_send_address(struct stu300_dev *dev,
struct i2c_msg *msg, int resend)
static int stu300_xfer_msg(struct i2c_adapter *adap,
struct i2c_msg *msg, int stop)
static int stu300_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs,
int num)
static u32 stu300_func(struct i2c_adapter *adap)
static const struct i2c_algorithm stu300_algo = ;
static int __init
stu300_probe(struct platform_device *pdev)
static int stu300_suspend(struct platform_device *pdev, pm_message_t state)
static int stu300_resume(struct platform_device *pdev)
#define stu300_suspend NULL
#define stu300_resume NULL
static int __exit
stu300_remove(struct platform_device *pdev)
static struct platform_driver stu300_i2c_driver = ;
static int __init stu300_init(void)
static void __exit stu300_exit(void)
subsys_initcall(stu300_init);
module_exit(stu300_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("ST Micro DDC I2C adapter (" NAME ")");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" NAME);
