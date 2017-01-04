#define __DS1603_H
struct ds_defs ;
extern struct ds_defs *ds1603;
void ds1603_set_trimmer(unsigned int);
void ds1603_enable(void);
void ds1603_disable(void);
void ds1603_init(struct ds_defs *);
#define TRIMMER_DEFAULT	3
#define TRIMMER_DISABLE_RTC 0
