u64 cper_next_record_id(void)
EXPORT_SYMBOL_GPL(cper_next_record_id);
static const char *cper_severity_strs[] = ;
static const char *cper_severity_str(unsigned int severity)
void cper_print_bits(const char *pfx, unsigned int bits,
const char *strs[], unsigned int strs_size)
static const char *cper_proc_type_strs[] = ;
static const char *cper_proc_isa_strs[] = ;
static const char *cper_proc_error_type_strs[] = ;
static const char *cper_proc_op_strs[] = ;
static const char *cper_proc_flag_strs[] = ;
static void cper_print_proc_generic(const char *pfx,
const struct cper_sec_proc_generic *proc)
static const char *cper_mem_err_type_strs[] = ;
static void cper_print_mem(const char *pfx, const struct cper_sec_mem_err *mem)
static const char *cper_pcie_port_type_strs[] = ;
static void cper_print_pcie(const char *pfx, const struct cper_sec_pcie *pcie,
const struct acpi_hest_generic_data *gdata)
static const char *apei_estatus_section_flag_strs[] = ;
static void apei_estatus_print_section(
const char *pfx, const struct acpi_hest_generic_data *gdata, int sec_no)
void apei_estatus_print(const char *pfx,
const struct acpi_hest_generic_status *estatus)
EXPORT_SYMBOL_GPL(apei_estatus_print);
int apei_estatus_check_header(const struct acpi_hest_generic_status *estatus)
EXPORT_SYMBOL_GPL(apei_estatus_check_header);
int apei_estatus_check(const struct acpi_hest_generic_status *estatus)
EXPORT_SYMBOL_GPL(apei_estatus_check);
