static int tuner_attach_stv6110(struct ngene_channel *chan)
static int demod_attach_stv0900(struct ngene_channel *chan)
static void cineS2_tuner_i2c_lock(struct dvb_frontend *fe, int lock)
static int cineS2_probe(struct ngene_channel *chan)
static struct lgdt330x_config aver_m780 = ;
static struct mt2131_config m780_tunerconfig = ;
static int demod_attach_lg330x(struct ngene_channel *chan)
static struct stv090x_config fe_cineS2 = ;
static struct stv090x_config fe_cineS2_2 = ;
static struct stv6110x_config tuner_cineS2_0 = ;
static struct stv6110x_config tuner_cineS2_1 = ;
static struct ngene_info ngene_info_cineS2 = ;
static struct ngene_info ngene_info_satixS2 = ;
static struct ngene_info ngene_info_satixS2v2 = ;
static struct ngene_info ngene_info_cineS2v5 = ;
static struct ngene_info ngene_info_duoFlexS2 = ;
static struct ngene_info ngene_info_m780 = ;
#define NGENE_ID(_subvend, _subdev, _driverdata)
static const struct pci_device_id ngene_id_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, ngene_id_tbl);
static pci_ers_result_t ngene_error_detected(struct pci_dev *dev,
enum pci_channel_state state)
static pci_ers_result_t ngene_link_reset(struct pci_dev *dev)
static pci_ers_result_t ngene_slot_reset(struct pci_dev *dev)
static void ngene_resume(struct pci_dev *dev)
static struct pci_error_handlers ngene_errors = ;
static struct pci_driver ngene_pci_driver = ;
static __init int module_init_ngene(void)
static __exit void module_exit_ngene(void)
module_init(module_init_ngene);
module_exit(module_exit_ngene);
MODULE_DESCRIPTION("nGene");
MODULE_AUTHOR("Micronas, Ralph Metzler, Manfred Voelkel");
MODULE_LICENSE("GPL");
