#define _HPI_INTERNAL_H_
#define HPI_MAX_ADAPTER_MEM_SPACES (2)
void hpios_locked_mem_init(void
);
void hpios_locked_mem_free_all(void
);
#define hpios_locked_mem_prepare(a, b, c, d);
#define hpios_locked_mem_unprepare(a)
u16 hpios_locked_mem_alloc(struct consistent_dma_area *p_locked_mem_handle,
u32 size,
struct pci_dev *p_os_reference
);
u16 hpios_locked_mem_free(struct consistent_dma_area *locked_mem_handle);
u16 hpios_locked_mem_get_phys_addr(struct consistent_dma_area
*locked_mem_handle, u32 *p_physical_addr);
u16 hpios_locked_mem_get_virt_addr(struct consistent_dma_area
*locked_mem_handle, void **ppv_virtual_addr);
u16 hpios_locked_mem_valid(struct consistent_dma_area *locked_mem_handle);
void hpios_delay_micro_seconds(u32 num_micro_sec);
struct hpi_message;
struct hpi_response;
typedef void hpi_handler_func(struct hpi_message *, struct hpi_response *);
#define compile_time_assert(cond, msg) \
typedef char ASSERT_##msg[(cond) ? 1 : -1]
enum HPI_BUSES ;
enum HPI_SUBSYS_OPTIONS ;
enum HPI_VOLUME_FLAGS ;
#define HPI_CTL_ATTR(ctl, ai) ((HPI_CONTROL_##ctl << 8) + ai)
#define HPI_CTL_ATTR_INDEX(i) (i & 0xff)
#define HPI_CTL_ATTR_CONTROL(i) (i >> 8)
enum HPI_CONTROL_ATTRIBUTES ;
#define HPI_POLARITY_POSITIVE           0
#define HPI_POLARITY_NEGATIVE           1
#define  HPI_COBRANET_HMI_cobra_bridge           0x20000
#define  HPI_COBRANET_HMI_cobra_bridge_tx_pkt_buf \
(HPI_COBRANET_HMI_cobra_bridge + 0x1000)
#define  HPI_COBRANET_HMI_cobra_bridge_rx_pkt_buf \
(HPI_COBRANET_HMI_cobra_bridge + 0x2000)
#define  HPI_COBRANET_HMI_cobra_if_table1         0x110000
#define  HPI_COBRANET_HMI_cobra_if_phy_address \
(HPI_COBRANET_HMI_cobra_if_table1 + 0xd)
#define  HPI_COBRANET_HMI_cobra_protocolIP       0x72000
#define  HPI_COBRANET_HMI_cobra_ip_mon_currentIP \
(HPI_COBRANET_HMI_cobra_protocolIP + 0x0)
#define  HPI_COBRANET_HMI_cobra_ip_mon_staticIP \
(HPI_COBRANET_HMI_cobra_protocolIP + 0x2)
#define  HPI_COBRANET_HMI_cobra_sys              0x100000
#define  HPI_COBRANET_HMI_cobra_sys_desc \
(HPI_COBRANET_HMI_cobra_sys + 0x0)
#define  HPI_COBRANET_HMI_cobra_sys_objectID \
(HPI_COBRANET_HMI_cobra_sys + 0x100)
#define  HPI_COBRANET_HMI_cobra_sys_contact \
(HPI_COBRANET_HMI_cobra_sys + 0x200)
#define  HPI_COBRANET_HMI_cobra_sys_name \
(HPI_COBRANET_HMI_cobra_sys + 0x300)
#define  HPI_COBRANET_HMI_cobra_sys_location \
(HPI_COBRANET_HMI_cobra_sys + 0x400)
#define HPI_COBRANET_HMI_STATUS_RXPACKET 2
#define HPI_COBRANET_HMI_STATUS_TXPACKET 3
#define HPI_ETHERNET_HEADER_SIZE (16)
#define HPI_ETHERNET_PACKET_ID                  0x85
#define HPI_ETHERNET_PACKET_V1                  0x01
#define HPI_ETHERNET_PACKET_HOSTED_VIA_HMI      0x20
#define HPI_ETHERNET_PACKET_HOSTED_VIA_HMI_V1   0x21
#define HPI_ETHERNET_PACKET_HOSTED_VIA_HPI      0x40
#define HPI_ETHERNET_PACKET_HOSTED_VIA_HPI_V1   0x41
#define HPI_ETHERNET_UDP_PORT 44600
#define HPI_ETHERNET_TIMEOUT_MS 500
enum HPI_BUFFER_CMDS ;
#define HPI_ID_ISAPNP_AUDIOSCIENCE      0x0669
#define HPI_PCI_VENDOR_ID_AUDIOSCIENCE  0x175C
#define HPI_PCI_VENDOR_ID_MOTOROLA      0x1057
#define HPI_PCI_VENDOR_ID_TI            0x104C
#define HPI_PCI_DEV_ID_PCI2040          0xAC60
#define HPI_PCI_DEV_ID_DSP6205          0xA106
#define HPI_USB_VENDOR_ID_AUDIOSCIENCE  0x1257
#define HPI_USB_W2K_TAG                 0x57495341
#define HPI_USB_LINUX_TAG               0x4C495341
#define HPI_ADAPTER_INDEX_INVALID 0xFFFF
#define HPI_ADAPTER_FAMILY_MASK         0xff00
#define HPI_MODULE_FAMILY_MASK          0xfff0
#define HPI_ADAPTER_FAMILY_ASI(f)   (f & HPI_ADAPTER_FAMILY_MASK)
#define HPI_MODULE_FAMILY_ASI(f)   (f & HPI_MODULE_FAMILY_MASK)
#define HPI_ADAPTER_ASI(f)   (f)
enum HPI_MESSAGE_TYPES ;
enum HPI_OBJECT_TYPES ;
#define HPI_OBJ_FUNCTION_SPACING 0x100
#define HPI_FUNC_ID(obj, i) (HPI_OBJ_##obj * HPI_OBJ_FUNCTION_SPACING + i)
#define HPI_EXTRACT_INDEX(fn) (fn & 0xff)
enum HPI_FUNCTION_IDS ;
struct hpi_pci ;
struct hpi_resource ;
struct hpi_msg_format ;
struct hpi_msg_data ;
struct hpi_data_legacy32 ;
struct hpi_data_compat32 ;
struct hpi_buffer ;
struct hpi_hostbuffer_status ;
struct hpi_streamid ;
struct hpi_punchinout ;
struct hpi_subsys_msg ;
struct hpi_subsys_res ;
union hpi_adapterx_msg ;
struct hpi_adapter_res ;
union hpi_adapterx_res ;
struct hpi_stream_msg ;
struct hpi_stream_res ;
struct hpi_mixer_msg ;
struct hpi_mixer_res ;
union hpi_mixerx_msg ;
union hpi_mixerx_res ;
struct hpi_control_msg ;
struct hpi_control_union_msg ;
struct hpi_control_res ;
union hpi_control_union_res ;
struct hpi_controlx_msg_cobranet_data ;
struct hpi_controlx_msg_cobranet_bigdata ;
struct hpi_controlx_msg_pad_data ;
struct hpi_controlx_msg_generic ;
struct hpi_controlx_msg ;
struct hpi_controlx_res_cobranet_data ;
struct hpi_controlx_res_cobranet_bigdata ;
struct hpi_controlx_res_cobranet_status ;
struct hpi_controlx_res_generic ;
struct hpi_controlx_res ;
struct hpi_nvmemory_msg ;
struct hpi_nvmemory_res ;
struct hpi_gpio_msg ;
struct hpi_gpio_res ;
struct hpi_async_msg ;
struct hpi_async_res ;
struct hpi_watchdog_msg ;
struct hpi_watchdog_res ;
struct hpi_clock_msg ;
struct hpi_clock_res ;
struct hpi_profile_msg ;
struct hpi_profile_res_open ;
struct hpi_profile_res_time ;
struct hpi_profile_res_name ;
struct hpi_profile_res ;
struct hpi_message_header ;
struct hpi_message ;
#define HPI_MESSAGE_SIZE_BY_OBJECT
struct hpi_response_header ;
struct hpi_response ;
#define HPI_RESPONSE_SIZE_BY_OBJECT
#define HPINET_ETHERNET_DATA_SIZE (1500)
#define HPINET_IP_HDR_SIZE (20)
#define HPINET_IP_DATA_SIZE (HPINET_ETHERNET_DATA_SIZE - HPINET_IP_HDR_SIZE)
#define HPINET_UDP_HDR_SIZE (8)
#define HPINET_UDP_DATA_SIZE (HPINET_IP_DATA_SIZE - HPINET_UDP_HDR_SIZE)
#define HPINET_ASI_HDR_SIZE (2)
#define HPINET_ASI_DATA_SIZE (HPINET_UDP_DATA_SIZE - HPINET_ASI_HDR_SIZE)
#define HPI_MAX_PAYLOAD_SIZE (HPINET_ASI_DATA_SIZE - 2)
struct hpi_msg_adapter_get_info ;
struct hpi_res_adapter_get_info ;
struct hpi_msg_adapter_query_flash ;
struct hpi_res_adapter_query_flash ;
struct hpi_msg_adapter_start_flash ;
struct hpi_res_adapter_start_flash ;
struct hpi_msg_adapter_program_flash_payload ;
struct hpi_msg_adapter_program_flash ;
struct hpi_res_adapter_program_flash ;
struct hpi_msg_adapter_debug_read ;
struct hpi_res_adapter_debug_read ;
#if 1
#define hpi_message_header_v1 hpi_message_header
#define hpi_response_header_v1 hpi_response_header
struct hpi_message_header_v1 ;
struct hpi_response_header_v1 ;
struct hpi_msg_payload_v0 ;
struct hpi_res_payload_v0 ;
union hpi_message_buffer_v1 ;
union hpi_response_buffer_v1 ;
compile_time_assert((sizeof(union hpi_message_buffer_v1) <=
HPI_MAX_PAYLOAD_SIZE), message_buffer_ok);
compile_time_assert((sizeof(union hpi_response_buffer_v1) <=
HPI_MAX_PAYLOAD_SIZE), response_buffer_ok);
struct hpi_control_defn ;
#define HPI_CACHE_INVALID_UINT16 0xFFFF
#define HPI_CACHE_INVALID_SHORT -32768
struct hpi_control_cache_info ;
struct hpi_control_cache_vol ;
struct hpi_control_cache_meter ;
struct hpi_control_cache_channelmode ;
struct hpi_control_cache_mux ;
struct hpi_control_cache_level ;
struct hpi_control_cache_tuner ;
struct hpi_control_cache_aes3rx ;
struct hpi_control_cache_aes3tx ;
struct hpi_control_cache_tonedetector ;
struct hpi_control_cache_silencedetector ;
struct hpi_control_cache_sampleclock ;
struct hpi_control_cache_microphone ;
struct hpi_control_cache_generic ;
struct hpi_control_cache_single ;
struct hpi_control_cache_pad ;
struct hpi_fifo_buffer ;
char hpi_handle_object(const u32 handle);
void hpi_handle_to_indexes(const u32 handle, u16 *pw_adapter_index,
u16 *pw_object_index);
u32 hpi_indexes_to_handle(const char c_object, const u16 adapter_index,
const u16 object_index);
void hpi_send_recv(struct hpi_message *phm, struct hpi_response *phr);
u16 hpi_subsys_create_adapter(const struct hpi_resource *p_resource,
u16 *pw_adapter_index);
u16 hpi_outstream_host_buffer_get_info(u32 h_outstream, u8 **pp_buffer,
struct hpi_hostbuffer_status **pp_status);
u16 hpi_instream_host_buffer_get_info(u32 h_instream, u8 **pp_buffer,
struct hpi_hostbuffer_status **pp_status);
u16 hpi_adapter_restart(u16 adapter_index);
void hpi_format_to_msg(struct hpi_msg_format *pMF,
const struct hpi_format *pF);
void hpi_stream_response_to_legacy(struct hpi_stream_res *pSR);
hpi_handler_func HPI_6000;
hpi_handler_func HPI_6205;
