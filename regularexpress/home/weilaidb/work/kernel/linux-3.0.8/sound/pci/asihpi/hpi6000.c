#define SOURCEFILE_NAME "hpi6000.c"
#define HPI_HIF_BASE (0x00000200)
#define HPI_HIF_ADDR(member) \
(HPI_HIF_BASE + offsetof(struct hpi_hif_6000, member))
#define HPI_HIF_ERROR_MASK      0x4000
#define HPI6000_ERROR_BASE 900
#define HPI6000_ERROR_MSG_RESP_IDLE_TIMEOUT             901
#define HPI6000_ERROR_MSG_RESP_GET_RESP_ACK             903
#define HPI6000_ERROR_MSG_GET_ADR                       904
#define HPI6000_ERROR_RESP_GET_ADR                      905
#define HPI6000_ERROR_MSG_RESP_BLOCKWRITE32             906
#define HPI6000_ERROR_MSG_RESP_BLOCKREAD32              907
#define HPI6000_ERROR_CONTROL_CACHE_PARAMS              909
#define HPI6000_ERROR_SEND_DATA_IDLE_TIMEOUT            911
#define HPI6000_ERROR_SEND_DATA_ACK                     912
#define HPI6000_ERROR_SEND_DATA_ADR                     913
#define HPI6000_ERROR_SEND_DATA_TIMEOUT                 914
#define HPI6000_ERROR_SEND_DATA_CMD                     915
#define HPI6000_ERROR_SEND_DATA_WRITE                   916
#define HPI6000_ERROR_SEND_DATA_IDLECMD                 917
#define HPI6000_ERROR_GET_DATA_IDLE_TIMEOUT             921
#define HPI6000_ERROR_GET_DATA_ACK                      922
#define HPI6000_ERROR_GET_DATA_CMD                      923
#define HPI6000_ERROR_GET_DATA_READ                     924
#define HPI6000_ERROR_GET_DATA_IDLECMD                  925
#define HPI6000_ERROR_CONTROL_CACHE_ADDRLEN             951
#define HPI6000_ERROR_CONTROL_CACHE_READ                952
#define HPI6000_ERROR_CONTROL_CACHE_FLUSH               953
#define HPI6000_ERROR_MSG_RESP_GETRESPCMD               961
#define HPI6000_ERROR_MSG_RESP_IDLECMD                  962
#define HPI6000_ERROR_UNHANDLED_SUBSYS_ID               930
#define HPI6000_ERROR_INIT_PCI2040                      931
#define HPI6000_ERROR_INIT_DSPHPI                       932
#define HPI6000_ERROR_INIT_DSPINTMEM                    933
#define HPI6000_ERROR_INIT_SDRAM1                       934
#define HPI6000_ERROR_INIT_SDRAM2                       935
#define HPI6000_ERROR_INIT_VERIFY                       938
#define HPI6000_ERROR_INIT_NOACK                        939
#define HPI6000_ERROR_INIT_PLDTEST1                     941
#define HPI6000_ERROR_INIT_PLDTEST2                     942
#define HIDE_PCI_ASSERTS
#define PROFILE_DSP2
#define INTERRUPT_EVENT_SET     0
#define INTERRUPT_EVENT_CLEAR   1
#define INTERRUPT_MASK_SET      2
#define INTERRUPT_MASK_CLEAR    3
#define HPI_ERROR_REPORT        4
#define HPI_RESET               5
#define HPI_DATA_WIDTH          6
#define MAX_DSPS 2
#define DSP_SPACING             0x800
#define CONTROL                 0x0000
#define ADDRESS                 0x0200
#define DATA_AUTOINC            0x0400
#define DATA                    0x0600
#define TIMEOUT 500000
struct dsp_obj ;
struct hpi_hw_obj ;
static u16 hpi6000_dsp_block_write32(struct hpi_adapter_obj *pao,
u16 dsp_index, u32 hpi_address, u32 *source, u32 count);
static u16 hpi6000_dsp_block_read32(struct hpi_adapter_obj *pao,
u16 dsp_index, u32 hpi_address, u32 *dest, u32 count);
static short hpi6000_adapter_boot_load_dsp(struct hpi_adapter_obj *pao,
u32 *pos_error_code);
static short hpi6000_check_PCI2040_error_flag(struct hpi_adapter_obj *pao,
u16 read_or_write);
#define H6READ 1
#define H6WRITE 0
static short hpi6000_update_control_cache(struct hpi_adapter_obj *pao,
struct hpi_message *phm);
static short hpi6000_message_response_sequence(struct hpi_adapter_obj *pao,
u16 dsp_index, struct hpi_message *phm, struct hpi_response *phr);
static void hw_message(struct hpi_adapter_obj *pao, struct hpi_message *phm,
struct hpi_response *phr);
static short hpi6000_wait_dsp_ack(struct hpi_adapter_obj *pao, u16 dsp_index,
u32 ack_value);
static short hpi6000_send_host_command(struct hpi_adapter_obj *pao,
u16 dsp_index, u32 host_cmd);
static void hpi6000_send_dsp_interrupt(struct dsp_obj *pdo);
static short hpi6000_send_data(struct hpi_adapter_obj *pao, u16 dsp_index,
struct hpi_message *phm, struct hpi_response *phr);
static short hpi6000_get_data(struct hpi_adapter_obj *pao, u16 dsp_index,
struct hpi_message *phm, struct hpi_response *phr);
static void hpi_write_word(struct dsp_obj *pdo, u32 address, u32 data);
static u32 hpi_read_word(struct dsp_obj *pdo, u32 address);
static void hpi_write_block(struct dsp_obj *pdo, u32 address, u32 *pdata,
u32 length);
static void hpi_read_block(struct dsp_obj *pdo, u32 address, u32 *pdata,
u32 length);
static void subsys_create_adapter(struct hpi_message *phm,
struct hpi_response *phr);
static void adapter_delete(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void adapter_get_asserts(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static short create_adapter_obj(struct hpi_adapter_obj *pao,
u32 *pos_error_code);
static void delete_adapter_obj(struct hpi_adapter_obj *pao);
static u16 gw_pci_read_asserts;
static u16 gw_pci_write_asserts;
static void subsys_message(struct hpi_message *phm, struct hpi_response *phr)
static void control_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void adapter_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void outstream_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void instream_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
void HPI_6000(struct hpi_message *phm, struct hpi_response *phr)
static void subsys_create_adapter(struct hpi_message *phm,
struct hpi_response *phr)
static void adapter_delete(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static short create_adapter_obj(struct hpi_adapter_obj *pao,
u32 *pos_error_code)
static void delete_adapter_obj(struct hpi_adapter_obj *pao)
static void adapter_get_asserts(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static short hpi6000_adapter_boot_load_dsp(struct hpi_adapter_obj *pao,
u32 *pos_error_code)
#define PCI_TIMEOUT 100
static int hpi_set_address(struct dsp_obj *pdo, u32 address)
static void hpi_write_word(struct dsp_obj *pdo, u32 address, u32 data)
static u32 hpi_read_word(struct dsp_obj *pdo, u32 address)
static void hpi_write_block(struct dsp_obj *pdo, u32 address, u32 *pdata,
u32 length)
static void hpi_read_block(struct dsp_obj *pdo, u32 address, u32 *pdata,
u32 length)
static u16 hpi6000_dsp_block_write32(struct hpi_adapter_obj *pao,
u16 dsp_index, u32 hpi_address, u32 *source, u32 count)
static u16 hpi6000_dsp_block_read32(struct hpi_adapter_obj *pao,
u16 dsp_index, u32 hpi_address, u32 *dest, u32 count)
static short hpi6000_message_response_sequence(struct hpi_adapter_obj *pao,
u16 dsp_index, struct hpi_message *phm, struct hpi_response *phr)
#define MSG_ADDRESS (HPI_HIF_BASE+0x18)
#define MSG_LENGTH 11
#define RESP_ADDRESS (HPI_HIF_BASE+0x44)
#define RESP_LENGTH 16
#define QUEUE_START  (HPI_HIF_BASE+0x88)
#define QUEUE_SIZE 0x8000
static short hpi6000_send_data_check_adr(u32 address, u32 length_in_dwords)
static short hpi6000_get_data(struct hpi_adapter_obj *pao, u16 dsp_index,
struct hpi_message *phm, struct hpi_response *phr)
static void hpi6000_send_dsp_interrupt(struct dsp_obj *pdo)
static short hpi6000_send_host_command(struct hpi_adapter_obj *pao,
u16 dsp_index, u32 host_cmd)
static short hpi6000_check_PCI2040_error_flag(struct hpi_adapter_obj *pao,
u16 read_or_write)
static short hpi6000_wait_dsp_ack(struct hpi_adapter_obj *pao, u16 dsp_index,
u32 ack_value)
static short hpi6000_update_control_cache(struct hpi_adapter_obj *pao,
struct hpi_message *phm)
static u16 get_dsp_index(struct hpi_adapter_obj *pao, struct hpi_message *phm)
static void hw_message(struct hpi_adapter_obj *pao, struct hpi_message *phm,
struct hpi_response *phr)
