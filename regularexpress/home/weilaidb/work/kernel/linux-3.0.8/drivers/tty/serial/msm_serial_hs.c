#define UARTDM_MR1_ADDR 0x0
#define UARTDM_MR2_ADDR 0x4
#define RSLT_FIFO_CNTR_BMSK (0xE << 28)
#define RSLT_VLD            BIT(1)
#define UARTDM_CSR_ADDR 0x8
#define UARTDM_CSR_115200 0xFF
#define UARTDM_CSR_57600  0xEE
#define UARTDM_CSR_38400  0xDD
#define UARTDM_CSR_28800  0xCC
#define UARTDM_CSR_19200  0xBB
#define UARTDM_CSR_14400  0xAA
#define UARTDM_CSR_9600   0x99
#define UARTDM_CSR_7200   0x88
#define UARTDM_CSR_4800   0x77
#define UARTDM_CSR_3600   0x66
#define UARTDM_CSR_2400   0x55
#define UARTDM_CSR_1200   0x44
#define UARTDM_CSR_600    0x33
#define UARTDM_CSR_300    0x22
#define UARTDM_CSR_150    0x11
#define UARTDM_CSR_75     0x00
#define UARTDM_TF_ADDR 0x70
#define UARTDM_TF2_ADDR 0x74
#define UARTDM_TF3_ADDR 0x78
#define UARTDM_TF4_ADDR 0x7C
#define UARTDM_CR_ADDR 0x10
#define UARTDM_IMR_ADDR 0x14
#define UARTDM_IPR_ADDR 0x18
#define UARTDM_TFWR_ADDR 0x1c
#define UARTDM_RFWR_ADDR 0x20
#define UARTDM_HCR_ADDR 0x24
#define UARTDM_DMRX_ADDR 0x34
#define UARTDM_IRDA_ADDR 0x38
#define UARTDM_DMEN_ADDR 0x3c
#define UARTDM_NCF_TX_ADDR 0x40
#define UARTDM_BADR_ADDR 0x44
#define UARTDM_SIM_CFG_ADDR 0x80
#define UARTDM_SR_ADDR 0x8
#define UARTDM_RF_ADDR  0x70
#define UARTDM_RF2_ADDR 0x74
#define UARTDM_RF3_ADDR 0x78
#define UARTDM_RF4_ADDR 0x7C
#define UARTDM_MISR_ADDR 0x10
#define UARTDM_ISR_ADDR 0x14
#define UARTDM_RX_TOTAL_SNAP_ADDR 0x38
#define UARTDM_RXFS_ADDR 0x50
#define UARTDM_SR_PAR_FRAME_BMSK        BIT(5)
#define UARTDM_SR_OVERRUN_BMSK          BIT(4)
#define UARTDM_SR_TXEMT_BMSK            BIT(3)
#define UARTDM_SR_TXRDY_BMSK            BIT(2)
#define UARTDM_SR_RXRDY_BMSK            BIT(0)
#define UARTDM_CR_TX_DISABLE_BMSK       BIT(3)
#define UARTDM_CR_RX_DISABLE_BMSK       BIT(1)
#define UARTDM_CR_TX_EN_BMSK            BIT(2)
#define UARTDM_CR_RX_EN_BMSK            BIT(0)
#define RESET_RX                0x10
#define RESET_TX                0x20
#define RESET_ERROR_STATUS      0x30
#define RESET_BREAK_INT         0x40
#define START_BREAK             0x50
#define STOP_BREAK              0x60
#define RESET_CTS               0x70
#define RESET_STALE_INT         0x80
#define RFR_LOW                 0xD0
#define RFR_HIGH                0xE0
#define CR_PROTECTION_EN        0x100
#define STALE_EVENT_ENABLE      0x500
#define STALE_EVENT_DISABLE     0x600
#define FORCE_STALE_EVENT       0x400
#define CLEAR_TX_READY          0x300
#define RESET_TX_ERROR          0x800
#define RESET_TX_DONE           0x810
#define UARTDM_MR1_AUTO_RFR_LEVEL1_BMSK 0xffffff00
#define UARTDM_MR1_AUTO_RFR_LEVEL0_BMSK 0x3f
#define UARTDM_MR1_CTS_CTL_BMSK 0x40
#define UARTDM_MR1_RX_RDY_CTL_BMSK 0x80
#define UARTDM_MR2_ERROR_MODE_BMSK 0x40
#define UARTDM_MR2_BITS_PER_CHAR_BMSK 0x30
#define FIVE_BPC  (0 << 4)
#define SIX_BPC   (1 << 4)
#define SEVEN_BPC (2 << 4)
#define EIGHT_BPC (3 << 4)
#define UARTDM_MR2_STOP_BIT_LEN_BMSK 0xc
#define STOP_BIT_ONE (1 << 2)
#define STOP_BIT_TWO (3 << 2)
#define UARTDM_MR2_PARITY_MODE_BMSK 0x3
#define NO_PARITY 0x0
#define EVEN_PARITY 0x1
#define ODD_PARITY 0x2
#define SPACE_PARITY 0x3
#define UARTDM_IPR_STALE_TIMEOUT_MSB_BMSK 0xffffff80
#define UARTDM_IPR_STALE_LSB_BMSK 0x1f
#define UARTDM_ISR_TX_READY_BMSK        BIT(7)
#define UARTDM_ISR_CURRENT_CTS_BMSK     BIT(6)
#define UARTDM_ISR_DELTA_CTS_BMSK       BIT(5)
#define UARTDM_ISR_RXLEV_BMSK           BIT(4)
#define UARTDM_ISR_RXSTALE_BMSK         BIT(3)
#define UARTDM_ISR_RXBREAK_BMSK         BIT(2)
#define UARTDM_ISR_RXHUNT_BMSK          BIT(1)
#define UARTDM_ISR_TXLEV_BMSK           BIT(0)
#define UARTDM_TX_DM_EN_BMSK 0x1
#define UARTDM_RX_DM_EN_BMSK 0x2
#define UART_FIFOSIZE 64
#define UARTCLK 7372800
enum flush_reason ;
enum msm_hs_clk_states_e ;
enum msm_hs_clk_req_off_state_e ;
struct msm_hs_tx ;
struct msm_hs_rx ;
struct msm_hs_rx_wakeup ;
struct msm_hs_port ;
#define MSM_UARTDM_BURST_SIZE 16
#define UARTDM_TX_BUF_SIZE UART_XMIT_SIZE
#define UARTDM_RX_BUF_SIZE 512
#define UARTDM_NR 2
static struct msm_hs_port q_uart_port[UARTDM_NR];
static struct platform_driver msm_serial_hs_platform_driver;
static struct uart_driver msm_hs_driver;
static struct uart_ops msm_hs_ops;
static struct workqueue_struct *msm_hs_workqueue;
#define UARTDM_TO_MSM(uart_port) \
container_of((uart_port), struct msm_hs_port, uport)
static unsigned int use_low_power_rx_wakeup(struct msm_hs_port
*msm_uport)
static unsigned int msm_hs_read(struct uart_port *uport,
unsigned int offset)
static void msm_hs_write(struct uart_port *uport, unsigned int offset,
unsigned int value)
static void msm_hs_release_port(struct uart_port *port)
static int msm_hs_request_port(struct uart_port *port)
static int __devexit msm_hs_remove(struct platform_device *pdev)
static int msm_hs_init_clk_locked(struct uart_port *uport)
static void msm_hs_pm(struct uart_port *uport, unsigned int state,
unsigned int oldstate)
static void msm_hs_set_bps_locked(struct uart_port *uport,
unsigned int bps)
static void msm_hs_set_termios(struct uart_port *uport,
struct ktermios *termios,
struct ktermios *oldtermios)
static unsigned int msm_hs_tx_empty(struct uart_port *uport)
static void msm_hs_stop_tx_locked(struct uart_port *uport)
static void msm_hs_stop_rx_locked(struct uart_port *uport)
static void msm_hs_submit_tx_locked(struct uart_port *uport)
static void msm_hs_start_rx_locked(struct uart_port *uport)
static void msm_hs_start_tx_locked(struct uart_port *uport)
static void msm_hs_dmov_tx_callback(struct msm_dmov_cmd *cmd_ptr,
unsigned int result,
struct msm_dmov_errdata *err)
static void msm_hs_dmov_rx_callback(struct msm_dmov_cmd *cmd_ptr,
unsigned int result,
struct msm_dmov_errdata *err)
static void msm_hs_tty_flip_buffer_work(struct work_struct *work)
static unsigned int msm_hs_get_mctrl_locked(struct uart_port *uport)
static void set_rfr_locked(struct uart_port *uport, int auto_rfr)
static void msm_hs_set_mctrl_locked(struct uart_port *uport,
unsigned int mctrl)
static void msm_hs_enable_ms_locked(struct uart_port *uport)
static void msm_hs_break_ctl(struct uart_port *uport, int ctl)
static void msm_hs_config_port(struct uart_port *uport, int cfg_flags)
static void msm_hs_handle_delta_cts(struct uart_port *uport)
static int msm_hs_check_clock_off_locked(struct uart_port *uport)
static enum hrtimer_restart msm_hs_clk_off_retry(struct hrtimer *timer)
static irqreturn_t msm_hs_isr(int irq, void *dev)
void msm_hs_request_clock_off_locked(struct uart_port *uport)
void msm_hs_request_clock_off(struct uart_port *uport)
void msm_hs_request_clock_on_locked(struct uart_port *uport)
void msm_hs_request_clock_on(struct uart_port *uport)
static irqreturn_t msm_hs_rx_wakeup_isr(int irq, void *dev)
static const char *msm_hs_type(struct uart_port *port)
static int msm_hs_startup(struct uart_port *uport)
static int __devinit uartdm_init_port(struct uart_port *uport)
static int __devinit msm_hs_probe(struct platform_device *pdev)
static int __init msm_serial_hs_init(void)
module_init(msm_serial_hs_init);
static void msm_hs_shutdown(struct uart_port *uport)
static void __exit msm_serial_hs_exit(void)
module_exit(msm_serial_hs_exit);
static int msm_hs_runtime_idle(struct device *dev)
static int msm_hs_runtime_resume(struct device *dev)
static int msm_hs_runtime_suspend(struct device *dev)
#define msm_hs_runtime_idle NULL
#define msm_hs_runtime_resume NULL
#define msm_hs_runtime_suspend NULL
static const struct dev_pm_ops msm_hs_dev_pm_ops = ;
static struct platform_driver msm_serial_hs_platform_driver = ;
static struct uart_driver msm_hs_driver = ;
static struct uart_ops msm_hs_ops = ;
MODULE_DESCRIPTION("High Speed UART Driver for the MSM chipset");
MODULE_VERSION("1.2");
MODULE_LICENSE("GPL v2");
