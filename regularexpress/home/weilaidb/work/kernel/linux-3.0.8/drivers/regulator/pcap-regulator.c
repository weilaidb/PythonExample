static const u16 V1_table[] = ;
static const u16 V2_table[] = ;
static const u16 V3_table[] = ;
static const u16 V4_table[] = ;
static const u16 V5_table[] = ;
static const u16 V6_table[] = ;
static const u16 V7_table[] = ;
#define V8_table V4_table
static const u16 V9_table[] = ;
static const u16 V10_table[] = ;
static const u16 VAUX1_table[] = ;
#define VAUX2_table VAUX1_table
static const u16 VAUX3_table[] = ;
static const u16 VAUX4_table[] = ;
static const u16 VSIM_table[] = ;
static const u16 VSIM2_table[] = ;
static const u16 VVIB_table[] = ;
static const u16 SW1_table[] = ;
#define SW2_table SW1_table
static const u16 SW3_table[] = ;
struct pcap_regulator ;
#define NA 0xff
#define VREG_INFO(_vreg, _reg, _en, _index, _stby, _lowpwr)		\
[_vreg]	=
static struct pcap_regulator vreg_table[] = ;
static int pcap_regulator_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV,
unsigned *selector)
static int pcap_regulator_get_voltage(struct regulator_dev *rdev)
static int pcap_regulator_enable(struct regulator_dev *rdev)
static int pcap_regulator_disable(struct regulator_dev *rdev)
static int pcap_regulator_is_enabled(struct regulator_dev *rdev)
static int pcap_regulator_list_voltage(struct regulator_dev *rdev,
unsigned int index)
static struct regulator_ops pcap_regulator_ops = ;
#define VREG(_vreg)						\
[_vreg]	=
static struct regulator_desc pcap_regulators[] = ;
static int __devinit pcap_regulator_probe(struct platform_device *pdev)
static int __devexit pcap_regulator_remove(struct platform_device *pdev)
static struct platform_driver pcap_regulator_driver = ;
static int __init pcap_regulator_init(void)
static void __exit pcap_regulator_exit(void)
subsys_initcall(pcap_regulator_init);
module_exit(pcap_regulator_exit);
MODULE_AUTHOR("Daniel Ribeiro <drwyrm@gmail.com>");
MODULE_DESCRIPTION("PCAP2 Regulator Driver");
MODULE_LICENSE("GPL");
