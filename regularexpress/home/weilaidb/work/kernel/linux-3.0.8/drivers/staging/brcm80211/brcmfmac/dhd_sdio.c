#define DHDSDIO_MEM_DUMP_FNAME         "mem_dump"
#define TXQLEN		2048
#define TXHI		(TXQLEN - 256)
#define TXLOW		(TXHI - 256)
#define PRIOMASK	7
#define TXRETRIES	2
#if defined(CONFIG_MACH_SANDGATE2G)
#define DHD_RXBOUND	250
#define DHD_RXBOUND	50
#define DHD_TXBOUND	20
#define DHD_TXMINMAX	1
#define MEMBLOCK	2048
#define MAX_DATA_BUF	(32 * 1024)
#define DHD_SDALIGN	32
#if !ISPOWEROF2(DHD_SDALIGN)
#error DHD_SDALIGN is not a power of 2!
#define DHD_FIRSTREAD	32
#if !ISPOWEROF2(DHD_FIRSTREAD)
#error DHD_FIRSTREAD is not a power of 2!
#define SDPCM_HDRLEN	(SDPCM_FRAMETAG_LEN + SDPCM_SWHEADER_LEN)
#define SDPCM_RESERVE	(SDPCM_HDRLEN + SDPCM_TEST_HDRLEN + DHD_SDALIGN)
#define SDPCM_RESERVE	(SDPCM_HDRLEN + DHD_SDALIGN)
#define MAX_HDR_READ	32
#if !ISPOWEROF2(MAX_HDR_READ)
#error MAX_HDR_READ is not a power of 2!
#define MAX_RX_DATASZ	2048
#define DHD_WAIT_F2RDY	3000
#if (PMU_MAX_TRANSITION_DLY <= 1000000)
#undef PMU_MAX_TRANSITION_DLY
#define PMU_MAX_TRANSITION_DLY 1000000
#define DHD_INIT_CLKCTL1	(SBSDIO_FORCE_HW_CLKREQ_OFF |	\
SBSDIO_ALP_AVAIL_REQ)
#define DHD_INIT_CLKCTL2	(SBSDIO_FORCE_HW_CLKREQ_OFF | SBSDIO_FORCE_ALP)
#define F2SYNC	(SDIO_REQ_4BYTE | SDIO_REQ_FIXED)
#define PRIO2PREC(prio) \
(((prio) == PRIO_8021D_NONE || (prio) == PRIO_8021D_BE) ? \
((prio^2)) : (prio))
DHD_SPINWAIT_SLEEP_INIT(sdioh_spinwait_sleep);
extern int dhdcdc_set_ioctl(dhd_pub_t *dhd, int ifidx, uint cmd, void *buf,
uint len);
typedef struct dhd_console  dhd_console_t;
struct chip_info ;
typedef struct dhd_bus  dhd_bus_t;
#define CLK_NONE	0
#define CLK_SDONLY	1
#define CLK_PENDING	2
#define CLK_AVAIL	3
#define DHD_NOPMU(dhd)	(false)
static int qcount[NUMPRIO];
static int tx_packets[NUMPRIO];
const uint dhd_deferred_tx = 1;
extern uint dhd_watchdog_ms;
extern void dhd_os_wd_timer(void *bus, uint wdtick);
uint dhd_txbound;
uint dhd_rxbound;
uint dhd_txminmax;
#define DONGLE_MIN_MEMSIZE (128 * 1024)
int dhd_dongle_memsize;
static bool dhd_alignctl;
static bool sd1idle;
static bool retrydata;
#define RETRYCHAN(chan) (((chan) == SDPCM_EVENT_CHANNEL) || retrydata)
static const uint watermark = 8;
static const uint firstread = DHD_FIRSTREAD;
#define HDATLEN (firstread - (SDPCM_HDRLEN))
static const uint retry_limit = 2;
static bool forcealign;
#define ALIGNMENT  4
#if defined(OOB_INTR_ONLY) && defined(HW_OOB)
extern void bcmsdh_enable_hw_oob_intr(void *sdh, bool enable);
#if defined(OOB_INTR_ONLY) && defined(SDIO_ISR_THREAD)
#error OOB_INTR_ONLY is NOT working with SDIO_ISR_THREAD
#define PKTALIGN(_p, _len, _align)				\
do  while (0)
static const uint max_roundup = 512;
static bool dhd_readahead;
#define DATAOK(bus) \
(((u8)(bus->tx_max - bus->tx_seq) != 0) && \
(((u8)(bus->tx_max - bus->tx_seq) & 0x80) == 0))
#define R_SDREG(regvar, regaddr, retryvar) \
do  while (0)
#define W_SDREG(regval, regaddr, retryvar) \
do  while (0)
#define DHD_BUS			SDIO_BUS
#define PKT_AVAILABLE()		(intstatus & I_HMB_FRAME_IND)
#define HOSTINTMASK		(I_HMB_SW_MASK | I_CHIPACTIVE)
static void dhdsdio_testrcv(dhd_bus_t *bus, void *pkt, uint seq);
static void dhdsdio_sdtest_set(dhd_bus_t *bus, bool start);
static int dhdsdio_checkdied(dhd_bus_t *bus, u8 *data, uint size);
static int dhdsdio_mem_dump(dhd_bus_t *bus);
static int dhdsdio_download_state(dhd_bus_t *bus, bool enter);
static void dhdsdio_release(dhd_bus_t *bus);
static void dhdsdio_release_malloc(dhd_bus_t *bus);
static void dhdsdio_disconnect(void *ptr);
static bool dhdsdio_chipmatch(u16 chipid);
static bool dhdsdio_probe_attach(dhd_bus_t *bus, void *sdh,
void *regsva, u16 devid);
static bool dhdsdio_probe_malloc(dhd_bus_t *bus, void *sdh);
static bool dhdsdio_probe_init(dhd_bus_t *bus, void *sdh);
static void dhdsdio_release_dongle(dhd_bus_t *bus);
static uint process_nvram_vars(char *varbuf, uint len);
static void dhd_dongle_setmemsize(struct dhd_bus *bus, int mem_size);
static int dhd_bcmsdh_send_buf(dhd_bus_t *bus, u32 addr, uint fn,
uint flags, u8 *buf, uint nbytes,
struct sk_buff *pkt, bcmsdh_cmplt_fn_t complete,
void *handle);
static bool dhdsdio_download_firmware(struct dhd_bus *bus, void *sdh);
static int _dhdsdio_download_firmware(struct dhd_bus *bus);
static int dhdsdio_download_code_file(struct dhd_bus *bus, char *image_path);
static int dhdsdio_download_nvram(struct dhd_bus *bus);
static int dhdsdio_download_code_array(struct dhd_bus *bus);
static void dhdsdio_chip_disablecore(bcmsdh_info_t *sdh, u32 corebase);
static int dhdsdio_chip_attach(struct dhd_bus *bus, void *regs);
static void dhdsdio_chip_resetcore(bcmsdh_info_t *sdh, u32 corebase);
static void dhdsdio_sdiod_drive_strength_init(struct dhd_bus *bus,
u32 drivestrength);
static void dhdsdio_chip_detach(struct dhd_bus *bus);
static void dhdsdio_pktfree2(dhd_bus_t *bus, struct sk_buff *pkt)
static void dhd_dongle_setmemsize(struct dhd_bus *bus, int mem_size)
static int dhdsdio_set_siaddr_window(dhd_bus_t *bus, u32 address)
static int dhdsdio_htclk(dhd_bus_t *bus, bool on, bool pendok)
static int dhdsdio_sdclk(dhd_bus_t *bus, bool on)
static int dhdsdio_clkctl(dhd_bus_t *bus, uint target, bool pendok)
int dhdsdio_bussleep(dhd_bus_t *bus, bool sleep)
#if defined(OOB_INTR_ONLY)
void dhd_enable_oob_intr(struct dhd_bus *bus, bool enable)
#define BUS_WAKE(bus) \
do  while (0);
static int dhdsdio_txpkt(dhd_bus_t *bus, struct sk_buff *pkt, uint chan,
bool free_pkt)
int dhd_bus_txdata(struct dhd_bus *bus, struct sk_buff *pkt)
static uint dhdsdio_sendfromq(dhd_bus_t *bus, uint maxframes)
int dhd_bus_txctl(struct dhd_bus *bus, unsigned char *msg, uint msglen)
int dhd_bus_rxctl(struct dhd_bus *bus, unsigned char *msg, uint msglen)
enum ;
const bcm_iovar_t dhdsdio_iovars[] = ;
static void
dhd_dump_pct(struct bcmstrbuf *strbuf, char *desc, uint num, uint div)
void dhd_bus_dump(dhd_pub_t *dhdp, struct bcmstrbuf *strbuf)
void dhd_bus_clearcounts(dhd_pub_t *dhdp)
static int dhdsdio_pktgen_get(dhd_bus_t *bus, u8 *arg)
static int dhdsdio_pktgen_set(dhd_bus_t *bus, u8 *arg)
static int
dhdsdio_membytes(dhd_bus_t *bus, bool write, u32 address, u8 *data,
uint size)
static int dhdsdio_readshared(dhd_bus_t *bus, sdpcm_shared_t *sh)
static int dhdsdio_checkdied(dhd_bus_t *bus, u8 *data, uint size)
static int dhdsdio_mem_dump(dhd_bus_t *bus)
#define CONSOLE_LINE_MAX	192
static int dhdsdio_readconsole(dhd_bus_t *bus)
int dhdsdio_downloadvars(dhd_bus_t *bus, void *arg, int len)
static int
dhdsdio_doiovar(dhd_bus_t *bus, const bcm_iovar_t *vi, u32 actionid,
const char *name, void *params, int plen, void *arg, int len,
int val_size)
static int dhdsdio_write_vars(dhd_bus_t *bus)
static int dhdsdio_download_state(dhd_bus_t *bus, bool enter)
int
dhd_bus_iovar_op(dhd_pub_t *dhdp, const char *name,
void *params, int plen, void *arg, int len, bool set)
void dhd_bus_stop(struct dhd_bus *bus, bool enforce_mutex)
int dhd_bus_init(dhd_pub_t *dhdp, bool enforce_mutex)
static void dhdsdio_rxfail(dhd_bus_t *bus, bool abort, bool rtx)
static void
dhdsdio_read_control(dhd_bus_t *bus, u8 *hdr, uint len, uint doff)
static u8 dhdsdio_rxglom(dhd_bus_t *bus, u8 rxseq)
static uint dhdsdio_readframes(dhd_bus_t *bus, uint maxframes, bool *finished)
static u32 dhdsdio_hostmail(dhd_bus_t *bus)
bool dhdsdio_dpc(dhd_bus_t *bus)
bool dhd_bus_dpc(struct dhd_bus *bus)
void dhdsdio_isr(void *arg)
static void dhdsdio_pktgen_init(dhd_bus_t *bus)
static void dhdsdio_pktgen(dhd_bus_t *bus)
static void dhdsdio_sdtest_set(dhd_bus_t *bus, bool start)
static void dhdsdio_testrcv(dhd_bus_t *bus, struct sk_buff *pkt, uint seq)
extern bool dhd_bus_watchdog(dhd_pub_t *dhdp)
extern int dhd_bus_console_in(dhd_pub_t *dhdp, unsigned char *msg, uint msglen)
static void dhd_dump_cis(uint fn, u8 *cis)
static bool dhdsdio_chipmatch(u16 chipid)
static void *dhdsdio_probe(u16 venid, u16 devid, u16 bus_no,
u16 slot, u16 func, uint bustype, void *regsva,
void *sdh)
static bool
dhdsdio_probe_attach(struct dhd_bus *bus, void *sdh, void *regsva, u16 devid)
static bool dhdsdio_probe_malloc(dhd_bus_t *bus, void *sdh)
static bool dhdsdio_probe_init(dhd_bus_t *bus, void *sdh)
bool
dhd_bus_download_firmware(struct dhd_bus *bus, char *fw_path, char *nv_path)
static bool
dhdsdio_download_firmware(struct dhd_bus *bus, void *sdh)
static void dhdsdio_release(dhd_bus_t *bus)
static void dhdsdio_release_malloc(dhd_bus_t *bus)
static void dhdsdio_release_dongle(dhd_bus_t *bus)
static void dhdsdio_disconnect(void *ptr)
static bcmsdh_driver_t dhd_sdio = ;
int dhd_bus_register(void)
void dhd_bus_unregister(void)
static int dhdsdio_download_code_array(struct dhd_bus *bus)
static int dhdsdio_download_code_file(struct dhd_bus *bus, char *fw_path)
static uint process_nvram_vars(char *varbuf, uint len)
void dhd_bus_set_nvram_params(struct dhd_bus *bus, const char *nvram_params)
static int dhdsdio_download_nvram(struct dhd_bus *bus)
static int _dhdsdio_download_firmware(struct dhd_bus *bus)
static int
dhd_bcmsdh_send_buf(dhd_bus_t *bus, u32 addr, uint fn, uint flags,
u8 *buf, uint nbytes, struct sk_buff *pkt,
bcmsdh_cmplt_fn_t complete, void *handle)
uint dhd_bus_chip(struct dhd_bus *bus)
void *dhd_bus_pub(struct dhd_bus *bus)
void *dhd_bus_txq(struct dhd_bus *bus)
uint dhd_bus_hdrlen(struct dhd_bus *bus)
int dhd_bus_devreset(dhd_pub_t *dhdp, u8 flag)
static int
dhdsdio_chip_recognition(bcmsdh_info_t *sdh, struct chip_info *ci, void *regs)
static void
dhdsdio_chip_disablecore(bcmsdh_info_t *sdh, u32 corebase)
static int
dhdsdio_chip_attach(struct dhd_bus *bus, void *regs)
static void
dhdsdio_chip_resetcore(bcmsdh_info_t *sdh, u32 corebase)
struct sdiod_drive_str ;
static const struct sdiod_drive_str sdiod_drive_strength_tab1[] = ;
static const struct sdiod_drive_str sdiod_drive_strength_tab2[] = ;
static const struct sdiod_drive_str sdiod_drive_strength_tab3[] = ;
#define SDIOD_DRVSTR_KEY(chip, pmu)     (((chip) << 16) | (pmu))
static void
dhdsdio_sdiod_drive_strength_init(struct dhd_bus *bus, u32 drivestrength)
static void
dhdsdio_chip_detach(struct dhd_bus *bus)
