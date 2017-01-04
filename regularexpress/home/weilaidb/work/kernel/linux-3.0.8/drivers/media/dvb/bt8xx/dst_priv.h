struct dst_gpio_enable ;
struct dst_gpio_output ;
struct dst_gpio_read ;
union dst_gpio_packet ;
#define DST_IG_ENABLE	0
#define DST_IG_WRITE	1
#define DST_IG_READ	2
#define DST_IG_TS       3
struct bt878;
int bt878_device_control(struct bt878 *bt, unsigned int cmd, union dst_gpio_packet *mp);
