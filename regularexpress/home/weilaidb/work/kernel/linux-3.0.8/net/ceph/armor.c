int ceph_armor(char *dst, const char *src, const char *end);
int ceph_unarmor(char *dst, const char *src, const char *end);
static const char *pem_key =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
static int encode_bits(int c)
static int decode_bits(char c)
int ceph_armor(char *dst, const char *src, const char *end)
int ceph_unarmor(char *dst, const char *src, const char *end)
