#define PWC_DEC1_H
struct pwc_dec1_private
;
int  pwc_dec1_alloc(struct pwc_device *pwc);
void pwc_dec1_init(int type, int release, void *buffer, void *private_data);
void pwc_dec1_exit(void);
