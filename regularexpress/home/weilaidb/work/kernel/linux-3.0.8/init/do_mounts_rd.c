int __initdata rd_prompt = 1;
static int __init prompt_ramdisk(char *str)
__setup("prompt_ramdisk=", prompt_ramdisk);
int __initdata rd_image_start;
static int __init ramdisk_start_setup(char *str)
__setup("ramdisk_start=", ramdisk_start_setup);
static int __init crd_load(int in_fd, int out_fd, decompress_fn deco);
static int __init
identify_ramdisk_image(int fd, int start_block, decompress_fn *decompressor)
int __init rd_load_image(char *from)
int __init rd_load_disk(int n)
static int exit_code;
static int decompress_error;
static int crd_infd, crd_outfd;
static int __init compr_fill(void *buf, unsigned int len)
static int __init compr_flush(void *window, unsigned int outcnt)
static void __init error(char *x)
static int __init crd_load(int in_fd, int out_fd, decompress_fn deco)
