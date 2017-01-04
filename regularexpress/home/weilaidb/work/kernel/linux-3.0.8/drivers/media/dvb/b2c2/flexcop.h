#define __FLEXCOP_H___
#define FC_LOG_PREFIX "b2c2-flexcop"
extern int b2c2_flexcop_debug;
#define dprintk(level,args...) \
do  while (0)
#define dprintk(level,args...)
#define deb_info(args...) dprintk(0x01, args)
#define deb_tuner(args...) dprintk(0x02, args)
#define deb_i2c(args...) dprintk(0x04, args)
#define deb_ts(args...) dprintk(0x08, args)
#define deb_sram(args...) dprintk(0x10, args)
#define deb_rdump(args...) dprintk(0x20, args)
