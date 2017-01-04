#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME "libertas_cs"
MODULE_AUTHOR("Holger Schurig <hs4233@mail.mn-solutions.de>");
MODULE_DESCRIPTION("Driver for Marvell 83xx compact flash WLAN cards");
MODULE_LICENSE("GPL");
struct if_cs_card ;
enum ;
static const struct lbs_fw_table fw_table[] = ;
MODULE_FIRMWARE("libertas/cf8305.bin");
MODULE_FIRMWARE("libertas/cf8381_helper.bin");
MODULE_FIRMWARE("libertas/cf8381.bin");
MODULE_FIRMWARE("libertas/cf8385_helper.bin");
MODULE_FIRMWARE("libertas/cf8385.bin");
MODULE_FIRMWARE("libertas_cs_helper.fw");
MODULE_FIRMWARE("libertas_cs.fw");
static int debug_output = 0;
#define debug_output 0
static inline unsigned int if_cs_read8(struct if_cs_card *card, uint reg)
static inline unsigned int if_cs_read16(struct if_cs_card *card, uint reg)
static inline void if_cs_read16_rep(
struct if_cs_card *card,
uint reg,
void *buf,
unsigned long count)
static inline void if_cs_write8(struct if_cs_card *card, uint reg, u8 val)
static inline void if_cs_write16(struct if_cs_card *card, uint reg, u16 val)
static inline void if_cs_write16_rep(
struct if_cs_card *card,
uint reg,
const void *buf,
unsigned long count)
static int if_cs_poll_while_fw_download(struct if_cs_card *card, uint addr, u8 reg)
#define IF_CS_BIT_TX			0x0001
#define IF_CS_BIT_RX			0x0002
#define IF_CS_BIT_COMMAND		0x0004
#define IF_CS_BIT_RESP			0x0008
#define IF_CS_BIT_EVENT			0x0010
#define	IF_CS_BIT_MASK			0x001f
#define IF_CS_HOST_STATUS		0x00000000
#define IF_CS_HOST_INT_CAUSE		0x00000002
#define IF_CS_HOST_INT_MASK		0x00000004
#define IF_CS_WRITE			0x00000016
#define IF_CS_WRITE_LEN			0x00000014
#define IF_CS_READ			0x00000010
#define IF_CS_READ_LEN			0x00000024
#define IF_CS_CMD			0x0000001A
#define IF_CS_CMD_LEN			0x00000018
#define IF_CS_RESP			0x00000012
#define IF_CS_RESP_LEN			0x00000030
#define IF_CS_CARD_STATUS		0x00000020
#define IF_CS_CARD_STATUS_MASK		0x7f00
#define IF_CS_CARD_INT_CAUSE		0x00000022
#define IF_CS_SQ_READ_LOW		0x00000028
#define IF_CS_SQ_HELPER_OK		0x10
#define IF_CS_SCRATCH			0x0000003F
#define IF_CS_SCRATCH_BOOT_OK		0x00
#define IF_CS_SCRATCH_HELPER_OK		0x5a
#define IF_CS_PRODUCT_ID		0x0000001C
#define IF_CS_CF8385_B1_REV		0x12
#define IF_CS_CF8381_B3_REV		0x04
#define IF_CS_CF8305_B1_REV		0x03
#define CF8305_MANFID		0x02db
#define CF8305_CARDID		0x8103
#define CF8381_MANFID		0x02db
#define CF8381_CARDID		0x6064
#define CF8385_MANFID		0x02df
#define CF8385_CARDID		0x8103
static inline u32 get_model(u16 manf_id, u16 card_id)
static inline void if_cs_enable_ints(struct if_cs_card *card)
static inline void if_cs_disable_ints(struct if_cs_card *card)
static int if_cs_send_cmd(struct lbs_private *priv, u8 *buf, u16 nb)
static void if_cs_send_data(struct lbs_private *priv, u8 *buf, u16 nb)
static int if_cs_receive_cmdres(struct lbs_private *priv, u8 *data, u32 *len)
static struct sk_buff *if_cs_receive_data(struct lbs_private *priv)
static irqreturn_t if_cs_interrupt(int irq, void *data)
static int if_cs_prog_helper(struct if_cs_card *card, const struct firmware *fw)
static int if_cs_prog_real(struct if_cs_card *card, const struct firmware *fw)
static int if_cs_host_to_card(struct lbs_private *priv,
u8 type,
u8 *buf,
u16 nb)
static void if_cs_release(struct pcmcia_device *p_dev)
static int if_cs_ioprobe(struct pcmcia_device *p_dev, void *priv_data)
static int if_cs_probe(struct pcmcia_device *p_dev)
static void if_cs_detach(struct pcmcia_device *p_dev)
static const struct pcmcia_device_id if_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, if_cs_ids);
static struct pcmcia_driver lbs_driver = ;
static int __init if_cs_init(void)
static void __exit if_cs_exit(void)
module_init(if_cs_init);
module_exit(if_cs_exit);
