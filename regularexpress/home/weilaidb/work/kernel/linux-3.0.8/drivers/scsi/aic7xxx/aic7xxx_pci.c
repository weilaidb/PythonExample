static inline uint64_t
ahc_compose_id(u_int device, u_int vendor, u_int subdevice, u_int subvendor)
#define AHC_PCI_IOADDR	PCIR_MAPS
#define AHC_PCI_MEMADDR	(PCIR_MAPS + 4)
#define DEVID_9005_TYPE(id) ((id) & 0xF)
#define		DEVID_9005_TYPE_HBA		0x0
#define		DEVID_9005_TYPE_AAA		0x3
#define		DEVID_9005_TYPE_SISL		0x5
#define		DEVID_9005_TYPE_MB		0xF
#define DEVID_9005_MAXRATE(id) (((id) & 0x30) >> 4)
#define		DEVID_9005_MAXRATE_U160		0x0
#define		DEVID_9005_MAXRATE_ULTRA2	0x1
#define		DEVID_9005_MAXRATE_ULTRA	0x2
#define		DEVID_9005_MAXRATE_FAST		0x3
#define DEVID_9005_MFUNC(id) (((id) & 0x40) >> 6)
#define DEVID_9005_CLASS(id) (((id) & 0xFF00) >> 8)
#define		DEVID_9005_CLASS_SPI		0x0
#define SUBID_9005_TYPE(id) ((id) & 0xF)
#define		SUBID_9005_TYPE_MB		0xF
#define		SUBID_9005_TYPE_CARD		0x0
#define		SUBID_9005_TYPE_LCCARD		0x1
#define		SUBID_9005_TYPE_RAID		0x3
#define SUBID_9005_TYPE_KNOWN(id)			\
((((id) & 0xF) == SUBID_9005_TYPE_MB)		\
|| (((id) & 0xF) == SUBID_9005_TYPE_CARD)	\
|| (((id) & 0xF) == SUBID_9005_TYPE_LCCARD)	\
|| (((id) & 0xF) == SUBID_9005_TYPE_RAID))
#define SUBID_9005_MAXRATE(id) (((id) & 0x30) >> 4)
#define		SUBID_9005_MAXRATE_ULTRA2	0x0
#define		SUBID_9005_MAXRATE_ULTRA	0x1
#define		SUBID_9005_MAXRATE_U160		0x2
#define		SUBID_9005_MAXRATE_RESERVED	0x3
#define SUBID_9005_SEEPTYPE(id)						\
((SUBID_9005_TYPE(id) == SUBID_9005_TYPE_MB)			\
? ((id) & 0xC0) >> 6						\
: ((id) & 0x300) >> 8)
#define		SUBID_9005_SEEPTYPE_NONE	0x0
#define		SUBID_9005_SEEPTYPE_1K		0x1
#define		SUBID_9005_SEEPTYPE_2K_4K	0x2
#define		SUBID_9005_SEEPTYPE_RESERVED	0x3
#define SUBID_9005_AUTOTERM(id)						\
((SUBID_9005_TYPE(id) == SUBID_9005_TYPE_MB)			\
? (((id) & 0x400) >> 10) == 0					\
: (((id) & 0x40) >> 6) == 0)
#define SUBID_9005_NUMCHAN(id)						\
((SUBID_9005_TYPE(id) == SUBID_9005_TYPE_MB)			\
? ((id) & 0x300) >> 8						\
: ((id) & 0xC00) >> 10)
#define SUBID_9005_LEGACYCONN(id)					\
((SUBID_9005_TYPE(id) == SUBID_9005_TYPE_MB)			\
? 0								\
: ((id) & 0x80) >> 7)
#define SUBID_9005_MFUNCENB(id)						\
((SUBID_9005_TYPE(id) == SUBID_9005_TYPE_MB)			\
? ((id) & 0x800) >> 11						\
: ((id) & 0x1000) >> 12)
#define SUBID_9005_CARD_SCSIWIDTH_MASK	0x2000
#define SUBID_9005_CARD_PCIWIDTH_MASK	0x4000
#define SUBID_9005_CARD_SEDIFF_MASK	0x8000
static ahc_device_setup_t ahc_aic785X_setup;
static ahc_device_setup_t ahc_aic7860_setup;
static ahc_device_setup_t ahc_apa1480_setup;
static ahc_device_setup_t ahc_aic7870_setup;
static ahc_device_setup_t ahc_aic7870h_setup;
static ahc_device_setup_t ahc_aha394X_setup;
static ahc_device_setup_t ahc_aha394Xh_setup;
static ahc_device_setup_t ahc_aha494X_setup;
static ahc_device_setup_t ahc_aha494Xh_setup;
static ahc_device_setup_t ahc_aha398X_setup;
static ahc_device_setup_t ahc_aic7880_setup;
static ahc_device_setup_t ahc_aic7880h_setup;
static ahc_device_setup_t ahc_aha2940Pro_setup;
static ahc_device_setup_t ahc_aha394XU_setup;
static ahc_device_setup_t ahc_aha394XUh_setup;
static ahc_device_setup_t ahc_aha398XU_setup;
static ahc_device_setup_t ahc_aic7890_setup;
static ahc_device_setup_t ahc_aic7892_setup;
static ahc_device_setup_t ahc_aic7895_setup;
static ahc_device_setup_t ahc_aic7895h_setup;
static ahc_device_setup_t ahc_aic7896_setup;
static ahc_device_setup_t ahc_aic7899_setup;
static ahc_device_setup_t ahc_aha29160C_setup;
static ahc_device_setup_t ahc_raid_setup;
static ahc_device_setup_t ahc_aha394XX_setup;
static ahc_device_setup_t ahc_aha494XX_setup;
static ahc_device_setup_t ahc_aha398XX_setup;
static const struct ahc_pci_identity ahc_pci_ident_table[] = ;
static const u_int ahc_num_pci_devs = ARRAY_SIZE(ahc_pci_ident_table);
#define AHC_394X_SLOT_CHANNEL_A	4
#define AHC_394X_SLOT_CHANNEL_B	5
#define AHC_398X_SLOT_CHANNEL_A	4
#define AHC_398X_SLOT_CHANNEL_B	8
#define AHC_398X_SLOT_CHANNEL_C	12
#define AHC_494X_SLOT_CHANNEL_A	4
#define AHC_494X_SLOT_CHANNEL_B	5
#define AHC_494X_SLOT_CHANNEL_C	6
#define AHC_494X_SLOT_CHANNEL_D	7
#define	DEVCONFIG		0x40
#define		PCIERRGENDIS	0x80000000ul
#define		SCBSIZE32	0x00010000ul
#define		REXTVALID	0x00001000ul
#define		MPORTMODE	0x00000400ul
#define		RAMPSM		0x00000200ul
#define		VOLSENSE	0x00000100ul
#define		PCI64BIT	0x00000080ul
#define		SCBRAMSEL	0x00000080ul
#define		MRDCEN		0x00000040ul
#define		EXTSCBTIME	0x00000020ul
#define		EXTSCBPEN	0x00000010ul
#define		BERREN		0x00000008ul
#define		DACEN		0x00000004ul
#define		STPWLEVEL	0x00000002ul
#define		DIFACTNEGEN	0x00000001ul
#define	CSIZE_LATTIME		0x0c
#define		CACHESIZE	0x0000003ful
#define		LATTIME		0x0000ff00ul
#define	DPE	0x80
#define SSE	0x40
#define	RMA	0x20
#define	RTA	0x10
#define STA	0x08
#define DPR	0x01
static int ahc_9005_subdevinfo_valid(uint16_t vendor, uint16_t device,
uint16_t subvendor, uint16_t subdevice);
static int ahc_ext_scbram_present(struct ahc_softc *ahc);
static void ahc_scbram_config(struct ahc_softc *ahc, int enable,
int pcheck, int fast, int large);
static void ahc_probe_ext_scbram(struct ahc_softc *ahc);
static void check_extport(struct ahc_softc *ahc, u_int *sxfrctl1);
static void ahc_parse_pci_eeprom(struct ahc_softc *ahc,
struct seeprom_config *sc);
static void configure_termination(struct ahc_softc *ahc,
struct seeprom_descriptor *sd,
u_int adapter_control,
u_int *sxfrctl1);
static void ahc_new_term_detect(struct ahc_softc *ahc,
int *enableSEC_low,
int *enableSEC_high,
int *enablePRI_low,
int *enablePRI_high,
int *eeprom_present);
static void aic787X_cable_detect(struct ahc_softc *ahc, int *internal50_present,
int *internal68_present,
int *externalcable_present,
int *eeprom_present);
static void aic785X_cable_detect(struct ahc_softc *ahc, int *internal50_present,
int *externalcable_present,
int *eeprom_present);
static void    write_brdctl(struct ahc_softc *ahc, uint8_t value);
static uint8_t read_brdctl(struct ahc_softc *ahc);
static void ahc_pci_intr(struct ahc_softc *ahc);
static int  ahc_pci_chip_init(struct ahc_softc *ahc);
static int
ahc_9005_subdevinfo_valid(uint16_t device, uint16_t vendor,
uint16_t subdevice, uint16_t subvendor)
const struct ahc_pci_identity *
ahc_find_pci_device(ahc_dev_softc_t pci)
int
ahc_pci_config(struct ahc_softc *ahc, const struct ahc_pci_identity *entry)
static int
ahc_ext_scbram_present(struct ahc_softc *ahc)
static void
ahc_scbram_config(struct ahc_softc *ahc, int enable, int pcheck,
int fast, int large)
static void
ahc_probe_ext_scbram(struct ahc_softc *ahc)
int
ahc_pci_test_register_access(struct ahc_softc *ahc)
static void
check_extport(struct ahc_softc *ahc, u_int *sxfrctl1)
static void
ahc_parse_pci_eeprom(struct ahc_softc *ahc, struct seeprom_config *sc)
static void
configure_termination(struct ahc_softc *ahc,
struct seeprom_descriptor *sd,
u_int adapter_control,
u_int *sxfrctl1)
static void
ahc_new_term_detect(struct ahc_softc *ahc, int *enableSEC_low,
int *enableSEC_high, int *enablePRI_low,
int *enablePRI_high, int *eeprom_present)
static void
aic787X_cable_detect(struct ahc_softc *ahc, int *internal50_present,
int *internal68_present, int *externalcable_present,
int *eeprom_present)
static void
aic785X_cable_detect(struct ahc_softc *ahc, int *internal50_present,
int *externalcable_present, int *eeprom_present)
int
ahc_acquire_seeprom(struct ahc_softc *ahc, struct seeprom_descriptor *sd)
void
ahc_release_seeprom(struct seeprom_descriptor *sd)
static void
write_brdctl(struct ahc_softc *ahc, uint8_t value)
static uint8_t
read_brdctl(struct ahc_softc *ahc)
static void
ahc_pci_intr(struct ahc_softc *ahc)
static int
ahc_pci_chip_init(struct ahc_softc *ahc)
void
ahc_pci_resume(struct ahc_softc *ahc)
static int
ahc_aic785X_setup(struct ahc_softc *ahc)
static int
ahc_aic7860_setup(struct ahc_softc *ahc)
static int
ahc_apa1480_setup(struct ahc_softc *ahc)
static int
ahc_aic7870_setup(struct ahc_softc *ahc)
static int
ahc_aic7870h_setup(struct ahc_softc *ahc)
static int
ahc_aha394X_setup(struct ahc_softc *ahc)
static int
ahc_aha394Xh_setup(struct ahc_softc *ahc)
static int
ahc_aha398X_setup(struct ahc_softc *ahc)
static int
ahc_aha494X_setup(struct ahc_softc *ahc)
static int
ahc_aha494Xh_setup(struct ahc_softc *ahc)
static int
ahc_aic7880_setup(struct ahc_softc *ahc)
static int
ahc_aic7880h_setup(struct ahc_softc *ahc)
static int
ahc_aha2940Pro_setup(struct ahc_softc *ahc)
static int
ahc_aha394XU_setup(struct ahc_softc *ahc)
static int
ahc_aha394XUh_setup(struct ahc_softc *ahc)
static int
ahc_aha398XU_setup(struct ahc_softc *ahc)
static int
ahc_aic7890_setup(struct ahc_softc *ahc)
static int
ahc_aic7892_setup(struct ahc_softc *ahc)
static int
ahc_aic7895_setup(struct ahc_softc *ahc)
static int
ahc_aic7895h_setup(struct ahc_softc *ahc)
static int
ahc_aic7896_setup(struct ahc_softc *ahc)
static int
ahc_aic7899_setup(struct ahc_softc *ahc)
static int
ahc_aha29160C_setup(struct ahc_softc *ahc)
static int
ahc_raid_setup(struct ahc_softc *ahc)
static int
ahc_aha394XX_setup(struct ahc_softc *ahc)
static int
ahc_aha398XX_setup(struct ahc_softc *ahc)
static int
ahc_aha494XX_setup(struct ahc_softc *ahc)
