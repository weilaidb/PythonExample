#define CFAG12864BFB_NAME "cfag12864bfb"
static struct fb_fix_screeninfo cfag12864bfb_fix __devinitdata = ;
static struct fb_var_screeninfo cfag12864bfb_var __devinitdata = ;
static int cfag12864bfb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static struct fb_ops cfag12864bfb_ops = ;
static int __devinit cfag12864bfb_probe(struct platform_device *device)
static int __devexit cfag12864bfb_remove(struct platform_device *device)
static struct platform_driver cfag12864bfb_driver = ;
static struct platform_device *cfag12864bfb_device;
static int __init cfag12864bfb_init(void)
static void __exit cfag12864bfb_exit(void)
module_init(cfag12864bfb_init);
module_exit(cfag12864bfb_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Miguel Ojeda Sandonis <miguel.ojeda.sandonis@gmail.com>");
MODULE_DESCRIPTION("cfag12864b LCD framebuffer driver");
