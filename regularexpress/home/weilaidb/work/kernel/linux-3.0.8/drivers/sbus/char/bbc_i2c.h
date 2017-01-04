#define _BBC_I2C_H
struct bbc_i2c_client ;
enum fan_action ;
struct bbc_cpu_temperature ;
struct bbc_fan_control ;
#define NUM_CHILDREN	8
struct bbc_i2c_bus ;
extern struct platform_device *bbc_i2c_getdev(struct bbc_i2c_bus *, int);
extern struct bbc_i2c_client *bbc_i2c_attach(struct bbc_i2c_bus *bp, struct platform_device *);
extern void bbc_i2c_detach(struct bbc_i2c_client *);
extern int bbc_i2c_writeb(struct bbc_i2c_client *, unsigned char val, int off);
extern int bbc_i2c_readb(struct bbc_i2c_client *, unsigned char *byte, int off);
extern int bbc_i2c_write_buf(struct bbc_i2c_client *, char *buf, int len, int off);
extern int bbc_i2c_read_buf(struct bbc_i2c_client *, char *buf, int len, int off);
