#define _TAPE_3590_H
#define MEDIUM_SENSE	0xc2
#define READ_PREVIOUS	0x0a
#define MODE_SENSE	0xcf
#define PERFORM_SS_FUNC 0x77
#define READ_SS_DATA	0x3e
#define PREP_RD_SS_DATA 0x18
#define RD_ATTMSG	0x3
#define SENSE_BRA_PER  0
#define SENSE_BRA_CONT 1
#define SENSE_BRA_RE   2
#define SENSE_BRA_DRE  3
#define SENSE_FMT_LIBRARY	0x23
#define SENSE_FMT_UNSOLICITED	0x40
#define SENSE_FMT_COMMAND_REJ	0x41
#define SENSE_FMT_COMMAND_EXEC0 0x50
#define SENSE_FMT_COMMAND_EXEC1 0x51
#define SENSE_FMT_EVENT0	0x60
#define SENSE_FMT_EVENT1	0x61
#define SENSE_FMT_MIM		0x70
#define SENSE_FMT_SIM		0x71
#define MSENSE_UNASSOCIATED	 0x00
#define MSENSE_ASSOCIATED_MOUNT	 0x01
#define MSENSE_ASSOCIATED_UMOUNT 0x02
#define MSENSE_CRYPT_MASK	 0x00000010
#define TAPE_3590_MAX_MSG	 0xb0
struct tape_3590_disc_data ;
#define TAPE_3590_CRYPT_INFO(device) \
((struct tape_3590_disc_data*)(device->discdata))->crypt_info
#define TAPE_3590_READ_BACK_OP(device) \
((struct tape_3590_disc_data*)(device->discdata))->read_back_op
struct tape_3590_sense  __attribute__ ((packed));
struct tape_3590_med_sense  __attribute__ ((packed));
struct tape_3590_rdc_data  __attribute__ ((packed));
struct tape3592_kekl  __attribute__ ((packed));
struct tape3592_kekl_pair  __attribute__ ((packed));
struct tape3592_kekl_query_data  __attribute__ ((packed));
struct tape3592_kekl_query_order  __attribute__ ((packed));
struct tape3592_kekl_set_order  __attribute__ ((packed));
