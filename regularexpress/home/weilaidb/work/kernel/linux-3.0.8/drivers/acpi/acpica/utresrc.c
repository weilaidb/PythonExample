#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utresrc")
#if defined(ACPI_DISASSEMBLER) || defined (ACPI_DEBUGGER)
const char *acpi_gbl_bm_decode[] = ;
const char *acpi_gbl_config_decode[] = ;
const char *acpi_gbl_consume_decode[] = ;
const char *acpi_gbl_dec_decode[] = ;
const char *acpi_gbl_he_decode[] = ;
const char *acpi_gbl_io_decode[] = ;
const char *acpi_gbl_ll_decode[] = ;
const char *acpi_gbl_max_decode[] = ;
const char *acpi_gbl_mem_decode[] = ;
const char *acpi_gbl_min_decode[] = ;
const char *acpi_gbl_mtp_decode[] = ;
const char *acpi_gbl_rng_decode[] = ;
const char *acpi_gbl_rw_decode[] = ;
const char *acpi_gbl_shr_decode[] = ;
const char *acpi_gbl_siz_decode[] = ;
const char *acpi_gbl_trs_decode[] = ;
const char *acpi_gbl_ttp_decode[] = ;
const char *acpi_gbl_typ_decode[] = ;
const u8 acpi_gbl_resource_aml_sizes[] = ;
static const u8 acpi_gbl_resource_types[] = ;
acpi_status
acpi_ut_walk_aml_resources(u8 * aml,
acpi_size aml_length,
acpi_walk_aml_callback user_function, void **context)
acpi_status acpi_ut_validate_resource(void *aml, u8 * return_index)
u8 acpi_ut_get_resource_type(void *aml)
u16 acpi_ut_get_resource_length(void *aml)
u8 acpi_ut_get_resource_header_length(void *aml)
u32 acpi_ut_get_descriptor_length(void *aml)
acpi_status
acpi_ut_get_resource_end_tag(union acpi_operand_object * obj_desc,
u8 ** end_tag)
