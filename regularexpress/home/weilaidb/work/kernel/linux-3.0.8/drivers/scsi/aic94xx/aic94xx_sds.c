struct asd_ocm_dir_ent  __attribute__ ((packed));
struct asd_ocm_dir  __attribute__ ((packed));
#define	OCM_DE_OCM_DIR			0x00
#define	OCM_DE_WIN_DRVR			0x01
#define	OCM_DE_BIOS_CHIM		0x02
#define	OCM_DE_RAID_ENGN		0x03
#define	OCM_DE_BIOS_INTL		0x04
#define	OCM_DE_BIOS_CHIM_OSM		0x05
#define	OCM_DE_BIOS_CHIM_DYNAMIC	0x06
#define	OCM_DE_ADDC2C_RES0		0x07
#define	OCM_DE_ADDC2C_RES1		0x08
#define	OCM_DE_ADDC2C_RES2		0x09
#define	OCM_DE_ADDC2C_RES3		0x0A
#define OCM_INIT_DIR_ENTRIES	5
static struct asd_ocm_dir OCMDirInit =
;
static struct asd_ocm_dir_ent OCMDirEntriesInit[OCM_INIT_DIR_ENTRIES] =
;
struct asd_bios_chim_struct  __attribute__ ((packed));
static int asd_read_ocm_seg(struct asd_ha_struct *asd_ha, void *buffer,
u32 offs, int size)
static int asd_read_ocm_dir(struct asd_ha_struct *asd_ha,
struct asd_ocm_dir *dir, u32 offs)
static void asd_write_ocm_seg(struct asd_ha_struct *asd_ha, void *buffer,
u32 offs, int size)
#define THREE_TO_NUM(X) ((X)[0] | ((X)[1] << 8) | ((X)[2] << 16))
static int asd_find_dir_entry(struct asd_ocm_dir *dir, u8 type,
u32 *offs, u32 *size)
#define OCM_BIOS_CHIM_DE  2
#define BC_BIOS_PRESENT   1
static int asd_get_bios_chim(struct asd_ha_struct *asd_ha,
struct asd_ocm_dir *dir)
static void
asd_hwi_initialize_ocm_dir (struct asd_ha_struct *asd_ha)
static int
asd_hwi_check_ocm_access (struct asd_ha_struct *asd_ha)
int asd_read_ocm(struct asd_ha_struct *asd_ha)
#define FLASH_RESET			0xF0
#define ASD_FLASH_SIZE                  0x200000
#define FLASH_DIR_COOKIE                "*** ADAPTEC FLASH DIRECTORY *** "
#define FLASH_NEXT_ENTRY_OFFS		0x2000
#define FLASH_MAX_DIR_ENTRIES		32
#define FLASH_DE_TYPE_MASK              0x3FFFFFFF
#define FLASH_DE_MS                     0x120
#define FLASH_DE_CTRL_A_USER            0xE0
struct asd_flash_de  __attribute__ ((packed));
struct asd_flash_dir  __attribute__ ((packed));
struct asd_manuf_sec  __attribute__ ((packed));
struct asd_manuf_phy_desc  __attribute__ ((packed));
struct asd_manuf_phy_param  __attribute__ ((packed));
struct asd_ms_sb_desc  __attribute__ ((packed));
struct asd_ms_conn_desc  __attribute__ ((packed));
struct asd_nd_phy_desc  __attribute__ ((packed));
struct asd_ms_node_desc  __attribute__ ((packed));
struct asd_ms_conn_map  __attribute__ ((packed));
struct asd_ctrla_phy_entry  __attribute__ ((packed));
struct asd_ctrla_phy_settings  __attribute__ ((packed));
struct asd_ll_el  __attribute__ ((packed));
static int asd_poll_flash(struct asd_ha_struct *asd_ha)
static int asd_reset_flash(struct asd_ha_struct *asd_ha)
static int asd_read_flash_seg(struct asd_ha_struct *asd_ha,
void *buffer, u32 offs, int size)
static int asd_find_flash_dir(struct asd_ha_struct *asd_ha,
struct asd_flash_dir *flash_dir)
static int asd_flash_getid(struct asd_ha_struct *asd_ha)
static u16 asd_calc_flash_chksum(u16 *p, int size)
static int asd_find_flash_de(struct asd_flash_dir *flash_dir, u32 entry_type,
u32 *offs, u32 *size)
static int asd_validate_ms(struct asd_manuf_sec *ms)
static int asd_ms_get_sas_addr(struct asd_ha_struct *asd_ha,
struct asd_manuf_sec *ms)
static int asd_ms_get_pcba_sn(struct asd_ha_struct *asd_ha,
struct asd_manuf_sec *ms)
static void *asd_find_ll_by_id(void * const start, const u8 id0, const u8 id1)
static int asd_ms_get_phy_params(struct asd_ha_struct *asd_ha,
struct asd_manuf_sec *manuf_sec)
static int asd_ms_get_connector_map(struct asd_ha_struct *asd_ha,
struct asd_manuf_sec *manuf_sec)
static int asd_process_ms(struct asd_ha_struct *asd_ha,
struct asd_flash_dir *flash_dir)
static int asd_process_ctrla_phy_settings(struct asd_ha_struct *asd_ha,
struct asd_ctrla_phy_settings *ps)
static int asd_process_ctrl_a_user(struct asd_ha_struct *asd_ha,
struct asd_flash_dir *flash_dir)
int asd_read_flash(struct asd_ha_struct *asd_ha)
int asd_verify_flash_seg(struct asd_ha_struct *asd_ha,
const void *src, u32 dest_offset, u32 bytes_to_verify)
int asd_write_flash_seg(struct asd_ha_struct *asd_ha,
const void *src, u32 dest_offset, u32 bytes_to_write)
int asd_chk_write_status(struct asd_ha_struct *asd_ha,
u32 sector_addr, u8 erase_flag)
int asd_erase_nv_sector(struct asd_ha_struct *asd_ha, u32 flash_addr, u32 size)
int asd_check_flash_type(struct asd_ha_struct *asd_ha)
