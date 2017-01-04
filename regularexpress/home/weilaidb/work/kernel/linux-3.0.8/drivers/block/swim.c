#define CARDNAME "swim"
struct sector_header  __attribute__((packed));
#define DRIVER_VERSION "Version 0.2 (2008-10-30)"
#define REG(x)	unsigned char x, x ## _pad[0x200 - 1];
struct swim  __attribute__((packed));
#define swim_write(base, reg, v) 	out_8(&(base)->write_##reg, (v))
#define swim_read(base, reg)		in_8(&(base)->read_##reg)
struct iwm  __attribute__((packed));
#define iwm_write(base, reg, v) 	out_8(&(base)->reg, (v))
#define iwm_read(base, reg)		in_8(&(base)->reg)
#define SEEK_POSITIVE	0x070
#define SEEK_NEGATIVE	0x074
#define STEP		0x071
#define MOTOR_ON	0x072
#define MOTOR_OFF	0x076
#define INDEX		0x073
#define EJECT		0x077
#define SETMFM		0x171
#define SETGCR		0x175
#define RELAX		0x033
#define LSTRB		0x008
#define CA_MASK		0x077
#define READ_DATA_0	0x074
#define TWOMEG_DRIVE	0x075
#define SINGLE_SIDED	0x076
#define DRIVE_PRESENT	0x077
#define DISK_IN		0x170
#define WRITE_PROT	0x171
#define TRACK_ZERO	0x172
#define TACHO		0x173
#define READ_DATA_1	0x174
#define MFM_MODE	0x175
#define SEEK_COMPLETE	0x176
#define ONEMEG_MEDIA	0x177
#define MARK_BYTE	0x01
#define CRC_ZERO	0x02
#define RDDATA		0x04
#define SENSE		0x08
#define MOTEN		0x10
#define ERROR		0x20
#define DAT2BYTE	0x40
#define DAT1BYTE	0x80
#define S_INV_WDATA	0x01
#define S_3_5_SELECT	0x02
#define S_GCR		0x04
#define S_FCLK_DIV2	0x08
#define S_ERROR_CORR	0x10
#define S_IBM_DRIVE	0x20
#define S_GCR_WRITE	0x40
#define S_TIMEOUT	0x80
#define CLFIFO		0x01
#define ENBL1		0x02
#define ENBL2		0x04
#define ACTION		0x08
#define WRITE_MODE	0x10
#define HEDSEL		0x20
#define MOTON		0x80
enum drive_location ;
enum media_type ;
struct floppy_state ;
enum motor_action ;
enum head ;
#define FD_MAX_UNIT	2
struct swim_priv ;
extern int swim_read_sector_header(struct swim __iomem *base,
struct sector_header *header);
extern int swim_read_sector_data(struct swim __iomem *base,
unsigned char *data);
static DEFINE_MUTEX(swim_mutex);
static inline void set_swim_mode(struct swim __iomem *base, int enable)
static inline int get_swim_mode(struct swim __iomem *base)
static inline void swim_select(struct swim __iomem *base, int sel)
static inline void swim_action(struct swim __iomem *base, int action)
static inline int swim_readbit(struct swim __iomem *base, int bit)
static inline void swim_drive(struct swim __iomem *base,
enum drive_location location)
static inline void swim_motor(struct swim __iomem *base,
enum motor_action action)
static inline void swim_eject(struct swim __iomem *base)
static inline void swim_head(struct swim __iomem *base, enum head head)
static inline int swim_step(struct swim __iomem *base)
static inline int swim_track00(struct swim __iomem *base)
static inline int swim_seek(struct swim __iomem *base, int step)
static inline int swim_track(struct floppy_state *fs,  int track)
static int floppy_eject(struct floppy_state *fs)
static inline int swim_read_sector(struct floppy_state *fs,
int side, int track,
int sector, unsigned char *buffer)
static int floppy_read_sectors(struct floppy_state *fs,
int req_sector, int sectors_nb,
unsigned char *buffer)
static void redo_fd_request(struct request_queue *q)
static void do_fd_request(struct request_queue *q)
static struct floppy_struct floppy_type[4] = ;
static int get_floppy_geometry(struct floppy_state *fs, int type,
struct floppy_struct **g)
static void setup_medium(struct floppy_state *fs)
static int floppy_open(struct block_device *bdev, fmode_t mode)
static int floppy_unlocked_open(struct block_device *bdev, fmode_t mode)
static int floppy_release(struct gendisk *disk, fmode_t mode)
static int floppy_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static int floppy_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static unsigned int floppy_check_events(struct gendisk *disk,
unsigned int clearing)
static int floppy_revalidate(struct gendisk *disk)
static const struct block_device_operations floppy_fops = ;
static struct kobject *floppy_find(dev_t dev, int *part, void *data)
static int __devinit swim_add_floppy(struct swim_priv *swd,
enum drive_location location)
static int __devinit swim_floppy_init(struct swim_priv *swd)
static int __devinit swim_probe(struct platform_device *dev)
static int __devexit swim_remove(struct platform_device *dev)
static struct platform_driver swim_driver = ;
static int __init swim_init(void)
module_init(swim_init);
static void __exit swim_exit(void)
module_exit(swim_exit);
MODULE_DESCRIPTION("Driver for SWIM floppy controller");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Laurent Vivier <laurent@lvivier.info>");
MODULE_ALIAS_BLOCKDEV_MAJOR(FLOPPY_MAJOR);
