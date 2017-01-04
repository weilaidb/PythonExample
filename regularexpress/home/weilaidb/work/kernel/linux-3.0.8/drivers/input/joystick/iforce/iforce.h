#define IFORCE_MAX_LENGTH	16
#define IFORCE_232	1
#define IFORCE_USB	2
#define IFORCE_EFFECTS_MAX	32
#define FF_MOD1_IS_USED		0
#define FF_MOD2_IS_USED		1
#define FF_CORE_IS_USED		2
#define FF_CORE_IS_PLAYED	3
#define FF_CORE_SHOULD_PLAY	4
#define FF_CORE_UPDATE		5
#define FF_MODCORE_CNT		6
struct iforce_core_effect ;
#define FF_CMD_EFFECT		0x010e
#define FF_CMD_ENVELOPE		0x0208
#define FF_CMD_MAGNITUDE	0x0303
#define FF_CMD_PERIOD		0x0407
#define FF_CMD_CONDITION	0x050a
#define FF_CMD_AUTOCENTER	0x4002
#define FF_CMD_PLAY		0x4103
#define FF_CMD_ENABLE		0x4201
#define FF_CMD_GAIN		0x4301
#define FF_CMD_QUERY		0xff01
#define XMIT_SIZE		256
#define XMIT_INC(var, n)	(var)+=n; (var)&= XMIT_SIZE -1
#define IFORCE_XMIT_RUNNING	0
#define IFORCE_XMIT_AGAIN	1
struct iforce_device ;
struct iforce ;
#define HI(a)	((unsigned char)((a) >> 8))
#define LO(a)	((unsigned char)((a) & 0xff))
#define HIFIX80(a) ((unsigned char)(((a)<0? (a)+255 : (a))>>8))
#define TIME_SCALE(a)	(a)
void iforce_serial_xmit(struct iforce *iforce);
void iforce_usb_xmit(struct iforce *iforce);
int iforce_init_device(struct iforce *iforce);
int iforce_control_playback(struct iforce*, u16 id, unsigned int);
void iforce_process_packet(struct iforce *iforce, u16 cmd, unsigned char *data);
int iforce_send_packet(struct iforce *iforce, u16 cmd, unsigned char* data);
void iforce_dump_packet(char *msg, u16 cmd, unsigned char *data) ;
int iforce_get_id_packet(struct iforce *iforce, char *packet);
int iforce_upload_periodic(struct iforce *, struct ff_effect *, struct ff_effect *);
int iforce_upload_constant(struct iforce *, struct ff_effect *, struct ff_effect *);
int iforce_upload_condition(struct iforce *, struct ff_effect *, struct ff_effect *);
extern struct serio_driver iforce_serio_drv;
extern struct usb_driver iforce_usb_driver;
