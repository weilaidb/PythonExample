#define PWC_DEC23_H
struct pwc_dec23_private
;
int pwc_dec23_alloc(struct pwc_device *pwc);
int pwc_dec23_init(struct pwc_device *pwc, int type, unsigned char *cmd);
void pwc_dec23_exit(void);
void pwc_dec23_decompress(const struct pwc_device *pwc,
const void *src,
void *dst,
int flags);
