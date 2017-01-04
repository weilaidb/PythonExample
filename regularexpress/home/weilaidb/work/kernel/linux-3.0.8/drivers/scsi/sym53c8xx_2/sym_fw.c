#define	SYM_GEN_A(s, label)	((short) offsetof(s, label)),
#define	SYM_GEN_B(s, label)	((short) offsetof(s, label)),
#define	SYM_GEN_Z(s, label)	((short) offsetof(s, label)),
#define	PADDR_A(label)		SYM_GEN_PADDR_A(struct SYM_FWA_SCR, label)
#define	PADDR_B(label)		SYM_GEN_PADDR_B(struct SYM_FWB_SCR, label)
#if	SYM_CONF_GENERIC_SUPPORT
#define	SYM_FWA_SCR		sym_fw1a_scr
#define	SYM_FWB_SCR		sym_fw1b_scr
#define	SYM_FWZ_SCR		sym_fw1z_scr
static struct sym_fwa_ofs sym_fw1a_ofs = ;
static struct sym_fwb_ofs sym_fw1b_ofs = ;
static struct sym_fwz_ofs sym_fw1z_ofs = ;
#undef	SYM_FWA_SCR
#undef	SYM_FWB_SCR
#undef	SYM_FWZ_SCR
#define	SYM_FWA_SCR		sym_fw2a_scr
#define	SYM_FWB_SCR		sym_fw2b_scr
#define	SYM_FWZ_SCR		sym_fw2z_scr
static struct sym_fwa_ofs sym_fw2a_ofs = ;
static struct sym_fwb_ofs sym_fw2b_ofs = ;
static struct sym_fwz_ofs sym_fw2z_ofs = ;
#undef	SYM_FWA_SCR
#undef	SYM_FWB_SCR
#undef	SYM_FWZ_SCR
#undef	SYM_GEN_A
#undef	SYM_GEN_B
#undef	SYM_GEN_Z
#undef	PADDR_A
#undef	PADDR_B
#if	SYM_CONF_GENERIC_SUPPORT
static void
sym_fw1_patch(struct Scsi_Host *shost)
static void
sym_fw2_patch(struct Scsi_Host *shost)
static void
sym_fw_fill_data (u32 *in, u32 *out)
static void
sym_fw_setup_bus_addresses(struct sym_hcb *np, struct sym_fw *fw)
#if	SYM_CONF_GENERIC_SUPPORT
static void
sym_fw1_setup(struct sym_hcb *np, struct sym_fw *fw)
static void
sym_fw2_setup(struct sym_hcb *np, struct sym_fw *fw)
#if	SYM_CONF_GENERIC_SUPPORT
static struct sym_fw sym_fw1 = SYM_FW_ENTRY(sym_fw1, "NCR-generic");
static struct sym_fw sym_fw2 = SYM_FW_ENTRY(sym_fw2, "LOAD/STORE-based");
struct sym_fw *
sym_find_firmware(struct sym_chip *chip)
void sym_fw_bind_script(struct sym_hcb *np, u32 *start, int len)
