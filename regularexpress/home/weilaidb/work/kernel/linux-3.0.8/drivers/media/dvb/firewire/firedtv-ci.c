#define EN50221_TAG_APP_INFO_ENQUIRY	0x9f8020
#define EN50221_TAG_CA_INFO_ENQUIRY	0x9f8030
#define EN50221_TAG_CA_PMT		0x9f8032
#define EN50221_TAG_ENTER_MENU		0x9f8022
static int fdtv_ca_ready(struct firedtv_tuner_status *stat)
static int fdtv_get_ca_flags(struct firedtv_tuner_status *stat)
static int fdtv_ca_reset(struct firedtv *fdtv)
static int fdtv_ca_get_caps(void *arg)
static int fdtv_ca_get_slot_info(struct firedtv *fdtv, void *arg)
static int fdtv_ca_app_info(struct firedtv *fdtv, void *arg)
static int fdtv_ca_info(struct firedtv *fdtv, void *arg)
static int fdtv_ca_get_mmi(struct firedtv *fdtv, void *arg)
static int fdtv_ca_get_msg(struct firedtv *fdtv, void *arg)
static int fdtv_ca_pmt(struct firedtv *fdtv, void *arg)
static int fdtv_ca_send_msg(struct firedtv *fdtv, void *arg)
static int fdtv_ca_ioctl(struct file *file, unsigned int cmd, void *arg)
static unsigned int fdtv_ca_io_poll(struct file *file, poll_table *wait)
static const struct file_operations fdtv_ca_fops = ;
static struct dvb_device fdtv_ca = ;
int fdtv_ca_register(struct firedtv *fdtv)
void fdtv_ca_release(struct firedtv *fdtv)
