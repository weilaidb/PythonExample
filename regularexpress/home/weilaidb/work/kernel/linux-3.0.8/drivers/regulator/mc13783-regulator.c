#define MC13783_REG_SWITCHERS5			29
#define MC13783_REG_SWITCHERS5_SW3EN			(1 << 20)
#define MC13783_REG_SWITCHERS5_SW3VSEL			18
#define MC13783_REG_SWITCHERS5_SW3VSEL_M		(3 << 18)
#define MC13783_REG_REGULATORSETTING0		30
#define MC13783_REG_REGULATORSETTING0_VIOLOVSEL		2
#define MC13783_REG_REGULATORSETTING0_VDIGVSEL		4
#define MC13783_REG_REGULATORSETTING0_VGENVSEL		6
#define MC13783_REG_REGULATORSETTING0_VRFDIGVSEL	9
#define MC13783_REG_REGULATORSETTING0_VRFREFVSEL	11
#define MC13783_REG_REGULATORSETTING0_VRFCPVSEL		13
#define MC13783_REG_REGULATORSETTING0_VSIMVSEL		14
#define MC13783_REG_REGULATORSETTING0_VESIMVSEL		15
#define MC13783_REG_REGULATORSETTING0_VCAMVSEL		16
#define MC13783_REG_REGULATORSETTING0_VIOLOVSEL_M	(3 << 2)
#define MC13783_REG_REGULATORSETTING0_VDIGVSEL_M	(3 << 4)
#define MC13783_REG_REGULATORSETTING0_VGENVSEL_M	(7 << 6)
#define MC13783_REG_REGULATORSETTING0_VRFDIGVSEL_M	(3 << 9)
#define MC13783_REG_REGULATORSETTING0_VRFREFVSEL_M	(3 << 11)
#define MC13783_REG_REGULATORSETTING0_VRFCPVSEL_M	(1 << 13)
#define MC13783_REG_REGULATORSETTING0_VSIMVSEL_M	(1 << 14)
#define MC13783_REG_REGULATORSETTING0_VESIMVSEL_M	(1 << 15)
#define MC13783_REG_REGULATORSETTING0_VCAMVSEL_M	(7 << 16)
#define MC13783_REG_REGULATORSETTING1		31
#define MC13783_REG_REGULATORSETTING1_VVIBVSEL		0
#define MC13783_REG_REGULATORSETTING1_VRF1VSEL		2
#define MC13783_REG_REGULATORSETTING1_VRF2VSEL		4
#define MC13783_REG_REGULATORSETTING1_VMMC1VSEL		6
#define MC13783_REG_REGULATORSETTING1_VMMC2VSEL		9
#define MC13783_REG_REGULATORSETTING1_VVIBVSEL_M	(3 << 0)
#define MC13783_REG_REGULATORSETTING1_VRF1VSEL_M	(3 << 2)
#define MC13783_REG_REGULATORSETTING1_VRF2VSEL_M	(3 << 4)
#define MC13783_REG_REGULATORSETTING1_VMMC1VSEL_M	(7 << 6)
#define MC13783_REG_REGULATORSETTING1_VMMC2VSEL_M	(7 << 9)
#define MC13783_REG_REGULATORMODE0		32
#define MC13783_REG_REGULATORMODE0_VAUDIOEN		(1 << 0)
#define MC13783_REG_REGULATORMODE0_VIOHIEN		(1 << 3)
#define MC13783_REG_REGULATORMODE0_VIOLOEN		(1 << 6)
#define MC13783_REG_REGULATORMODE0_VDIGEN		(1 << 9)
#define MC13783_REG_REGULATORMODE0_VGENEN		(1 << 12)
#define MC13783_REG_REGULATORMODE0_VRFDIGEN		(1 << 15)
#define MC13783_REG_REGULATORMODE0_VRFREFEN		(1 << 18)
#define MC13783_REG_REGULATORMODE0_VRFCPEN		(1 << 21)
#define MC13783_REG_REGULATORMODE1		33
#define MC13783_REG_REGULATORMODE1_VSIMEN		(1 << 0)
#define MC13783_REG_REGULATORMODE1_VESIMEN		(1 << 3)
#define MC13783_REG_REGULATORMODE1_VCAMEN		(1 << 6)
#define MC13783_REG_REGULATORMODE1_VRFBGEN		(1 << 9)
#define MC13783_REG_REGULATORMODE1_VVIBEN		(1 << 11)
#define MC13783_REG_REGULATORMODE1_VRF1EN		(1 << 12)
#define MC13783_REG_REGULATORMODE1_VRF2EN		(1 << 15)
#define MC13783_REG_REGULATORMODE1_VMMC1EN		(1 << 18)
#define MC13783_REG_REGULATORMODE1_VMMC2EN		(1 << 21)
#define MC13783_REG_POWERMISC			34
#define MC13783_REG_POWERMISC_GPO1EN			(1 << 6)
#define MC13783_REG_POWERMISC_GPO2EN			(1 << 8)
#define MC13783_REG_POWERMISC_GPO3EN			(1 << 10)
#define MC13783_REG_POWERMISC_GPO4EN			(1 << 12)
#define MC13783_REG_POWERMISC_PWGT1SPIEN		(1 << 15)
#define MC13783_REG_POWERMISC_PWGT2SPIEN		(1 << 16)
#define MC13783_REG_POWERMISC_PWGTSPI_M			(3 << 15)
static const int mc13783_sw3_val[] = ;
static const int mc13783_vaudio_val[] = ;
static const int mc13783_viohi_val[] = ;
static const int mc13783_violo_val[] = ;
static const int mc13783_vdig_val[] = ;
static const int mc13783_vgen_val[] = ;
static const int mc13783_vrfdig_val[] = ;
static const int mc13783_vrfref_val[] = ;
static const int mc13783_vrfcp_val[] = ;
static const int mc13783_vsim_val[] = ;
static const int mc13783_vesim_val[] = ;
static const int mc13783_vcam_val[] = ;
static const int mc13783_vrfbg_val[] = ;
static const int mc13783_vvib_val[] = ;
static const int mc13783_vmmc_val[] = ;
static const int mc13783_vrf_val[] = ;
static const int mc13783_gpo_val[] = ;
static const int mc13783_pwgtdrv_val[] = ;
static struct regulator_ops mc13783_gpo_regulator_ops;
#define MC13783_DEFINE(prefix, name, reg, vsel_reg, voltages)	\
MC13xxx_DEFINE(MC13783_REG_, name, reg, vsel_reg, voltages, \
mc13xxx_regulator_ops)
#define MC13783_FIXED_DEFINE(prefix, name, reg, voltages)		\
MC13xxx_FIXED_DEFINE(MC13783_REG_, name, reg, voltages, \
mc13xxx_fixed_regulator_ops)
#define MC13783_GPO_DEFINE(prefix, name, reg, voltages)		\
MC13xxx_GPO_DEFINE(MC13783_REG_, name, reg, voltages, \
mc13783_gpo_regulator_ops)
#define MC13783_DEFINE_SW(_name, _reg, _vsel_reg, _voltages)		\
MC13783_DEFINE(REG, _name, _reg, _vsel_reg, _voltages)
#define MC13783_DEFINE_REGU(_name, _reg, _vsel_reg, _voltages)		\
MC13783_DEFINE(REG, _name, _reg, _vsel_reg, _voltages)
static struct mc13xxx_regulator mc13783_regulators[] = ;
static int mc13783_powermisc_rmw(struct mc13xxx_regulator_priv *priv, u32 mask,
u32 val)
static int mc13783_gpo_regulator_enable(struct regulator_dev *rdev)
static int mc13783_gpo_regulator_disable(struct regulator_dev *rdev)
static int mc13783_gpo_regulator_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops mc13783_gpo_regulator_ops = ;
static int __devinit mc13783_regulator_probe(struct platform_device *pdev)
static int __devexit mc13783_regulator_remove(struct platform_device *pdev)
static struct platform_driver mc13783_regulator_driver = ;
static int __init mc13783_regulator_init(void)
subsys_initcall(mc13783_regulator_init);
static void __exit mc13783_regulator_exit(void)
module_exit(mc13783_regulator_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Sascha Hauer <s.hauer@pengutronix.de>");
MODULE_DESCRIPTION("Regulator Driver for Freescale MC13783 PMIC");
MODULE_ALIAS("platform:mc13783-regulator");
