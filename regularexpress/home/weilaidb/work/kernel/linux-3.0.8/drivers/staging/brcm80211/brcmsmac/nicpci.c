typedef struct  pcicore_info_t;
#define	PCI_ERROR(args)
#define PCIE_PUB(sih) \
(((sih)->bustype == PCI_BUS) && ((sih)->buscoretype == PCIE_CORE_ID))
static bool pcie_mdiosetblock(pcicore_info_t *pi, uint blk);
static int pcie_mdioop(pcicore_info_t *pi, uint physmedia, uint regaddr,
bool write, uint *val);
static int pcie_mdiowrite(pcicore_info_t *pi, uint physmedia, uint readdr,
uint val);
static int pcie_mdioread(pcicore_info_t *pi, uint physmedia, uint readdr,
uint *ret_val);
static void pcie_extendL1timer(pcicore_info_t *pi, bool extend);
static void pcie_clkreq_upd(pcicore_info_t *pi, uint state);
static void pcie_war_aspm_clkreq(pcicore_info_t *pi);
static void pcie_war_serdes(pcicore_info_t *pi);
static void pcie_war_noplldown(pcicore_info_t *pi);
static void pcie_war_polarity(pcicore_info_t *pi);
static void pcie_war_pci_setup(pcicore_info_t *pi);
static bool pcicore_pmecap(pcicore_info_t *pi);
#define PCIE_ASPM(sih)	((PCIE_PUB(sih)) && (((sih)->buscorerev >= 3) && ((sih)->buscorerev <= 5)))
#define PR28829_DELAY() udelay(10)
void *pcicore_init(si_t *sih, void *pdev, void *regs)
void pcicore_deinit(void *pch)
u8
pcicore_find_pci_capability(void *dev, u8 req_cap_id,
unsigned char *buf, u32 *buflen)
uint
pcie_readreg(sbpcieregs_t *pcieregs, uint addrtype,
uint offset)
uint
pcie_writereg(sbpcieregs_t *pcieregs, uint addrtype,
uint offset, uint val)
static bool pcie_mdiosetblock(pcicore_info_t *pi, uint blk)
static int
pcie_mdioop(pcicore_info_t *pi, uint physmedia, uint regaddr, bool write,
uint *val)
static int
pcie_mdioread(pcicore_info_t *pi, uint physmedia, uint regaddr, uint *regval)
static int
pcie_mdiowrite(pcicore_info_t *pi, uint physmedia, uint regaddr, uint val)
u8 pcie_clkreq(void *pch, u32 mask, u32 val)
static void pcie_extendL1timer(pcicore_info_t *pi, bool extend)
static void pcie_clkreq_upd(pcicore_info_t *pi, uint state)
static void pcie_war_polarity(pcicore_info_t *pi)
static void pcie_war_aspm_clkreq(pcicore_info_t *pi)
static void pcie_war_serdes(pcicore_info_t *pi)
static void pcie_misc_config_fixup(pcicore_info_t *pi)
static void pcie_war_noplldown(pcicore_info_t *pi)
static void pcie_war_pci_setup(pcicore_info_t *pi)
void pcie_war_ovr_aspm_update(void *pch, u8 aspm)
void pcicore_attach(void *pch, char *pvars, int state)
void pcicore_hwup(void *pch)
void pcicore_up(void *pch, int state)
void pcicore_sleep(void *pch)
void pcicore_down(void *pch, int state)
bool pcicore_pmecap_fast(void *pch)
static bool pcicore_pmecap(pcicore_info_t *pi)
void pcicore_pmeen(void *pch)
bool pcicore_pmestat(void *pch)
void pcicore_pmeclr(void *pch)
u32 pcie_lcreg(void *pch, u32 mask, u32 val)
u32
pcicore_pciereg(void *pch, u32 offset, u32 mask, u32 val, uint type)
u32
pcicore_pcieserdesreg(void *pch, u32 mdioslave, u32 offset, u32 mask,
u32 val)
