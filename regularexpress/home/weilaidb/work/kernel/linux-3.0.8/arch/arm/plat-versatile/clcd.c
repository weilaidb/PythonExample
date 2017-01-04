static struct clcd_panel vga = ;
static struct clcd_panel xvga = ;
static struct clcd_panel sanyo_tm38qv67a02a = ;
static struct clcd_panel sanyo_2_5_in = ;
static struct clcd_panel epson_l2f50113t00 = ;
static struct clcd_panel *panels[] = ;
struct clcd_panel *versatile_clcd_get_panel(const char *name)
int versatile_clcd_setup_dma(struct clcd_fb *fb, unsigned long framesize)
int versatile_clcd_mmap_dma(struct clcd_fb *fb, struct vm_area_struct *vma)
void versatile_clcd_remove_dma(struct clcd_fb *fb)
