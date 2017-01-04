static inline uint64_t
ahd_compose_id(u_int device, u_int vendor, u_int subdevice, u_int subvendor)
#define ID_AIC7902_PCI_REV_A4		0x3
#define ID_AIC7902_PCI_REV_B0		0x10
#define SUBID_HP			0x0E11
#define DEVID_9005_HOSTRAID(id) ((id) & 0x80)
#define DEVID_9005_TYPE(id) ((id) & 0xF)
#define		DEVID_9005_TYPE_HBA		0x0
#define		DEVID_9005_TYPE_HBA_2EXT	0x1
#define		DEVID_9005_TYPE_IROC		0x8
#define		DEVID_9005_TYPE_MB		0xF
#define DEVID_9005_MFUNC(id) ((id) & 0x10)
#define DEVID_9005_PACKETIZED(id) ((id) & 0x8000)
#define SUBID_9005_TYPE(id) ((id) & 0xF)
#define		SUBID_9005_TYPE_HBA		0x0
#define		SUBID_9005_TYPE_MB		0xF
#define SUBID_9005_AUTOTERM(id)	(((id) & 0x10) == 0)
#define SUBID_9005_LEGACYCONN_FUNC(id) ((id) & 0x20)
#define SUBID_9005_SEEPTYPE(id) (((id) & 0x0C0) >> 6)
#define		SUBID_9005_SEEPTYPE_NONE	0x0
#define		SUBID_9005_SEEPTYPE_4K		0x1
static ahd_device_setup_t ahd_aic7901_setup;
static ahd_device_setup_t ahd_aic7901A_setup;
static ahd_device_setup_t ahd_aic7902_setup;
static ahd_device_setup_t ahd_aic790X_setup;
static const struct ahd_pci_identity ahd_pci_ident_table[] =
;
static const u_int ahd_num_pci_devs = ARRAY_SIZE(ahd_pci_ident_table);
#define	DEVCONFIG		0x40
#define		PCIXINITPAT	0x0000E000ul
#define			PCIXINIT_PCI33_66	0x0000E000ul
#define			PCIXINIT_PCIX50_66	0x0000C000ul
#define			PCIXINIT_PCIX66_100	0x0000A000ul
#define			PCIXINIT_PCIX100_133	0x00008000ul
#define	PCI_BUS_MODES_INDEX(devconfig)	\
(((devconfig) & PCIXINITPAT) >> 13)
static const char *pci_bus_modes[] =
;
#define		TESTMODE	0x00000800ul
#define		IRDY_RST	0x00000200ul
#define		FRAME_RST	0x00000100ul
#define		PCI64BIT	0x00000080ul
#define		MRDCEN		0x00000040ul
#define		ENDIANSEL	0x00000020ul
#define		MIXQWENDIANEN	0x00000008ul
#define		DACEN		0x00000004ul
#define		STPWLEVEL	0x00000002ul
#define		QWENDIANSEL	0x00000001ul
#define	DEVCONFIG1		0x44
#define		PREQDIS		0x01
#define	CSIZE_LATTIME		0x0c
#define		CACHESIZE	0x000000fful
#define		LATTIME		0x0000ff00ul
static int	ahd_check_extport(struct ahd_softc *ahd);
static void	ahd_configure_termination(struct ahd_softc *ahd,
u_int adapter_control);
static void	ahd_pci_split_intr(struct ahd_softc *ahd, u_int intstat);
static void	ahd_pci_intr(struct ahd_softc *ahd);
const struct ahd_pci_identity *
ahd_find_pci_device(ahd_dev_softc_t pci)
int
ahd_pci_config(struct ahd_softc *ahd, const struct ahd_pci_identity *entry)
void
ahd_pci_suspend(struct ahd_softc *ahd)
void
ahd_pci_resume(struct ahd_softc *ahd)
int
ahd_pci_test_register_access(struct ahd_softc *ahd)
static int
ahd_check_extport(struct ahd_softc *ahd)
static void
ahd_configure_termination(struct ahd_softc *ahd, u_int adapter_control)
#define	DPE	0x80
#define SSE	0x40
#define	RMA	0x20
#define	RTA	0x10
#define STA	0x08
#define DPR	0x01
static const char *split_status_source[] =
;
static const char *pci_status_source[] =
;
static const char *split_status_strings[] =
;
static const char *pci_status_strings[] =
;
static void
ahd_pci_intr(struct ahd_softc *ahd)
static void
ahd_pci_split_intr(struct ahd_softc *ahd, u_int intstat)
static int
ahd_aic7901_setup(struct ahd_softc *ahd)
static int
ahd_aic7901A_setup(struct ahd_softc *ahd)
static int
ahd_aic7902_setup(struct ahd_softc *ahd)
static int
ahd_aic790X_setup(struct ahd_softc *ahd)
