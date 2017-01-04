static __inline__ uint16_t
qla2x00_debounce_register(volatile uint16_t __iomem *addr)
static inline void
qla2x00_poll(struct rsp_que *rsp)
static inline uint8_t *
host_to_fcp_swap(uint8_t *fcp, uint32_t bsize)
static inline int
qla2x00_is_reserved_id(scsi_qla_host_t *vha, uint16_t loop_id)
static inline void
qla2x00_clean_dsd_pool(struct qla_hw_data *ha, srb_t *sp)
static inline void
qla2x00_set_fcport_state(fc_port_t *fcport, int state)
