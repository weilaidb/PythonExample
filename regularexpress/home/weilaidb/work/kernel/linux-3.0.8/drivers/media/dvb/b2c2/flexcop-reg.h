#define __FLEXCOP_REG_H__
typedef enum  flexcop_revision_t;
typedef enum  flexcop_device_type_t;
typedef enum  flexcop_bus_t;
#if defined(__LITTLE_ENDIAN)
#if defined(__BIG_ENDIAN)
#error no endian defined
#define fc_data_Tag_ID_DVB  0x3e
#define fc_data_Tag_ID_ATSC 0x3f
#define fc_data_Tag_ID_IDSB 0x8b
#define fc_key_code_default 0x1
#define fc_key_code_even    0x2
#define fc_key_code_odd     0x3
extern flexcop_ibi_value ibi_zero;
typedef enum  flexcop_i2c_port_t;
typedef enum  flexcop_access_op_t;
typedef enum  flexcop_sram_dest_t;
typedef enum  flexcop_sram_dest_target_t;
typedef enum  flexcop_sram_type_t;
typedef enum  flexcop_wan_speed_t;
typedef enum  flexcop_dma_index_t;
typedef enum  flexcop_dma_addr_index_t;
typedef enum  flexcop_ibi_register;
#define flexcop_set_ibi_value(reg,attr,val)
