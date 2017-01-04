#define HEST_PFX "HEST: "
int hest_disable;
EXPORT_SYMBOL_GPL(hest_disable);
static struct acpi_table_hest *__read_mostly hest_tab;
static const int hest_esrc_len_tab[ACPI_HEST_TYPE_RESERVED] = ;
static int hest_esrc_len(struct acpi_hest_header *hest_hdr)
;
int apei_hest_parse(apei_hest_func_t func, void *data)
EXPORT_SYMBOL_GPL(apei_hest_parse);
struct ghes_arr ;
static int __init hest_parse_ghes_count(struct acpi_hest_header *hest_hdr, void *data)
static int __init hest_parse_ghes(struct acpi_hest_header *hest_hdr, void *data)
static int __init hest_ghes_dev_register(unsigned int ghes_count)
static int __init setup_hest_disable(char *str)
__setup("hest_disable", setup_hest_disable);
void __init acpi_hest_init(void)
