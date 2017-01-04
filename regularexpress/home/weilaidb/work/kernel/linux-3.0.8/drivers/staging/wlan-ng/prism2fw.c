#define PRISM2_USB_FWFILE	"prism2_ru.fw"
MODULE_FIRMWARE(PRISM2_USB_FWFILE);
#define S3DATA_MAX		5000
#define S3PLUG_MAX		200
#define S3CRC_MAX		200
#define S3INFO_MAX		50
#define S3ADDR_PLUG		(0xff000000UL)
#define S3ADDR_CRC		(0xff100000UL)
#define S3ADDR_INFO		(0xff200000UL)
#define S3ADDR_START		(0xff400000UL)
#define CHUNKS_MAX		100
#define WRITESIZE_MAX		4096
struct s3datarec ;
struct s3plugrec ;
struct s3crcrec ;
struct s3inforec ;
struct pda ;
struct imgchunk ;
unsigned int ns3data;
struct s3datarec s3data[S3DATA_MAX];
unsigned int ns3plug;
struct s3plugrec s3plug[S3PLUG_MAX];
unsigned int ns3crc;
struct s3crcrec s3crc[S3CRC_MAX];
unsigned int ns3info;
struct s3inforec s3info[S3INFO_MAX];
u32 startaddr;
unsigned int nfchunks;
struct imgchunk fchunk[CHUNKS_MAX];
struct pda pda;
hfa384x_compident_t nicid;
hfa384x_caplevel_t rfid;
hfa384x_caplevel_t macid;
hfa384x_caplevel_t priid;
static int prism2_fwapply(const struct ihex_binrec *rfptr,
wlandevice_t *wlandev);
static int read_fwfile(const struct ihex_binrec *rfptr);
static int mkimage(struct imgchunk *clist, unsigned int *ccnt);
static int read_cardpda(struct pda *pda, wlandevice_t *wlandev);
static int mkpdrlist(struct pda *pda);
static int plugimage(struct imgchunk *fchunk, unsigned int nfchunks,
struct s3plugrec *s3plug, unsigned int ns3plug, struct pda * pda);
static int crcimage(struct imgchunk *fchunk, unsigned int nfchunks,
struct s3crcrec *s3crc, unsigned int ns3crc);
static int writeimage(wlandevice_t *wlandev, struct imgchunk *fchunk,
unsigned int nfchunks);
static void free_chunks(struct imgchunk *fchunk, unsigned int *nfchunks);
static void free_srecs(void);
static int validate_identity(void);
int prism2_fwtry(struct usb_device *udev, wlandevice_t *wlandev)
int prism2_fwapply(const struct ihex_binrec *rfptr, wlandevice_t *wlandev)
int crcimage(struct imgchunk *fchunk, unsigned int nfchunks,
struct s3crcrec *s3crc, unsigned int ns3crc)
void free_chunks(struct imgchunk *fchunk, unsigned int *nfchunks)
void free_srecs(void)
int mkimage(struct imgchunk *clist, unsigned int *ccnt)
int mkpdrlist(struct pda *pda)
int plugimage(struct imgchunk *fchunk, unsigned int nfchunks,
struct s3plugrec *s3plug, unsigned int ns3plug, struct pda * pda)
int read_cardpda(struct pda *pda, wlandevice_t *wlandev)
int read_fwfile(const struct ihex_binrec *record)
int writeimage(wlandevice_t *wlandev, struct imgchunk *fchunk,
unsigned int nfchunks)
int validate_identity(void)
