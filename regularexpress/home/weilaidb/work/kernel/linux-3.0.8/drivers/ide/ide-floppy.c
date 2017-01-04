#define IDEFLOPPY_MAX_PC_RETRIES	3
#define CAPACITY_INVALID	0x00
#define CAPACITY_UNFORMATTED	0x01
#define CAPACITY_CURRENT	0x02
#define CAPACITY_NO_CARTRIDGE	0x03
#define IDEFLOPPY_PC_DELAY	(HZ/20)
static int ide_floppy_callback(ide_drive_t *drive, int dsc)
static void ide_floppy_report_error(struct ide_disk_obj *floppy,
struct ide_atapi_pc *pc)
static ide_startstop_t ide_floppy_issue_pc(ide_drive_t *drive,
struct ide_cmd *cmd,
struct ide_atapi_pc *pc)
void ide_floppy_create_read_capacity_cmd(struct ide_atapi_pc *pc)
void ide_floppy_create_mode_sense_cmd(struct ide_atapi_pc *pc, u8 page_code)
static void idefloppy_create_rw_cmd(ide_drive_t *drive,
struct ide_atapi_pc *pc, struct request *rq,
unsigned long sector)
static void idefloppy_blockpc_cmd(struct ide_disk_obj *floppy,
struct ide_atapi_pc *pc, struct request *rq)
static ide_startstop_t ide_floppy_do_request(ide_drive_t *drive,
struct request *rq, sector_t block)
static int ide_floppy_get_flexible_disk_page(ide_drive_t *drive,
struct ide_atapi_pc *pc)
static int ide_floppy_get_capacity(ide_drive_t *drive)
static void ide_floppy_setup(ide_drive_t *drive)
static void ide_floppy_flush(ide_drive_t *drive)
static int ide_floppy_init_media(ide_drive_t *drive, struct gendisk *disk)
const struct ide_disk_ops ide_atapi_disk_ops = ;
