#define __IBM_NEWEMAC_RGMII_H
#define RGMII_STANDARD		0
#define RGMII_AXON		1
struct rgmii_regs ;
struct rgmii_instance ;
extern int rgmii_init(void);
extern void rgmii_exit(void);
extern int rgmii_attach(struct platform_device *ofdev, int input, int mode);
extern void rgmii_detach(struct platform_device *ofdev, int input);
extern void rgmii_get_mdio(struct platform_device *ofdev, int input);
extern void rgmii_put_mdio(struct platform_device *ofdev, int input);
extern void rgmii_set_speed(struct platform_device *ofdev, int input, int speed);
extern int rgmii_get_regs_len(struct platform_device *ofdev);
extern void *rgmii_dump_regs(struct platform_device *ofdev, void *buf);
# define rgmii_init()		0
# define rgmii_exit()		do  while(0)
# define rgmii_attach(x,y,z)	(-ENXIO)
# define rgmii_detach(x,y)	do  while(0)
# define rgmii_get_mdio(o,i)	do  while (0)
# define rgmii_put_mdio(o,i)	do  while (0)
# define rgmii_set_speed(x,y,z)	do  while(0)
# define rgmii_get_regs_len(x)	0
# define rgmii_dump_regs(x,buf)	(buf)
