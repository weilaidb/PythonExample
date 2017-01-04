#define AOUT_MAGIC	0x010b
#define get_16be(x)	((((unsigned char *)(x))[0] << 8) \
+ ((unsigned char *)(x))[1])
#define put_16be(x, v)	(((unsigned char *)(x))[0] = (v) >> 8, \
((unsigned char *)(x))[1] = (v) & 0xff)
#define get_32be(x)	((((unsigned char *)(x))[0] << 24) \
+ (((unsigned char *)(x))[1] << 16) \
+ (((unsigned char *)(x))[2] << 8) \
+ ((unsigned char *)(x))[3])
int
main(int ac, char **av)
