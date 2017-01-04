#define __OSD_SENSE_H__
enum scsi_sense_keys ;
enum osd_additional_sense_codes ;
enum scsi_descriptor_types ;
struct scsi_sense_descriptor  __packed;
struct scsi_sense_descriptor_based  __packed;
struct scsi_sense_command_specific_data_descriptor  __packed;
struct scsi_sense_key_specific_data_descriptor  __packed;
enum osd_command_functions_bits ;
struct osd_sense_identification_data_descriptor  __packed;
struct osd_sense_response_integrity_check_descriptor  __packed;
struct osd_sense_attributes_data_descriptor  __packed;
#define OSD_CDB_OFFSET(F) offsetof(struct osd_cdb_head, F)
enum osdv2_cdb_field_offset ;
