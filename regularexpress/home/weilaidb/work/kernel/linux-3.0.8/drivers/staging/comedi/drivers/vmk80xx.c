#define BOARDNAME "vmk80xx"
MODULE_AUTHOR("Manuel Gebele <forensixs@gmx.de>");
MODULE_DESCRIPTION("Velleman USB Board Low-Level Driver");
MODULE_SUPPORTED_DEVICE("K8055/K8061 aka VM110/VM140");
MODULE_VERSION("0.8.01");
MODULE_LICENSE("GPL");
enum ;
static const struct usb_device_id vmk80xx_id_table[] = ;
MODULE_DEVICE_TABLE(usb, vmk80xx_id_table);
#define VMK8055_DI_REG          0x00
#define VMK8055_DO_REG          0x01
#define VMK8055_AO1_REG         0x02
#define VMK8055_AO2_REG         0x03
#define VMK8055_AI1_REG         0x02
#define VMK8055_AI2_REG         0x03
#define VMK8055_CNT1_REG        0x04
#define VMK8055_CNT2_REG        0x06
#define VMK8061_CH_REG          0x01
#define VMK8061_DI_REG          0x01
#define VMK8061_DO_REG          0x01
#define VMK8061_PWM_REG1        0x01
#define VMK8061_PWM_REG2        0x02
#define VMK8061_CNT_REG         0x02
#define VMK8061_AO_REG          0x02
#define VMK8061_AI_REG1         0x02
#define VMK8061_AI_REG2         0x03
#define VMK8055_CMD_RST         0x00
#define VMK8055_CMD_DEB1_TIME   0x01
#define VMK8055_CMD_DEB2_TIME   0x02
#define VMK8055_CMD_RST_CNT1    0x03
#define VMK8055_CMD_RST_CNT2    0x04
#define VMK8055_CMD_WRT_AD      0x05
#define VMK8061_CMD_RD_AI       0x00
#define VMK8061_CMR_RD_ALL_AI   0x01
#define VMK8061_CMD_SET_AO      0x02
#define VMK8061_CMD_SET_ALL_AO  0x03
#define VMK8061_CMD_OUT_PWM     0x04
#define VMK8061_CMD_RD_DI       0x05
#define VMK8061_CMD_DO          0x06
#define VMK8061_CMD_CLR_DO      0x07
#define VMK8061_CMD_SET_DO      0x08
#define VMK8061_CMD_RD_CNT      0x09
#define VMK8061_CMD_RST_CNT     0x0a
#define VMK8061_CMD_RD_VERSION  0x0b
#define VMK8061_CMD_RD_JMP_STAT 0x0c
#define VMK8061_CMD_RD_PWR_STAT 0x0d
#define VMK8061_CMD_RD_DO       0x0e
#define VMK8061_CMD_RD_AO       0x0f
#define VMK8061_CMD_RD_PWM      0x10
#define VMK80XX_MAX_BOARDS      COMEDI_NUM_BOARD_MINORS
#define TRANS_OUT_BUSY          1
#define TRANS_IN_BUSY           2
#define TRANS_IN_RUNNING        3
#define IC3_VERSION             (1 << 0)
#define IC6_VERSION             (1 << 1)
#define URB_RCV_FLAG            (1 << 0)
#define URB_SND_FLAG            (1 << 1)
#define CONFIG_VMK80XX_DEBUG
#undef CONFIG_VMK80XX_DEBUG
static int dbgvm = 1;
static int dbgvm;
static int dbgcm = 1;
static int dbgcm;
#define dbgvm(fmt, arg...)                     \
do  while (0)
#define dbgcm(fmt, arg...)                     \
do  while (0)
enum vmk80xx_model ;
struct firmware_version ;
static const struct comedi_lrange vmk8055_range = ;
static const struct comedi_lrange vmk8061_range = ;
struct vmk80xx_board ;
enum ;
struct vmk80xx_usb ;
static struct vmk80xx_usb vmb[VMK80XX_MAX_BOARDS];
static DEFINE_MUTEX(glb_mutex);
static void vmk80xx_tx_callback(struct urb *urb)
static void vmk80xx_rx_callback(struct urb *urb)
static int vmk80xx_check_data_link(struct vmk80xx_usb *dev)
static void vmk80xx_read_eeprom(struct vmk80xx_usb *dev, int flag)
static int vmk80xx_reset_device(struct vmk80xx_usb *dev)
static void vmk80xx_build_int_urb(struct urb *urb, int flag)
static void vmk80xx_do_bulk_msg(struct vmk80xx_usb *dev)
static int vmk80xx_read_packet(struct vmk80xx_usb *dev)
static int vmk80xx_write_packet(struct vmk80xx_usb *dev, int cmd)
#define DIR_IN  1
#define DIR_OUT 2
static int rudimentary_check(struct vmk80xx_usb *dev, int dir)
static int vmk80xx_ai_rinsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_ao_winsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_ao_rinsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_di_bits(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_di_rinsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_do_winsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_do_rinsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_do_bits(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_cnt_rinsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_cnt_cinsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_cnt_winsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_pwm_rinsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_pwm_winsn(struct comedi_device *cdev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int vmk80xx_attach(struct comedi_device *cdev,
struct comedi_devconfig *it)
static int vmk80xx_detach(struct comedi_device *cdev)
static int vmk80xx_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void vmk80xx_disconnect(struct usb_interface *intf)
static struct usb_driver vmk80xx_driver = ;
static struct comedi_driver driver_vmk80xx = ;
static int __init vmk80xx_init(void)
static void __exit vmk80xx_exit(void)
module_init(vmk80xx_init);
module_exit(vmk80xx_exit);
