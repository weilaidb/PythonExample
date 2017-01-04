#define SOURCEFILE_NAME "hpi6205.c"
#define HPI6205_ERROR_BASE 1000
#define HPI6205_ERROR_MSG_RESP_IDLE_TIMEOUT     1015
#define HPI6205_ERROR_MSG_RESP_TIMEOUT          1016
#define HPI6205_ERROR_6205_NO_IRQ               1002
#define HPI6205_ERROR_6205_INIT_FAILED          1003
#define HPI6205_ERROR_6205_REG                  1006
#define HPI6205_ERROR_6205_DSPPAGE              1007
#define HPI6205_ERROR_C6713_HPIC                1009
#define HPI6205_ERROR_C6713_HPIA                1010
#define HPI6205_ERROR_C6713_PLL                 1011
#define HPI6205_ERROR_DSP_INTMEM                1012
#define HPI6205_ERROR_DSP_EXTMEM                1013
#define HPI6205_ERROR_DSP_PLD                   1014
#define HPI6205_ERROR_6205_EEPROM               1017
#define HPI6205_ERROR_DSP_EMIF                  1018
#define C6205_HSR_INTSRC        0x01
#define C6205_HSR_INTAVAL       0x02
#define C6205_HSR_INTAM         0x04
#define C6205_HSR_CFGERR        0x08
#define C6205_HSR_EEREAD        0x10
#define C6205_HDCR_WARMRESET    0x01
#define C6205_HDCR_DSPINT       0x02
#define C6205_HDCR_PCIBOOT      0x04
#define C6205_DSPP_MAP1         0x400
#define C6205_BAR1_PCI_IO_OFFSET (0x027FFF0L)
#define C6205_BAR1_HSR  (C6205_BAR1_PCI_IO_OFFSET)
#define C6205_BAR1_HDCR (C6205_BAR1_PCI_IO_OFFSET+4)
#define C6205_BAR1_DSPP (C6205_BAR1_PCI_IO_OFFSET+8)
#define C6205_BAR0_TIMER1_CTL (0x01980000L)
#define HPICL_ADDR      0x01400000L
#define HPICH_ADDR      0x01400004L
#define HPIAL_ADDR      0x01410000L
#define HPIAH_ADDR      0x01410004L
#define HPIDIL_ADDR     0x01420000L
#define HPIDIH_ADDR     0x01420004L
#define HPIDL_ADDR      0x01430000L
#define HPIDH_ADDR      0x01430004L
#define C6713_EMIF_GCTL         0x01800000
#define C6713_EMIF_CE1          0x01800004
#define C6713_EMIF_CE0          0x01800008
#define C6713_EMIF_CE2          0x01800010
#define C6713_EMIF_CE3          0x01800014
#define C6713_EMIF_SDRAMCTL     0x01800018
#define C6713_EMIF_SDRAMTIMING  0x0180001C
#define C6713_EMIF_SDRAMEXT     0x01800020
struct hpi_hw_obj ;
#define check_before_bbm_copy(status, p_bbm_data, l_first_write, l_second_write)
static int wait_dsp_ack(struct hpi_hw_obj *phw, int state, int timeout_us);
static void send_dsp_command(struct hpi_hw_obj *phw, int cmd);
static u16 adapter_boot_load_dsp(struct hpi_adapter_obj *pao,
u32 *pos_error_code);
static u16 message_response_sequence(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void hw_message(struct hpi_adapter_obj *pao, struct hpi_message *phm,
struct hpi_response *phr);
#define HPI6205_TIMEOUT 1000000
static void subsys_create_adapter(struct hpi_message *phm,
struct hpi_response *phr);
static void adapter_delete(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static u16 create_adapter_obj(struct hpi_adapter_obj *pao,
u32 *pos_error_code);
static void delete_adapter_obj(struct hpi_adapter_obj *pao);
static void outstream_host_buffer_allocate(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void outstream_host_buffer_get_info(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void outstream_host_buffer_free(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void outstream_write(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void outstream_get_info(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void outstream_start(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void outstream_open(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void outstream_reset(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void instream_host_buffer_allocate(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void instream_host_buffer_get_info(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void instream_host_buffer_free(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void instream_read(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void instream_get_info(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static void instream_start(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr);
static u32 boot_loader_read_mem32(struct hpi_adapter_obj *pao, int dsp_index,
u32 address);
static void boot_loader_write_mem32(struct hpi_adapter_obj *pao,
int dsp_index, u32 address, u32 data);
static u16 boot_loader_config_emif(struct hpi_adapter_obj *pao,
int dsp_index);
static u16 boot_loader_test_memory(struct hpi_adapter_obj *pao, int dsp_index,
u32 address, u32 length);
static u16 boot_loader_test_internal_memory(struct hpi_adapter_obj *pao,
int dsp_index);
static u16 boot_loader_test_external_memory(struct hpi_adapter_obj *pao,
int dsp_index);
static u16 boot_loader_test_pld(struct hpi_adapter_obj *pao, int dsp_index);
static void subsys_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void control_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void adapter_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void outstream_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void instream_message(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
void _HPI_6205(struct hpi_adapter_obj *pao, struct hpi_message *phm,
struct hpi_response *phr)
void HPI_6205(struct hpi_message *phm, struct hpi_response *phr)
static void subsys_create_adapter(struct hpi_message *phm,
struct hpi_response *phr)
static void adapter_delete(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static u16 create_adapter_obj(struct hpi_adapter_obj *pao,
u32 *pos_error_code)
static void delete_adapter_obj(struct hpi_adapter_obj *pao)
static void outstream_host_buffer_allocate(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void outstream_host_buffer_get_info(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void outstream_host_buffer_free(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static u32 outstream_get_space_available(struct hpi_hostbuffer_status *status)
static void outstream_write(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void outstream_get_info(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void outstream_start(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void outstream_reset(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void outstream_open(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void instream_host_buffer_allocate(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void instream_host_buffer_get_info(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void instream_host_buffer_free(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void instream_start(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static u32 instream_get_bytes_available(struct hpi_hostbuffer_status *status)
static void instream_read(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void instream_get_info(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
#define HPI6205_MAX_FILES_TO_LOAD 2
static u16 adapter_boot_load_dsp(struct hpi_adapter_obj *pao,
u32 *pos_error_code)
static u32 boot_loader_read_mem32(struct hpi_adapter_obj *pao, int dsp_index,
u32 address)
static void boot_loader_write_mem32(struct hpi_adapter_obj *pao,
int dsp_index, u32 address, u32 data)
static u16 boot_loader_config_emif(struct hpi_adapter_obj *pao, int dsp_index)
static u16 boot_loader_test_memory(struct hpi_adapter_obj *pao, int dsp_index,
u32 start_address, u32 length)
static u16 boot_loader_test_internal_memory(struct hpi_adapter_obj *pao,
int dsp_index)
static u16 boot_loader_test_external_memory(struct hpi_adapter_obj *pao,
int dsp_index)
static u16 boot_loader_test_pld(struct hpi_adapter_obj *pao, int dsp_index)
static short hpi6205_transfer_data(struct hpi_adapter_obj *pao, u8 *p_data,
u32 data_size, int operation)
static int wait_dsp_ack(struct hpi_hw_obj *phw, int state, int timeout_us)
static void send_dsp_command(struct hpi_hw_obj *phw, int cmd)
static unsigned int message_count;
static u16 message_response_sequence(struct hpi_adapter_obj *pao,
struct hpi_message *phm, struct hpi_response *phr)
static void hw_message(struct hpi_adapter_obj *pao, struct hpi_message *phm,
struct hpi_response *phr)
