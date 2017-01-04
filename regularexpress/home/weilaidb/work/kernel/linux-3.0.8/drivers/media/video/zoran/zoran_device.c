#define IRQ_MASK ( ZR36057_ISR_GIRQ0 | \
ZR36057_ISR_GIRQ1 | \
ZR36057_ISR_JPEGRepIRQ )
static int lml33dpath;
module_param(lml33dpath, bool, 0644);
MODULE_PARM_DESC(lml33dpath,
"Use digital path capture mode (on LML33 cards)");
static void
zr36057_init_vfe (struct zoran *zr);
void
GPIO (struct zoran *zr,
int           bit,
unsigned int  value)
int
post_office_wait (struct zoran *zr)
int
post_office_write (struct zoran *zr,
unsigned int  guest,
unsigned int  reg,
unsigned int  value)
int
post_office_read (struct zoran *zr,
unsigned int  guest,
unsigned int  reg)
static void
dump_guests (struct zoran *zr)
static inline unsigned long
get_time (void)
void
detect_guest_activity (struct zoran *zr)
void
jpeg_codec_sleep (struct zoran *zr,
int           sleep)
int
jpeg_codec_reset (struct zoran *zr)
static void
zr36057_adjust_vfe (struct zoran          *zr,
enum zoran_codec_mode  mode)
static void
zr36057_set_vfe (struct zoran              *zr,
int                        video_width,
int                        video_height,
const struct zoran_format *format)
void
zr36057_overlay (struct zoran *zr,
int           on)
void write_overlay_mask(struct zoran_fh *fh, struct v4l2_clip *vp, int count)
void
zr36057_set_memgrab (struct zoran *zr,
int           mode)
int
wait_grab_pending (struct zoran *zr)
static inline void
set_frame (struct zoran *zr,
int           val)
static void
set_videobus_dir (struct zoran *zr,
int           val)
static void
init_jpeg_queue (struct zoran *zr)
static void
zr36057_set_jpg (struct zoran          *zr,
enum zoran_codec_mode  mode)
void
print_interrupts (struct zoran *zr)
void
clear_interrupt_counters (struct zoran *zr)
static u32
count_reset_interrupt (struct zoran *zr)
void
jpeg_start (struct zoran *zr)
void
zr36057_enable_jpg (struct zoran          *zr,
enum zoran_codec_mode  mode)
void
zoran_feed_stat_com (struct zoran *zr)
static void
zoran_reap_stat_com (struct zoran *zr)
static void zoran_restart(struct zoran *zr)
static void
error_handler (struct zoran *zr,
u32           astat,
u32           stat)
irqreturn_t
zoran_irq (int             irq,
void           *dev_id)
void
zoran_set_pci_master (struct zoran *zr,
int           set_master)
void
zoran_init_hardware (struct zoran *zr)
void
zr36057_restart (struct zoran *zr)
static void
zr36057_init_vfe (struct zoran *zr)
