struct crb_addr_pair ;
#define QLCNIC_MAX_CRB_XFORM 60
static unsigned int crb_addr_xform[QLCNIC_MAX_CRB_XFORM];
#define crb_addr_transform(name) \
(crb_addr_xform[QLCNIC_HW_PX_MAP_CRB_##name] = \
QLCNIC_HW_CRB_HUB_AGT_ADR_##name << 20)
#define QLCNIC_ADDR_ERROR (0xffffffff)
static void
qlcnic_post_rx_buffers_nodb(struct qlcnic_adapter *adapter,
struct qlcnic_host_rds_ring *rds_ring);
static int
qlcnic_check_fw_hearbeat(struct qlcnic_adapter *adapter);
static void crb_addr_transform_setup(void)
void qlcnic_release_rx_buffers(struct qlcnic_adapter *adapter)
void qlcnic_reset_rx_buffers_list(struct qlcnic_adapter *adapter)
void qlcnic_release_tx_buffers(struct qlcnic_adapter *adapter)
void qlcnic_free_sw_resources(struct qlcnic_adapter *adapter)
int qlcnic_alloc_sw_resources(struct qlcnic_adapter *adapter)
static u32 qlcnic_decode_crb_addr(u32 addr)
#define QLCNIC_MAX_ROM_WAIT_USEC	100
static int qlcnic_wait_rom_done(struct qlcnic_adapter *adapter)
static int do_rom_fast_read(struct qlcnic_adapter *adapter,
u32 addr, u32 *valp)
static int do_rom_fast_read_words(struct qlcnic_adapter *adapter, int addr,
u8 *bytes, size_t size)
int
qlcnic_rom_fast_read_words(struct qlcnic_adapter *adapter, int addr,
u8 *bytes, size_t size)
int qlcnic_rom_fast_read(struct qlcnic_adapter *adapter, u32 addr, u32 *valp)
int qlcnic_pinit_from_rom(struct qlcnic_adapter *adapter)
static int qlcnic_cmd_peg_ready(struct qlcnic_adapter *adapter)
static int
qlcnic_receive_peg_ready(struct qlcnic_adapter *adapter)
int
qlcnic_check_fw_status(struct qlcnic_adapter *adapter)
int
qlcnic_setup_idc_param(struct qlcnic_adapter *adapter)
static int qlcnic_get_flt_entry(struct qlcnic_adapter *adapter, u8 region,
struct qlcnic_flt_entry *region_entry)
int
qlcnic_check_flash_fw_ver(struct qlcnic_adapter *adapter)
static int
qlcnic_has_mn(struct qlcnic_adapter *adapter)
static
struct uni_table_desc *qlcnic_get_table_desc(const u8 *unirom, int section)
#define FILEHEADER_SIZE (14 * 4)
static int
qlcnic_validate_header(struct qlcnic_adapter *adapter)
static int
qlcnic_validate_bootld(struct qlcnic_adapter *adapter)
static int
qlcnic_validate_fw(struct qlcnic_adapter *adapter)
static int
qlcnic_validate_product_offs(struct qlcnic_adapter *adapter)
static int
qlcnic_validate_unified_romimage(struct qlcnic_adapter *adapter)
static
struct uni_data_desc *qlcnic_get_data_desc(struct qlcnic_adapter *adapter,
u32 section, u32 idx_offset)
static u8 *
qlcnic_get_bootld_offs(struct qlcnic_adapter *adapter)
static u8 *
qlcnic_get_fw_offs(struct qlcnic_adapter *adapter)
static __le32
qlcnic_get_fw_size(struct qlcnic_adapter *adapter)
static __le32
qlcnic_get_fw_version(struct qlcnic_adapter *adapter)
static __le32
qlcnic_get_bios_version(struct qlcnic_adapter *adapter)
static void qlcnic_rom_lock_recovery(struct qlcnic_adapter *adapter)
static int
qlcnic_check_fw_hearbeat(struct qlcnic_adapter *adapter)
int
qlcnic_need_fw_reset(struct qlcnic_adapter *adapter)
static const char *fw_name[] = ;
int
qlcnic_load_firmware(struct qlcnic_adapter *adapter)
static int
qlcnic_validate_firmware(struct qlcnic_adapter *adapter)
static void
qlcnic_get_next_fwtype(struct qlcnic_adapter *adapter)
void qlcnic_request_firmware(struct qlcnic_adapter *adapter)
void
qlcnic_release_firmware(struct qlcnic_adapter *adapter)
static void
qlcnic_handle_linkevent(struct qlcnic_adapter *adapter,
struct qlcnic_fw_msg *msg)
static void
qlcnic_handle_fw_message(int desc_cnt, int index,
struct qlcnic_host_sds_ring *sds_ring)
static int
qlcnic_alloc_rx_skb(struct qlcnic_adapter *adapter,
struct qlcnic_host_rds_ring *rds_ring,
struct qlcnic_rx_buffer *buffer)
static struct sk_buff *qlcnic_process_rxbuf(struct qlcnic_adapter *adapter,
struct qlcnic_host_rds_ring *rds_ring, u16 index, u16 cksum)
static inline int
qlcnic_check_rx_tagging(struct qlcnic_adapter *adapter, struct sk_buff *skb,
u16 *vlan_tag)
static struct qlcnic_rx_buffer *
qlcnic_process_rcv(struct qlcnic_adapter *adapter,
struct qlcnic_host_sds_ring *sds_ring,
int ring, u64 sts_data0)
#define QLC_TCP_HDR_SIZE            20
#define QLC_TCP_TS_OPTION_SIZE      12
#define QLC_TCP_TS_HDR_SIZE         (QLC_TCP_HDR_SIZE + QLC_TCP_TS_OPTION_SIZE)
static struct qlcnic_rx_buffer *
qlcnic_process_lro(struct qlcnic_adapter *adapter,
struct qlcnic_host_sds_ring *sds_ring,
int ring, u64 sts_data0, u64 sts_data1)
int
qlcnic_process_rcv_ring(struct qlcnic_host_sds_ring *sds_ring, int max)
void
qlcnic_post_rx_buffers(struct qlcnic_adapter *adapter,
struct qlcnic_host_rds_ring *rds_ring)
static void
qlcnic_post_rx_buffers_nodb(struct qlcnic_adapter *adapter,
struct qlcnic_host_rds_ring *rds_ring)
void
qlcnic_fetch_mac(struct qlcnic_adapter *adapter, u32 off1, u32 off2,
u8 alt_mac, u8 *mac)
