#define LINUX_SPI_MAX7301_H
struct max7301 ;
struct max7301_platform_data ;
extern int __max730x_remove(struct device *dev);
extern int __max730x_probe(struct max7301 *ts);
