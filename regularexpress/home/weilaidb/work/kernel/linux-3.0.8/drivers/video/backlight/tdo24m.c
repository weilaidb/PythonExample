#define POWER_IS_ON(pwr)	((pwr) <= FB_BLANK_NORMAL)
#define TDO24M_SPI_BUFF_SIZE	(4)
#define MODE_QVGA	0
#define MODE_VGA	1
struct tdo24m ;
#define CMD0(x)		((0 << 30) | (x))
#define CMD1(x, x1)	((1 << 30) | ((x) << 9) | 0x100 | (x1))
#define CMD2(x, x1, x2)	((2 << 30) | ((x) << 18) | 0x20000 |\
((x1) << 9) | 0x100 | (x2))
#define CMD_NULL	(-1)
static uint32_t lcd_panel_reset[] = ;
static uint32_t lcd_panel_on[] = ;
static uint32_t lcd_panel_off[] = ;
static uint32_t lcd_vga_pass_through_tdo24m[] = ;
static uint32_t lcd_qvga_pass_through_tdo24m[] = ;
static uint32_t lcd_vga_transfer_tdo24m[] = ;
static uint32_t lcd_qvga_transfer[] = ;
static uint32_t lcd_vga_pass_through_tdo35s[] = ;
static uint32_t lcd_qvga_pass_through_tdo35s[] = ;
static uint32_t lcd_vga_transfer_tdo35s[] = ;
static uint32_t lcd_panel_config[] = ;
static int tdo24m_writes(struct tdo24m *lcd, uint32_t *array)
static int tdo24m_adj_mode(struct tdo24m *lcd, int mode)
static int tdo35s_adj_mode(struct tdo24m *lcd, int mode)
static int tdo24m_power_on(struct tdo24m *lcd)
static int tdo24m_power_off(struct tdo24m *lcd)
static int tdo24m_power(struct tdo24m *lcd, int power)
static int tdo24m_set_power(struct lcd_device *ld, int power)
static int tdo24m_get_power(struct lcd_device *ld)
static int tdo24m_set_mode(struct lcd_device *ld, struct fb_videomode *m)
static struct lcd_ops tdo24m_ops = ;
static int __devinit tdo24m_probe(struct spi_device *spi)
static int __devexit tdo24m_remove(struct spi_device *spi)
static int tdo24m_suspend(struct spi_device *spi, pm_message_t state)
static int tdo24m_resume(struct spi_device *spi)
#define tdo24m_suspend	NULL
#define tdo24m_resume	NULL
static void tdo24m_shutdown(struct spi_device *spi)
static struct spi_driver tdo24m_driver = ;
static int __init tdo24m_init(void)
module_init(tdo24m_init);
static void __exit tdo24m_exit(void)
module_exit(tdo24m_exit);
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>");
MODULE_DESCRIPTION("Driver for Toppoly TDO24M LCD Panel");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:tdo24m");
