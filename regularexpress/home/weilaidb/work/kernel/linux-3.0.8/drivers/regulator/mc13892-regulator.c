#define MC13892_REVISION			7
#define MC13892_POWERCTL0			13
#define MC13892_POWERCTL0_USEROFFSPI		3
#define MC13892_POWERCTL0_VCOINCELLVSEL		20
#define MC13892_POWERCTL0_VCOINCELLVSEL_M	(7<<20)
#define MC13892_POWERCTL0_VCOINCELLEN		(1<<23)
#define MC13892_SWITCHERS0_SWxHI		(1<<23)
#define MC13892_SWITCHERS0			24
#define MC13892_SWITCHERS0_SW1VSEL		0
#define MC13892_SWITCHERS0_SW1VSEL_M		(0x1f<<0)
#define MC13892_SWITCHERS0_SW1HI		(1<<23)
#define MC13892_SWITCHERS0_SW1EN		0
#define MC13892_SWITCHERS1			25
#define MC13892_SWITCHERS1_SW2VSEL		0
#define MC13892_SWITCHERS1_SW2VSEL_M		(0x1f<<0)
#define MC13892_SWITCHERS1_SW2HI		(1<<23)
#define MC13892_SWITCHERS1_SW2EN		0
#define MC13892_SWITCHERS2			26
#define MC13892_SWITCHERS2_SW3VSEL		0
#define MC13892_SWITCHERS2_SW3VSEL_M		(0x1f<<0)
#define MC13892_SWITCHERS2_SW3HI		(1<<23)
#define MC13892_SWITCHERS2_SW3EN		0
#define MC13892_SWITCHERS3			27
#define MC13892_SWITCHERS3_SW4VSEL		0
#define MC13892_SWITCHERS3_SW4VSEL_M		(0x1f<<0)
#define MC13892_SWITCHERS3_SW4HI		(1<<23)
#define MC13892_SWITCHERS3_SW4EN		0
#define MC13892_SWITCHERS4			28
#define MC13892_SWITCHERS4_SW1MODE		0
#define MC13892_SWITCHERS4_SW1MODE_AUTO		(8<<0)
#define MC13892_SWITCHERS4_SW1MODE_M		(0xf<<0)
#define MC13892_SWITCHERS4_SW2MODE		10
#define MC13892_SWITCHERS4_SW2MODE_AUTO		(8<<10)
#define MC13892_SWITCHERS4_SW2MODE_M		(0xf<<10)
#define MC13892_SWITCHERS5			29
#define MC13892_SWITCHERS5_SW3MODE		0
#define MC13892_SWITCHERS5_SW3MODE_AUTO		(8<<0)
#define MC13892_SWITCHERS5_SW3MODE_M		(0xf<<0)
#define MC13892_SWITCHERS5_SW4MODE		8
#define MC13892_SWITCHERS5_SW4MODE_AUTO		(8<<8)
#define MC13892_SWITCHERS5_SW4MODE_M		(0xf<<8)
#define MC13892_SWITCHERS5_SWBSTEN		(1<<20)
#define MC13892_REGULATORSETTING0		30
#define MC13892_REGULATORSETTING0_VGEN1VSEL	0
#define MC13892_REGULATORSETTING0_VDIGVSEL	4
#define MC13892_REGULATORSETTING0_VGEN2VSEL	6
#define MC13892_REGULATORSETTING0_VPLLVSEL	9
#define MC13892_REGULATORSETTING0_VUSB2VSEL	11
#define MC13892_REGULATORSETTING0_VGEN3VSEL	14
#define MC13892_REGULATORSETTING0_VCAMVSEL	16
#define MC13892_REGULATORSETTING0_VGEN1VSEL_M	(3<<0)
#define MC13892_REGULATORSETTING0_VDIGVSEL_M	(3<<4)
#define MC13892_REGULATORSETTING0_VGEN2VSEL_M	(7<<6)
#define MC13892_REGULATORSETTING0_VPLLVSEL_M	(3<<9)
#define MC13892_REGULATORSETTING0_VUSB2VSEL_M	(3<<11)
#define MC13892_REGULATORSETTING0_VGEN3VSEL_M	(1<<14)
#define MC13892_REGULATORSETTING0_VCAMVSEL_M	(3<<16)
#define MC13892_REGULATORSETTING1		31
#define MC13892_REGULATORSETTING1_VVIDEOVSEL	2
#define MC13892_REGULATORSETTING1_VAUDIOVSEL	4
#define MC13892_REGULATORSETTING1_VSDVSEL	6
#define MC13892_REGULATORSETTING1_VVIDEOVSEL_M	(3<<2)
#define MC13892_REGULATORSETTING1_VAUDIOVSEL_M	(3<<4)
#define MC13892_REGULATORSETTING1_VSDVSEL_M	(7<<6)
#define MC13892_REGULATORMODE0			32
#define MC13892_REGULATORMODE0_VGEN1EN		(1<<0)
#define MC13892_REGULATORMODE0_VGEN1STDBY	(1<<1)
#define MC13892_REGULATORMODE0_VGEN1MODE	(1<<2)
#define MC13892_REGULATORMODE0_VIOHIEN		(1<<3)
#define MC13892_REGULATORMODE0_VIOHISTDBY	(1<<4)
#define MC13892_REGULATORMODE0_VIOHIMODE	(1<<5)
#define MC13892_REGULATORMODE0_VDIGEN		(1<<9)
#define MC13892_REGULATORMODE0_VDIGSTDBY	(1<<10)
#define MC13892_REGULATORMODE0_VDIGMODE		(1<<11)
#define MC13892_REGULATORMODE0_VGEN2EN		(1<<12)
#define MC13892_REGULATORMODE0_VGEN2STDBY	(1<<13)
#define MC13892_REGULATORMODE0_VGEN2MODE	(1<<14)
#define MC13892_REGULATORMODE0_VPLLEN		(1<<15)
#define MC13892_REGULATORMODE0_VPLLSTDBY	(1<<16)
#define MC13892_REGULATORMODE0_VPLLMODE		(1<<17)
#define MC13892_REGULATORMODE0_VUSB2EN		(1<<18)
#define MC13892_REGULATORMODE0_VUSB2STDBY	(1<<19)
#define MC13892_REGULATORMODE0_VUSB2MODE	(1<<20)
#define MC13892_REGULATORMODE1			33
#define MC13892_REGULATORMODE1_VGEN3EN		(1<<0)
#define MC13892_REGULATORMODE1_VGEN3STDBY	(1<<1)
#define MC13892_REGULATORMODE1_VGEN3MODE	(1<<2)
#define MC13892_REGULATORMODE1_VCAMEN		(1<<6)
#define MC13892_REGULATORMODE1_VCAMSTDBY	(1<<7)
#define MC13892_REGULATORMODE1_VCAMMODE		(1<<8)
#define MC13892_REGULATORMODE1_VCAMCONFIGEN	(1<<9)
#define MC13892_REGULATORMODE1_VVIDEOEN		(1<<12)
#define MC13892_REGULATORMODE1_VVIDEOSTDBY	(1<<13)
#define MC13892_REGULATORMODE1_VVIDEOMODE	(1<<14)
#define MC13892_REGULATORMODE1_VAUDIOEN		(1<<15)
#define MC13892_REGULATORMODE1_VAUDIOSTDBY	(1<<16)
#define MC13892_REGULATORMODE1_VAUDIOMODE	(1<<17)
#define MC13892_REGULATORMODE1_VSDEN		(1<<18)
#define MC13892_REGULATORMODE1_VSDSTDBY		(1<<19)
#define MC13892_REGULATORMODE1_VSDMODE		(1<<20)
#define MC13892_POWERMISC			34
#define MC13892_POWERMISC_GPO1EN		(1<<6)
#define MC13892_POWERMISC_GPO2EN		(1<<8)
#define MC13892_POWERMISC_GPO3EN		(1<<10)
#define MC13892_POWERMISC_GPO4EN		(1<<12)
#define MC13892_POWERMISC_PWGT1SPIEN		(1<<15)
#define MC13892_POWERMISC_PWGT2SPIEN		(1<<16)
#define MC13892_POWERMISC_GPO4ADINEN		(1<<21)
#define MC13892_POWERMISC_PWGTSPI_M		(3 << 15)
#define MC13892_USB1				50
#define MC13892_USB1_VUSBEN			(1<<3)
static const int mc13892_vcoincell[] = ;
static const int mc13892_sw1[] = ;
static const int mc13892_sw[] = ;
static const int mc13892_swbst[] = ;
static const int mc13892_viohi[] = ;
static const int mc13892_vpll[] = ;
static const int mc13892_vdig[] = ;
static const int mc13892_vsd[] = ;
static const int mc13892_vusb2[] = ;
static const int mc13892_vvideo[] = ;
static const int mc13892_vaudio[] = ;
static const int mc13892_vcam[] = ;
static const int mc13892_vgen1[] = ;
static const int mc13892_vgen2[] = ;
static const int mc13892_vgen3[] = ;
static const int mc13892_vusb[] = ;
static const int mc13892_gpo[] = ;
static const int mc13892_pwgtdrv[] = ;
static struct regulator_ops mc13892_gpo_regulator_ops;
static struct regulator_ops mc13892_sw_regulator_ops;
#define MC13892_FIXED_DEFINE(name, reg, voltages)		\
MC13xxx_FIXED_DEFINE(MC13892_, name, reg, voltages,	\
mc13xxx_fixed_regulator_ops)
#define MC13892_GPO_DEFINE(name, reg, voltages)			\
MC13xxx_GPO_DEFINE(MC13892_, name, reg, voltages,	\
mc13892_gpo_regulator_ops)
#define MC13892_SW_DEFINE(name, reg, vsel_reg, voltages)	\
MC13xxx_DEFINE(MC13892_, name, reg, vsel_reg, voltages, \
mc13892_sw_regulator_ops)
#define MC13892_DEFINE_REGU(name, reg, vsel_reg, voltages)	\
MC13xxx_DEFINE(MC13892_, name, reg, vsel_reg, voltages, \
mc13xxx_regulator_ops)
static struct mc13xxx_regulator mc13892_regulators[] = ;
static int mc13892_powermisc_rmw(struct mc13xxx_regulator_priv *priv, u32 mask,
u32 val)
static int mc13892_gpo_regulator_enable(struct regulator_dev *rdev)
static int mc13892_gpo_regulator_disable(struct regulator_dev *rdev)
static int mc13892_gpo_regulator_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops mc13892_gpo_regulator_ops = ;
static int mc13892_sw_regulator_get_voltage(struct regulator_dev *rdev)
static int mc13892_sw_regulator_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static struct regulator_ops mc13892_sw_regulator_ops = ;
static int mc13892_vcam_set_mode(struct regulator_dev *rdev, unsigned int mode)
static unsigned int mc13892_vcam_get_mode(struct regulator_dev *rdev)
static int __devinit mc13892_regulator_probe(struct platform_device *pdev)
static int __devexit mc13892_regulator_remove(struct platform_device *pdev)
static struct platform_driver mc13892_regulator_driver = ;
static int __init mc13892_regulator_init(void)
subsys_initcall(mc13892_regulator_init);
static void __exit mc13892_regulator_exit(void)
module_exit(mc13892_regulator_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Yong Shen <yong.shen@linaro.org>");
MODULE_DESCRIPTION("Regulator Driver for Freescale MC13892 PMIC");
MODULE_ALIAS("platform:mc13892-regulator");
