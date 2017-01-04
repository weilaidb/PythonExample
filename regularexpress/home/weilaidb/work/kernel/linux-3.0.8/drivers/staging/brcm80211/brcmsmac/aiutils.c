#define BCM47162_DMP() ((sih->chip == BCM47162_CHIP_ID) && \
(sih->chiprev == 0) && \
(sii->coreid[sii->curidx] == MIPS74K_CORE_ID))
static u32
get_erom_ent(si_t *sih, u32 **eromptr, u32 mask, u32 match)
static u32
get_asd(si_t *sih, u32 **eromptr, uint sp, uint ad, uint st,
u32 *addrl, u32 *addrh, u32 *sizel, u32 *sizeh)
static void ai_hwfixup(si_info_t *sii)
void ai_scan(si_t *sih, void *regs, uint devid)
void *ai_setcoreidx(si_t *sih, uint coreidx)
int ai_numaddrspaces(si_t *sih)
u32 ai_addrspace(si_t *sih, uint asidx)
u32 ai_addrspacesize(si_t *sih, uint asidx)
uint ai_flag(si_t *sih)
void ai_setint(si_t *sih, int siflag)
uint ai_corevendor(si_t *sih)
uint ai_corerev(si_t *sih)
bool ai_iscoreup(si_t *sih)
void ai_core_cflags_wo(si_t *sih, u32 mask, u32 val)
u32 ai_core_cflags(si_t *sih, u32 mask, u32 val)
u32 ai_core_sflags(si_t *sih, u32 mask, u32 val)
static si_info_t *ai_doattach(si_info_t *sii, uint devid, void *regs,
uint bustype, void *sdh, char **vars,
uint *varsz);
static bool ai_buscore_prep(si_info_t *sii, uint bustype, uint devid,
void *sdh);
static bool ai_buscore_setup(si_info_t *sii, chipcregs_t *cc, uint bustype,
u32 savewin, uint *origidx, void *regs);
static void ai_nvram_process(si_info_t *sii, char *pvars);
static char *ai_devpathvar(si_t *sih, char *var, int len, const char *name);
static bool _ai_clkctl_cc(si_info_t *sii, uint mode);
static bool ai_ispcie(si_info_t *sii);
static u32 ai_gpioreservation;
si_t *ai_attach(uint devid, void *regs, uint bustype,
void *sdh, char **vars, uint *varsz)
static si_info_t ksii;
static bool ai_buscore_prep(si_info_t *sii, uint bustype, uint devid,
void *sdh)
static bool ai_buscore_setup(si_info_t *sii, chipcregs_t *cc, uint bustype,
u32 savewin, uint *origidx, void *regs)
static __used void ai_nvram_process(si_info_t *sii, char *pvars)
static si_info_t *ai_doattach(si_info_t *sii, uint devid,
void *regs, uint bustype, void *pbus,
char **vars, uint *varsz)
void ai_detach(si_t *sih)
void
ai_register_intr_callback(si_t *sih, void *intrsoff_fn, void *intrsrestore_fn,
void *intrsenabled_fn, void *intr_arg)
void ai_deregister_intr_callback(si_t *sih)
uint ai_coreid(si_t *sih)
uint ai_coreidx(si_t *sih)
bool ai_backplane64(si_t *sih)
uint ai_findcoreidx(si_t *sih, uint coreid, uint coreunit)
void *ai_setcore(si_t *sih, uint coreid, uint coreunit)
void *ai_switch_core(si_t *sih, uint coreid, uint *origidx, uint *intr_val)
void ai_restore_core(si_t *sih, uint coreid, uint intr_val)
void ai_write_wrapperreg(si_t *sih, u32 offset, u32 val)
uint ai_corereg(si_t *sih, uint coreidx, uint regoff, uint mask, uint val)
void ai_core_disable(si_t *sih, u32 bits)
void ai_core_reset(si_t *sih, u32 bits, u32 resetbits)
static uint ai_slowclk_src(si_info_t *sii)
static uint ai_slowclk_freq(si_info_t *sii, bool max_freq, chipcregs_t *cc)
static void ai_clkctl_setdelay(si_info_t *sii, void *chipcregs)
void ai_clkctl_init(si_t *sih)
u16 ai_clkctl_fast_pwrup_delay(si_t *sih)
int ai_clkctl_xtal(si_t *sih, uint what, bool on)
bool ai_clkctl_cc(si_t *sih, uint mode)
static bool _ai_clkctl_cc(si_info_t *sii, uint mode)
int ai_devpath(si_t *sih, char *path, int size)
char *ai_getdevpathvar(si_t *sih, const char *name)
int ai_getdevpathintvar(si_t *sih, const char *name)
char *ai_getnvramflvar(si_t *sih, const char *name)
static char *ai_devpathvar(si_t *sih, char *var, int len, const char *name)
static __used bool ai_ispcie(si_info_t *sii)
bool ai_pci_war16165(si_t *sih)
void ai_pci_up(si_t *sih)
void ai_pci_sleep(si_t *sih)
void ai_pci_down(si_t *sih)
void ai_pci_setup(si_t *sih, uint coremask)
int ai_pci_fixcfg(si_t *sih)
u32 ai_gpiocontrol(si_t *sih, u32 mask, u32 val, u8 priority)
void ai_chipcontrl_epa4331(si_t *sih, bool on)
void ai_epa_4313war(si_t *sih)
bool ai_deviceremoved(si_t *sih)
bool ai_is_sprom_available(si_t *sih)
bool ai_is_otp_disabled(si_t *sih)
bool ai_is_otp_powered(si_t *sih)
void ai_otp_power(si_t *sih, bool on)
