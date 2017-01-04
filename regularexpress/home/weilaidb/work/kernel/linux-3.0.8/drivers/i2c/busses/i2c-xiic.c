#define DRIVER_NAME "xiic-i2c"
enum xilinx_i2c_state ;
struct xiic_i2c ;
#define XIIC_MSB_OFFSET 0
#define XIIC_REG_OFFSET (0x100+XIIC_MSB_OFFSET)
#define XIIC_CR_REG_OFFSET   (0x00+XIIC_REG_OFFSET)
#define XIIC_SR_REG_OFFSET   (0x04+XIIC_REG_OFFSET)
#define XIIC_DTR_REG_OFFSET  (0x08+XIIC_REG_OFFSET)
#define XIIC_DRR_REG_OFFSET  (0x0C+XIIC_REG_OFFSET)
#define XIIC_ADR_REG_OFFSET  (0x10+XIIC_REG_OFFSET)
#define XIIC_TFO_REG_OFFSET  (0x14+XIIC_REG_OFFSET)
#define XIIC_RFO_REG_OFFSET  (0x18+XIIC_REG_OFFSET)
#define XIIC_TBA_REG_OFFSET  (0x1C+XIIC_REG_OFFSET)
#define XIIC_RFD_REG_OFFSET  (0x20+XIIC_REG_OFFSET)
#define XIIC_GPO_REG_OFFSET  (0x24+XIIC_REG_OFFSET)
#define XIIC_CR_ENABLE_DEVICE_MASK        0x01
#define XIIC_CR_TX_FIFO_RESET_MASK        0x02
#define XIIC_CR_MSMS_MASK                 0x04
#define XIIC_CR_DIR_IS_TX_MASK            0x08
#define XIIC_CR_NO_ACK_MASK               0x10
#define XIIC_CR_REPEATED_START_MASK       0x20
#define XIIC_CR_GENERAL_CALL_MASK         0x40
#define XIIC_SR_GEN_CALL_MASK             0x01
#define XIIC_SR_ADDR_AS_SLAVE_MASK        0x02
#define XIIC_SR_BUS_BUSY_MASK             0x04
#define XIIC_SR_MSTR_RDING_SLAVE_MASK     0x08
#define XIIC_SR_TX_FIFO_FULL_MASK         0x10
#define XIIC_SR_RX_FIFO_FULL_MASK         0x20
#define XIIC_SR_RX_FIFO_EMPTY_MASK        0x40
#define XIIC_SR_TX_FIFO_EMPTY_MASK        0x80
#define XIIC_INTR_ARB_LOST_MASK           0x01
#define XIIC_INTR_TX_ERROR_MASK           0x02
#define XIIC_INTR_TX_EMPTY_MASK           0x04
#define XIIC_INTR_RX_FULL_MASK            0x08
#define XIIC_INTR_BNB_MASK                0x10
#define XIIC_INTR_AAS_MASK                0x20
#define XIIC_INTR_NAAS_MASK               0x40
#define XIIC_INTR_TX_HALF_MASK            0x80
#define IIC_RX_FIFO_DEPTH         16
#define IIC_TX_FIFO_DEPTH         16
#define XIIC_TX_INTERRUPTS                           \
(XIIC_INTR_TX_ERROR_MASK | XIIC_INTR_TX_EMPTY_MASK | XIIC_INTR_TX_HALF_MASK)
#define XIIC_TX_RX_INTERRUPTS (XIIC_INTR_RX_FULL_MASK | XIIC_TX_INTERRUPTS)
#define XIIC_READ_OPERATION  1
#define XIIC_WRITE_OPERATION 0
#define XIIC_TX_DYN_START_MASK            0x0100
#define XIIC_TX_DYN_STOP_MASK             0x0200
#define XIIC_DGIER_OFFSET    0x1C
#define XIIC_IISR_OFFSET     0x20
#define XIIC_IIER_OFFSET     0x28
#define XIIC_RESETR_OFFSET   0x40
#define XIIC_RESET_MASK             0xAUL
#define XIIC_GINTR_ENABLE_MASK      0x80000000UL
#define xiic_tx_space(i2c) ((i2c)->tx_msg->len - (i2c)->tx_pos)
#define xiic_rx_space(i2c) ((i2c)->rx_msg->len - (i2c)->rx_pos)
static void xiic_start_xfer(struct xiic_i2c *i2c);
static void __xiic_start_xfer(struct xiic_i2c *i2c);
static inline void xiic_setreg8(struct xiic_i2c *i2c, int reg, u8 value)
static inline u8 xiic_getreg8(struct xiic_i2c *i2c, int reg)
static inline void xiic_setreg16(struct xiic_i2c *i2c, int reg, u16 value)
static inline void xiic_setreg32(struct xiic_i2c *i2c, int reg, int value)
static inline int xiic_getreg32(struct xiic_i2c *i2c, int reg)
static inline void xiic_irq_dis(struct xiic_i2c *i2c, u32 mask)
static inline void xiic_irq_en(struct xiic_i2c *i2c, u32 mask)
static inline void xiic_irq_clr(struct xiic_i2c *i2c, u32 mask)
static inline void xiic_irq_clr_en(struct xiic_i2c *i2c, u32 mask)
static void xiic_clear_rx_fifo(struct xiic_i2c *i2c)
static void xiic_reinit(struct xiic_i2c *i2c)
static void xiic_deinit(struct xiic_i2c *i2c)
static void xiic_read_rx(struct xiic_i2c *i2c)
static int xiic_tx_fifo_space(struct xiic_i2c *i2c)
static void xiic_fill_tx_fifo(struct xiic_i2c *i2c)
static void xiic_wakeup(struct xiic_i2c *i2c, int code)
static void xiic_process(struct xiic_i2c *i2c)
static int xiic_bus_busy(struct xiic_i2c *i2c)
static int xiic_busy(struct xiic_i2c *i2c)
static void xiic_start_recv(struct xiic_i2c *i2c)
static void xiic_start_send(struct xiic_i2c *i2c)
static irqreturn_t xiic_isr(int irq, void *dev_id)
static void __xiic_start_xfer(struct xiic_i2c *i2c)
static void xiic_start_xfer(struct xiic_i2c *i2c)
static int xiic_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
static u32 xiic_func(struct i2c_adapter *adap)
static const struct i2c_algorithm xiic_algorithm = ;
static struct i2c_adapter xiic_adapter = ;
static int __devinit xiic_i2c_probe(struct platform_device *pdev)
static int __devexit xiic_i2c_remove(struct platform_device* pdev)
MODULE_ALIAS("platform:"DRIVER_NAME);
static struct platform_driver xiic_i2c_driver = ;
static int __init xiic_i2c_init(void)
static void __exit xiic_i2c_exit(void)
module_init(xiic_i2c_init);
module_exit(xiic_i2c_exit);
MODULE_AUTHOR("info@mocean-labs.com");
MODULE_DESCRIPTION("Xilinx I2C bus driver");
MODULE_LICENSE("GPL v2");
