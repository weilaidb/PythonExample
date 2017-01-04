struct crb_addr_pair ;
#define NETXEN_MAX_CRB_XFORM 60
static unsigned int crb_addr_xform[NETXEN_MAX_CRB_XFORM];
#define NETXEN_ADDR_ERROR (0xffffffff)
#define crb_addr_transform(name) \
crb_addr_xform[NETXEN_HW_PX_MAP_CRB_##name] = \
NETXEN_HW_CRB_HUB_AGT_ADR_##name << 20
#define NETXEN_NIC_XDMA_RESET 0x8000ff
static void
netxen_post_rx_buffers_nodb(struct netxen_adapter *adapter,
struct nx_host_rds_ring *rds_ring);
static int netxen_p3_has_mn(struct netxen_adapter *adapter);
static void crb_addr_transform_setup(void)
void netxen_release_rx_buffers(struct netxen_adapter *adapter)
void netxen_release_tx_buffers(struct netxen_adapter *adapter)
void netxen_free_sw_resources(struct netxen_adapter *adapter)
int netxen_alloc_sw_resources(struct netxen_adapter *adapter)
static u32 netxen_decode_crb_addr(u32 addr)
#define NETXEN_MAX_ROM_WAIT_USEC	100
static int netxen_wait_rom_done(struct netxen_adapter *adapter)
static int do_rom_fast_read(struct netxen_adapter *adapter,
int addr, int *valp)
static int do_rom_fast_read_words(struct netxen_adapter *adapter, int addr,
u8 *bytes, size_t size)
int
netxen_rom_fast_read_words(struct netxen_adapter *adapter, int addr,
u8 *bytes, size_t size)
int netxen_rom_fast_read(struct netxen_adapter *adapter, int addr, int *valp)
#define NETXEN_BOARDTYPE		0x4008
#define NETXEN_BOARDNUM 		0x400c
#define NETXEN_CHIPNUM			0x4010
int netxen_pinit_from_rom(struct netxen_adapter *adapter)
static struct uni_table_desc *nx_get_table_desc(const u8 *unirom, int section)
#define	QLCNIC_FILEHEADER_SIZE	(14 * 4)
static int
netxen_nic_validate_header(struct netxen_adapter *adapter)
static int
netxen_nic_validate_bootld(struct netxen_adapter *adapter)
static int
netxen_nic_validate_fw(struct netxen_adapter *adapter)
static int
netxen_nic_validate_product_offs(struct netxen_adapter *adapter)
static int
netxen_nic_validate_unified_romimage(struct netxen_adapter *adapter)
static struct uni_data_desc *nx_get_data_desc(struct netxen_adapter *adapter,
u32 section, u32 idx_offset)
static u8 *
nx_get_bootld_offs(struct netxen_adapter *adapter)
static u8 *
nx_get_fw_offs(struct netxen_adapter *adapter)
static __le32
nx_get_fw_size(struct netxen_adapter *adapter)
static __le32
nx_get_fw_version(struct netxen_adapter *adapter)
static __le32
nx_get_bios_version(struct netxen_adapter *adapter)
int
netxen_need_fw_reset(struct netxen_adapter *adapter)
static char *fw_name[] = ;
int
netxen_load_firmware(struct netxen_adapter *adapter)
static int
netxen_validate_firmware(struct netxen_adapter *adapter)
static void
nx_get_next_fwtype(struct netxen_adapter *adapter)
static int
netxen_p3_has_mn(struct netxen_adapter *adapter)
void netxen_request_firmware(struct netxen_adapter *adapter)
void
netxen_release_firmware(struct netxen_adapter *adapter)
int netxen_init_dummy_dma(struct netxen_adapter *adapter)
void netxen_free_dummy_dma(struct netxen_adapter *adapter)
int netxen_phantom_init(struct netxen_adapter *adapter, int pegtune_val)
static int
netxen_receive_peg_ready(struct netxen_adapter *adapter)
int netxen_init_firmware(struct netxen_adapter *adapter)
static void
netxen_handle_linkevent(struct netxen_adapter *adapter, nx_fw_msg_t *msg)
static void
netxen_handle_fw_message(int desc_cnt, int index,
struct nx_host_sds_ring *sds_ring)
static int
netxen_alloc_rx_skb(struct netxen_adapter *adapter,
struct nx_host_rds_ring *rds_ring,
struct netxen_rx_buffer *buffer)
static struct sk_buff *netxen_process_rxbuf(struct netxen_adapter *adapter,
struct nx_host_rds_ring *rds_ring, u16 index, u16 cksum)
static struct netxen_rx_buffer *
netxen_process_rcv(struct netxen_adapter *adapter,
struct nx_host_sds_ring *sds_ring,
int ring, u64 sts_data0)
#define TCP_HDR_SIZE            20
#define TCP_TS_OPTION_SIZE      12
#define TCP_TS_HDR_SIZE         (TCP_HDR_SIZE + TCP_TS_OPTION_SIZE)
static struct netxen_rx_buffer *
netxen_process_lro(struct netxen_adapter *adapter,
struct nx_host_sds_ring *sds_ring,
int ring, u64 sts_data0, u64 sts_data1)
#define netxen_merge_rx_buffers(list, head) \
do  while (0);
int
netxen_process_rcv_ring(struct nx_host_sds_ring *sds_ring, int max)
int netxen_process_cmd_ring(struct netxen_adapter *adapter)
void
netxen_post_rx_buffers(struct netxen_adapter *adapter, u32 ringid,
struct nx_host_rds_ring *rds_ring)
static void
netxen_post_rx_buffers_nodb(struct netxen_adapter *adapter,
struct nx_host_rds_ring *rds_ring)
void netxen_nic_clear_stats(struct netxen_adapter *adapter)
