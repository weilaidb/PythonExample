static inline void
qla2xxx_prep_dump(struct qla_hw_data *ha, struct qla2xxx_fw_dump *fw_dump)
static inline void *
qla2xxx_copy_queues(struct qla_hw_data *ha, void *ptr)
static int
qla24xx_dump_ram(struct qla_hw_data *ha, uint32_t addr, uint32_t *ram,
uint32_t ram_dwords, void **nxt)
static int
qla24xx_dump_memory(struct qla_hw_data *ha, uint32_t *code_ram,
uint32_t cram_size, void **nxt)
static uint32_t *
qla24xx_read_window(struct device_reg_24xx __iomem *reg, uint32_t iobase,
uint32_t count, uint32_t *buf)
static inline int
qla24xx_pause_risc(struct device_reg_24xx __iomem *reg)
static int
qla24xx_soft_reset(struct qla_hw_data *ha)
static int
qla2xxx_dump_ram(struct qla_hw_data *ha, uint32_t addr, uint16_t *ram,
uint32_t ram_words, void **nxt)
static inline void
qla2xxx_read_window(struct device_reg_2xxx __iomem *reg, uint32_t count,
uint16_t *buf)
static inline void *
qla24xx_copy_eft(struct qla_hw_data *ha, void *ptr)
static inline void *
qla25xx_copy_fce(struct qla_hw_data *ha, void *ptr, uint32_t **last_chain)
static inline void *
qla25xx_copy_mq(struct qla_hw_data *ha, void *ptr, uint32_t **last_chain)
static void
qla2xxx_dump_post_process(scsi_qla_host_t *vha, int rval)
void
qla2300_fw_dump(scsi_qla_host_t *vha, int hardware_locked)
void
qla2100_fw_dump(scsi_qla_host_t *vha, int hardware_locked)
void
qla24xx_fw_dump(scsi_qla_host_t *vha, int hardware_locked)
void
qla25xx_fw_dump(scsi_qla_host_t *vha, int hardware_locked)
void
qla81xx_fw_dump(scsi_qla_host_t *vha, int hardware_locked)
void
qla2x00_dump_regs(scsi_qla_host_t *vha)
void
qla2x00_dump_buffer(uint8_t * b, uint32_t size)
void
qla2x00_dump_buffer_zipped(uint8_t *b, uint32_t size)
