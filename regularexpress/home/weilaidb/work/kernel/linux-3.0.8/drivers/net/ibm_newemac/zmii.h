#define __IBM_NEWEMAC_ZMII_H
struct zmii_regs ;
struct zmii_instance ;
extern int zmii_init(void);
extern void zmii_exit(void);
extern int zmii_attach(struct platform_device *ofdev, int input, int *mode);
extern void zmii_detach(struct platform_device *ofdev, int input);
extern void zmii_get_mdio(struct platform_device *ofdev, int input);
extern void zmii_put_mdio(struct platform_device *ofdev, int input);
extern void zmii_set_speed(struct platform_device *ofdev, int input, int speed);
extern int zmii_get_regs_len(struct platform_device *ocpdev);
extern void *zmii_dump_regs(struct platform_device *ofdev, void *buf);
# define zmii_init()		0
# define zmii_exit()		do  while(0)
# define zmii_attach(x,y,z)	(-ENXIO)
# define zmii_detach(x,y)	do  while(0)
# define zmii_get_mdio(x,y)	do  while(0)
# define zmii_put_mdio(x,y)	do  while(0)
# define zmii_set_speed(x,y,z)	do  while(0)
# define zmii_get_regs_len(x)	0
# define zmii_dump_regs(x,buf)	(buf)
