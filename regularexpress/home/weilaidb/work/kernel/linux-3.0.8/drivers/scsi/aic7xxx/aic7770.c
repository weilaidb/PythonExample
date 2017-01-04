#define ID_AIC7770	0x04907770
#define ID_AHA_274x	0x04907771
#define ID_AHA_284xB	0x04907756
#define ID_AHA_284x	0x04907757
#define	ID_OLV_274x	0x04907782
#define	ID_OLV_274xD	0x04907783
static int aic7770_chip_init(struct ahc_softc *ahc);
static int aha2840_load_seeprom(struct ahc_softc *ahc);
static ahc_device_setup_t ahc_aic7770_VL_setup;
static ahc_device_setup_t ahc_aic7770_EISA_setup;
static ahc_device_setup_t ahc_aic7770_setup;
struct aic7770_identity aic7770_ident_table[] =
;
const int ahc_num_aic7770_devs = ARRAY_SIZE(aic7770_ident_table);
struct aic7770_identity *
aic7770_find_device(uint32_t id)
int
aic7770_config(struct ahc_softc *ahc, struct aic7770_identity *entry, u_int io)
static int
aic7770_chip_init(struct ahc_softc *ahc)
static int
aha2840_load_seeprom(struct ahc_softc *ahc)
static int
ahc_aic7770_VL_setup(struct ahc_softc *ahc)
static int
ahc_aic7770_EISA_setup(struct ahc_softc *ahc)
static int
ahc_aic7770_setup(struct ahc_softc *ahc)
