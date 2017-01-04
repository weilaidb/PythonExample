static void
qla2x00_lock_nvram_access(struct qla_hw_data *ha)
static void
qla2x00_unlock_nvram_access(struct qla_hw_data *ha)
static void
qla2x00_nv_write(struct qla_hw_data *ha, uint16_t data)
static uint16_t
qla2x00_nvram_request(struct qla_hw_data *ha, uint32_t nv_cmd)
static uint16_t
qla2x00_get_nvram_word(struct qla_hw_data *ha, uint32_t addr)
static void
qla2x00_nv_deselect(struct qla_hw_data *ha)
static void
qla2x00_write_nvram_word(struct qla_hw_data *ha, uint32_t addr, uint16_t data)
static int
qla2x00_write_nvram_word_tmo(struct qla_hw_data *ha, uint32_t addr,
uint16_t data, uint32_t tmo)
static int
qla2x00_clear_nvram_protection(struct qla_hw_data *ha)
static void
qla2x00_set_nvram_protection(struct qla_hw_data *ha, int stat)
static inline uint32_t
flash_conf_addr(struct qla_hw_data *ha, uint32_t faddr)
static inline uint32_t
flash_data_addr(struct qla_hw_data *ha, uint32_t faddr)
static inline uint32_t
nvram_conf_addr(struct qla_hw_data *ha, uint32_t naddr)
static inline uint32_t
nvram_data_addr(struct qla_hw_data *ha, uint32_t naddr)
static uint32_t
qla24xx_read_flash_dword(struct qla_hw_data *ha, uint32_t addr)
uint32_t *
qla24xx_read_flash_data(scsi_qla_host_t *vha, uint32_t *dwptr, uint32_t faddr,
uint32_t dwords)
static int
qla24xx_write_flash_dword(struct qla_hw_data *ha, uint32_t addr, uint32_t data)
static void
qla24xx_get_flash_manufacturer(struct qla_hw_data *ha, uint8_t *man_id,
uint8_t *flash_id)
static int
qla2xxx_find_flt_start(scsi_qla_host_t *vha, uint32_t *start)
static void
qla2xxx_get_flt_info(scsi_qla_host_t *vha, uint32_t flt_addr)
static void
qla2xxx_get_fdt_info(scsi_qla_host_t *vha)
static void
qla2xxx_get_idc_param(scsi_qla_host_t *vha)
int
qla2xxx_get_flash_info(scsi_qla_host_t *vha)
void
qla2xxx_flash_npiv_conf(scsi_qla_host_t *vha)
static int
qla24xx_unprotect_flash(scsi_qla_host_t *vha)
static int
qla24xx_protect_flash(scsi_qla_host_t *vha)
static int
qla24xx_erase_sector(scsi_qla_host_t *vha, uint32_t fdata)
static int
qla24xx_write_flash_data(scsi_qla_host_t *vha, uint32_t *dwptr, uint32_t faddr,
uint32_t dwords)
uint8_t *
qla2x00_read_nvram_data(scsi_qla_host_t *vha, uint8_t *buf, uint32_t naddr,
uint32_t bytes)
uint8_t *
qla24xx_read_nvram_data(scsi_qla_host_t *vha, uint8_t *buf, uint32_t naddr,
uint32_t bytes)
int
qla2x00_write_nvram_data(scsi_qla_host_t *vha, uint8_t *buf, uint32_t naddr,
uint32_t bytes)
int
qla24xx_write_nvram_data(scsi_qla_host_t *vha, uint8_t *buf, uint32_t naddr,
uint32_t bytes)
uint8_t *
qla25xx_read_nvram_data(scsi_qla_host_t *vha, uint8_t *buf, uint32_t naddr,
uint32_t bytes)
int
qla25xx_write_nvram_data(scsi_qla_host_t *vha, uint8_t *buf, uint32_t naddr,
uint32_t bytes)
static inline void
qla2x00_flip_colors(struct qla_hw_data *ha, uint16_t *pflags)
#define PIO_REG(h, r) ((h)->pio_address + offsetof(struct device_reg_2xxx, r))
void
qla2x00_beacon_blink(struct scsi_qla_host *vha)
int
qla2x00_beacon_on(struct scsi_qla_host *vha)
int
qla2x00_beacon_off(struct scsi_qla_host *vha)
static inline void
qla24xx_flip_colors(struct qla_hw_data *ha, uint16_t *pflags)
void
qla24xx_beacon_blink(struct scsi_qla_host *vha)
int
qla24xx_beacon_on(struct scsi_qla_host *vha)
int
qla24xx_beacon_off(struct scsi_qla_host *vha)
static void
qla2x00_flash_enable(struct qla_hw_data *ha)
static void
qla2x00_flash_disable(struct qla_hw_data *ha)
static uint8_t
qla2x00_read_flash_byte(struct qla_hw_data *ha, uint32_t addr)
static void
qla2x00_write_flash_byte(struct qla_hw_data *ha, uint32_t addr, uint8_t data)
static int
qla2x00_poll_flash(struct qla_hw_data *ha, uint32_t addr, uint8_t poll_data,
uint8_t man_id, uint8_t flash_id)
static int
qla2x00_program_flash_address(struct qla_hw_data *ha, uint32_t addr,
uint8_t data, uint8_t man_id, uint8_t flash_id)
static int
qla2x00_erase_flash(struct qla_hw_data *ha, uint8_t man_id, uint8_t flash_id)
static int
qla2x00_erase_flash_sector(struct qla_hw_data *ha, uint32_t addr,
uint32_t sec_mask, uint8_t man_id, uint8_t flash_id)
static void
qla2x00_get_flash_manufacturer(struct qla_hw_data *ha, uint8_t *man_id,
uint8_t *flash_id)
static void
qla2x00_read_flash_data(struct qla_hw_data *ha, uint8_t *tmp_buf,
uint32_t saddr, uint32_t length)
static inline void
qla2x00_suspend_hba(struct scsi_qla_host *vha)
static inline void
qla2x00_resume_hba(struct scsi_qla_host *vha)
uint8_t *
qla2x00_read_optrom_data(struct scsi_qla_host *vha, uint8_t *buf,
uint32_t offset, uint32_t length)
int
qla2x00_write_optrom_data(struct scsi_qla_host *vha, uint8_t *buf,
uint32_t offset, uint32_t length)
uint8_t *
qla24xx_read_optrom_data(struct scsi_qla_host *vha, uint8_t *buf,
uint32_t offset, uint32_t length)
int
qla24xx_write_optrom_data(struct scsi_qla_host *vha, uint8_t *buf,
uint32_t offset, uint32_t length)
uint8_t *
qla25xx_read_optrom_data(struct scsi_qla_host *vha, uint8_t *buf,
uint32_t offset, uint32_t length)
static void
qla2x00_get_fcode_version(struct qla_hw_data *ha, uint32_t pcids)
int
qla2x00_get_flash_version(scsi_qla_host_t *vha, void *mbuf)
int
qla24xx_get_flash_version(scsi_qla_host_t *vha, void *mbuf)
static int
qla2xxx_is_vpd_valid(uint8_t *pos, uint8_t *end)
int
qla2xxx_get_vpd_field(scsi_qla_host_t *vha, char *key, char *str, size_t size)
int
qla24xx_read_fcp_prio_cfg(scsi_qla_host_t *vha)
