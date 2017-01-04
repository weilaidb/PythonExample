#define ALAUDA_GET_XD_MEDIA_STATUS	0x08
#define ALAUDA_ACK_XD_MEDIA_CHANGE	0x0a
#define ALAUDA_GET_XD_MEDIA_SIG		0x86
#define ALAUDA_BULK_CMD			0x40
#define ALAUDA_PORT_XD			0x00
#define ALAUDA_PORT_SM			0x01
#define ALAUDA_BULK_READ_PAGE		0x84
#define ALAUDA_BULK_READ_OOB		0x85
#define ALAUDA_BULK_READ_BLOCK		0x94
#define ALAUDA_BULK_ERASE_BLOCK		0xa3
#define ALAUDA_BULK_WRITE_PAGE		0xa4
#define ALAUDA_BULK_WRITE_BLOCK		0xb4
#define ALAUDA_BULK_RESET_MEDIA		0xe0
#define PBA_LO(pba) ((pba & 0xF) << 5)
#define PBA_HI(pba) (pba >> 3)
#define PBA_ZONE(pba) (pba >> 11)
#define TIMEOUT HZ
static const struct usb_device_id alauda_table[] = ;
MODULE_DEVICE_TABLE(usb, alauda_table);
struct alauda_card ;
struct alauda ;
static struct alauda_card alauda_card_ids[] = ;
static struct alauda_card *get_card(u8 id)
static void alauda_delete(struct kref *kref)
static int alauda_get_media_status(struct alauda *al, void *buf)
static int alauda_ack_media(struct alauda *al)
static int alauda_get_media_signatures(struct alauda *al, void *buf)
static void alauda_reset(struct alauda *al)
static void correct_data(void *buf, void *read_ecc,
int *corrected, int *uncorrected)
struct alauda_sg_request ;
static void alauda_complete(struct urb *urb)
static int __alauda_read_page(struct mtd_info *mtd, loff_t from, void *buf,
void *oob)
static int alauda_read_page(struct mtd_info *mtd, loff_t from,
void *buf, u8 *oob, int *corrected, int *uncorrected)
static int alauda_write_page(struct mtd_info *mtd, loff_t to, void *buf,
void *oob)
static int alauda_erase_block(struct mtd_info *mtd, loff_t ofs)
static int alauda_read_oob(struct mtd_info *mtd, loff_t from, void *oob)
static int alauda_isbad(struct mtd_info *mtd, loff_t ofs)
static int alauda_bounce_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int alauda_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int alauda_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int __alauda_erase(struct mtd_info *mtd, struct erase_info *instr)
static int alauda_erase(struct mtd_info *mtd, struct erase_info *instr)
static int alauda_init_media(struct alauda *al)
static int alauda_check_media(struct alauda *al)
static int alauda_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void alauda_disconnect(struct usb_interface *interface)
static struct usb_driver alauda_driver = ;
static int __init alauda_init(void)
static void __exit alauda_exit(void)
module_init(alauda_init);
module_exit(alauda_exit);
MODULE_LICENSE("GPL");
