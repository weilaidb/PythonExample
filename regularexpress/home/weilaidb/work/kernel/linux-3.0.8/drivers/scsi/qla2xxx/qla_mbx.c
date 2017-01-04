static int
qla2x00_mailbox_command(scsi_qla_host_t *vha, mbx_cmd_t *mcp)
int
qla2x00_load_ram(scsi_qla_host_t *vha, dma_addr_t req_dma, uint32_t risc_addr,
uint32_t risc_code_size)
#define	EXTENDED_BB_CREDITS	BIT_0
int
qla2x00_execute_fw(scsi_qla_host_t *vha, uint32_t risc_addr)
int
qla2x00_get_fw_version(scsi_qla_host_t *vha, uint16_t *major, uint16_t *minor,
uint16_t *subminor, uint16_t *attributes, uint32_t *memory, uint8_t *mpi,
uint32_t *mpi_caps, uint8_t *phy)
int
qla2x00_get_fw_options(scsi_qla_host_t *vha, uint16_t *fwopts)
int
qla2x00_set_fw_options(scsi_qla_host_t *vha, uint16_t *fwopts)
int
qla2x00_mbx_reg_test(scsi_qla_host_t *vha)
int
qla2x00_verify_checksum(scsi_qla_host_t *vha, uint32_t risc_addr)
int
qla2x00_issue_iocb_timeout(scsi_qla_host_t *vha, void *buffer,
dma_addr_t phys_addr, size_t size, uint32_t tov)
int
qla2x00_issue_iocb(scsi_qla_host_t *vha, void *buffer, dma_addr_t phys_addr,
size_t size)
int
qla2x00_abort_command(srb_t *sp)
int
qla2x00_abort_target(struct fc_port *fcport, unsigned int l, int tag)
int
qla2x00_lun_reset(struct fc_port *fcport, unsigned int l, int tag)
int
qla2x00_get_adapter_id(scsi_qla_host_t *vha, uint16_t *id, uint8_t *al_pa,
uint8_t *area, uint8_t *domain, uint16_t *top, uint16_t *sw_cap)
int
qla2x00_get_retry_cnt(scsi_qla_host_t *vha, uint8_t *retry_cnt, uint8_t *tov,
uint16_t *r_a_tov)
int
qla2x00_init_firmware(scsi_qla_host_t *vha, uint16_t size)
int
qla2x00_get_port_database(scsi_qla_host_t *vha, fc_port_t *fcport, uint8_t opt)
int
qla2x00_get_firmware_state(scsi_qla_host_t *vha, uint16_t *states)
int
qla2x00_get_port_name(scsi_qla_host_t *vha, uint16_t loop_id, uint8_t *name,
uint8_t opt)
int
qla2x00_lip_reset(scsi_qla_host_t *vha)
int
qla2x00_send_sns(scsi_qla_host_t *vha, dma_addr_t sns_phys_address,
uint16_t cmd_size, size_t buf_size)
int
qla24xx_login_fabric(scsi_qla_host_t *vha, uint16_t loop_id, uint8_t domain,
uint8_t area, uint8_t al_pa, uint16_t *mb, uint8_t opt)
int
qla2x00_login_fabric(scsi_qla_host_t *vha, uint16_t loop_id, uint8_t domain,
uint8_t area, uint8_t al_pa, uint16_t *mb, uint8_t opt)
int
qla2x00_login_local_device(scsi_qla_host_t *vha, fc_port_t *fcport,
uint16_t *mb_ret, uint8_t opt)
int
qla24xx_fabric_logout(scsi_qla_host_t *vha, uint16_t loop_id, uint8_t domain,
uint8_t area, uint8_t al_pa)
int
qla2x00_fabric_logout(scsi_qla_host_t *vha, uint16_t loop_id, uint8_t domain,
uint8_t area, uint8_t al_pa)
int
qla2x00_full_login_lip(scsi_qla_host_t *vha)
int
qla2x00_get_id_list(scsi_qla_host_t *vha, void *id_list, dma_addr_t id_list_dma,
uint16_t *entries)
int
qla2x00_get_resource_cnts(scsi_qla_host_t *vha, uint16_t *cur_xchg_cnt,
uint16_t *orig_xchg_cnt, uint16_t *cur_iocb_cnt,
uint16_t *orig_iocb_cnt, uint16_t *max_npiv_vports, uint16_t *max_fcfs)
#if defined(QL_DEBUG_LEVEL_3)
int
qla2x00_get_fcal_position_map(scsi_qla_host_t *vha, char *pos_map)
int
qla2x00_get_link_status(scsi_qla_host_t *vha, uint16_t loop_id,
struct link_statistics *stats, dma_addr_t stats_dma)
int
qla24xx_get_isp_stats(scsi_qla_host_t *vha, struct link_statistics *stats,
dma_addr_t stats_dma)
int
qla24xx_abort_command(srb_t *sp)
struct tsk_mgmt_cmd ;
static int
__qla24xx_issue_tmf(char *name, uint32_t type, struct fc_port *fcport,
unsigned int l, int tag)
int
qla24xx_abort_target(struct fc_port *fcport, unsigned int l, int tag)
int
qla24xx_lun_reset(struct fc_port *fcport, unsigned int l, int tag)
int
qla2x00_system_error(scsi_qla_host_t *vha)
int
qla2x00_set_serdes_params(scsi_qla_host_t *vha, uint16_t sw_em_1g,
uint16_t sw_em_2g, uint16_t sw_em_4g)
int
qla2x00_stop_firmware(scsi_qla_host_t *vha)
int
qla2x00_enable_eft_trace(scsi_qla_host_t *vha, dma_addr_t eft_dma,
uint16_t buffers)
int
qla2x00_disable_eft_trace(scsi_qla_host_t *vha)
int
qla2x00_enable_fce_trace(scsi_qla_host_t *vha, dma_addr_t fce_dma,
uint16_t buffers, uint16_t *mb, uint32_t *dwords)
int
qla2x00_disable_fce_trace(scsi_qla_host_t *vha, uint64_t *wr, uint64_t *rd)
int
qla2x00_get_idma_speed(scsi_qla_host_t *vha, uint16_t loop_id,
uint16_t *port_speed, uint16_t *mb)
int
qla2x00_set_idma_speed(scsi_qla_host_t *vha, uint16_t loop_id,
uint16_t port_speed, uint16_t *mb)
void
qla24xx_report_id_acquisition(scsi_qla_host_t *vha,
struct vp_rpt_id_entry_24xx *rptid_entry)
int
qla24xx_modify_vp_config(scsi_qla_host_t *vha)
int
qla24xx_control_vp(scsi_qla_host_t *vha, int cmd)
int
qla2x00_send_change_request(scsi_qla_host_t *vha, uint16_t format,
uint16_t vp_idx)
int
qla2x00_dump_ram(scsi_qla_host_t *vha, dma_addr_t req_dma, uint32_t addr,
uint32_t size)
struct cs84xx_mgmt_cmd ;
int
qla84xx_verify_chip(struct scsi_qla_host *vha, uint16_t *status)
int
qla25xx_init_req_que(struct scsi_qla_host *vha, struct req_que *req)
int
qla25xx_init_rsp_que(struct scsi_qla_host *vha, struct rsp_que *rsp)
int
qla81xx_idc_ack(scsi_qla_host_t *vha, uint16_t *mb)
int
qla81xx_fac_get_sector_size(scsi_qla_host_t *vha, uint32_t *sector_size)
int
qla81xx_fac_do_write_enable(scsi_qla_host_t *vha, int enable)
int
qla81xx_fac_erase_sector(scsi_qla_host_t *vha, uint32_t start, uint32_t finish)
int
qla81xx_restart_mpi_firmware(scsi_qla_host_t *vha)
int
qla2x00_read_sfp(scsi_qla_host_t *vha, dma_addr_t sfp_dma, uint8_t *sfp,
uint16_t dev, uint16_t off, uint16_t len, uint16_t opt)
int
qla2x00_write_sfp(scsi_qla_host_t *vha, dma_addr_t sfp_dma, uint8_t *sfp,
uint16_t dev, uint16_t off, uint16_t len, uint16_t opt)
int
qla2x00_get_xgmac_stats(scsi_qla_host_t *vha, dma_addr_t stats_dma,
uint16_t size_in_bytes, uint16_t *actual_size)
int
qla2x00_get_dcbx_params(scsi_qla_host_t *vha, dma_addr_t tlv_dma,
uint16_t size)
int
qla2x00_read_ram_word(scsi_qla_host_t *vha, uint32_t risc_addr, uint32_t *data)
int
qla2x00_loopback_test(scsi_qla_host_t *vha, struct msg_echo_lb *mreq,
uint16_t *mresp)
int
qla2x00_echo_test(scsi_qla_host_t *vha, struct msg_echo_lb *mreq,
uint16_t *mresp)
int
qla84xx_reset_chip(scsi_qla_host_t *ha, uint16_t enable_diagnostic)
int
qla2x00_write_ram_word(scsi_qla_host_t *vha, uint32_t risc_addr, uint32_t data)
int
qla81xx_write_mpi_register(scsi_qla_host_t *vha, uint16_t *mb)
int
qla2x00_get_data_rate(scsi_qla_host_t *vha)
int
qla81xx_get_port_config(scsi_qla_host_t *vha, uint16_t *mb)
int
qla81xx_set_port_config(scsi_qla_host_t *vha, uint16_t *mb)
int
qla24xx_set_fcp_prio(scsi_qla_host_t *vha, uint16_t loop_id, uint16_t priority,
uint16_t *mb)
int
qla2x00_get_thermal_temp(scsi_qla_host_t *vha, uint16_t *temp, uint16_t *frac)
int
qla82xx_mbx_intr_enable(scsi_qla_host_t *vha)
int
qla82xx_mbx_intr_disable(scsi_qla_host_t *vha)
