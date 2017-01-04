#define DELTA 0x9E3779B9
static void TEA_transform(__u32 buf[4], __u32 const in[])
static __u32 dx_hack_hash_unsigned(const char *name, int len)
static __u32 dx_hack_hash_signed(const char *name, int len)
static void str2hashbuf_signed(const char *msg, int len, __u32 *buf, int num)
static void str2hashbuf_unsigned(const char *msg, int len, __u32 *buf, int num)
int ext4fs_dirhash(const char *name, int len, struct dx_hash_info *hinfo)
