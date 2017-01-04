struct ili9320_reg ;
struct ili9320;
struct ili9320_client ;
struct  ili9320_spi ;
struct ili9320 ;
extern int ili9320_write(struct ili9320 *ili,
unsigned int reg, unsigned int value);
extern int ili9320_write_regs(struct ili9320 *ili,
struct ili9320_reg *values,
int nr_values);
extern int ili9320_probe_spi(struct spi_device *spi,
struct ili9320_client *cli);
extern int ili9320_remove(struct ili9320 *lcd);
extern void ili9320_shutdown(struct ili9320 *lcd);
extern int ili9320_suspend(struct ili9320 *lcd, pm_message_t state);
extern int ili9320_resume(struct ili9320 *lcd);
