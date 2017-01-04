#define VIDEOCODEC_VERSION "v0.2"
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-4)");
#define dprintk(num, format, args...) \
do  while (0)
struct attached_list ;
struct codec_list ;
static struct codec_list *codeclist_top = NULL;
struct videocodec *
videocodec_attach (struct videocodec_master *master)
int
videocodec_detach (struct videocodec *codec)
int
videocodec_register (const struct videocodec *codec)
int
videocodec_unregister (const struct videocodec *codec)
static int proc_videocodecs_show(struct seq_file *m, void *v)
static int proc_videocodecs_open(struct inode *inode, struct file *file)
static const struct file_operations videocodecs_proc_fops = ;
static int __init
videocodec_init (void)
static void __exit
videocodec_exit (void)
EXPORT_SYMBOL(videocodec_attach);
EXPORT_SYMBOL(videocodec_detach);
EXPORT_SYMBOL(videocodec_register);
EXPORT_SYMBOL(videocodec_unregister);
module_init(videocodec_init);
module_exit(videocodec_exit);
MODULE_AUTHOR("Wolfgang Scherr <scherr@net4you.at>");
MODULE_DESCRIPTION("Intermediate API module for video codecs "
VIDEOCODEC_VERSION);
MODULE_LICENSE("GPL");
