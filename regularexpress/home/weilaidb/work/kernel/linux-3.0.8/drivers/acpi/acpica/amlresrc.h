#define __AMLRESRC_H
#define ACPI_RESTAG_ADDRESS                     "_ADR"
#define ACPI_RESTAG_ALIGNMENT                   "_ALN"
#define ACPI_RESTAG_ADDRESSSPACE                "_ASI"
#define ACPI_RESTAG_ACCESSSIZE                  "_ASZ"
#define ACPI_RESTAG_TYPESPECIFICATTRIBUTES      "_ATT"
#define ACPI_RESTAG_BASEADDRESS                 "_BAS"
#define ACPI_RESTAG_BUSMASTER                   "_BM_"
#define ACPI_RESTAG_DECODE                      "_DEC"
#define ACPI_RESTAG_DMA                         "_DMA"
#define ACPI_RESTAG_DMATYPE                     "_TYP"
#define ACPI_RESTAG_GRANULARITY                 "_GRA"
#define ACPI_RESTAG_INTERRUPT                   "_INT"
#define ACPI_RESTAG_INTERRUPTLEVEL              "_LL_"
#define ACPI_RESTAG_INTERRUPTSHARE              "_SHR"
#define ACPI_RESTAG_INTERRUPTTYPE               "_HE_"
#define ACPI_RESTAG_LENGTH                      "_LEN"
#define ACPI_RESTAG_MEMATTRIBUTES               "_MTP"
#define ACPI_RESTAG_MEMTYPE                     "_MEM"
#define ACPI_RESTAG_MAXADDR                     "_MAX"
#define ACPI_RESTAG_MINADDR                     "_MIN"
#define ACPI_RESTAG_MAXTYPE                     "_MAF"
#define ACPI_RESTAG_MINTYPE                     "_MIF"
#define ACPI_RESTAG_REGISTERBITOFFSET           "_RBO"
#define ACPI_RESTAG_REGISTERBITWIDTH            "_RBW"
#define ACPI_RESTAG_RANGETYPE                   "_RNG"
#define ACPI_RESTAG_READWRITETYPE               "_RW_"
#define ACPI_RESTAG_TRANSLATION                 "_TRA"
#define ACPI_RESTAG_TRANSTYPE                   "_TRS"
#define ACPI_RESTAG_TYPE                        "_TTP"
#define ACPI_RESTAG_XFERTYPE                    "_SIZ"
#define ASL_RDESC_IRQ_SIZE                      0x02
#define ASL_RDESC_DMA_SIZE                      0x02
#define ASL_RDESC_ST_DEPEND_SIZE                0x00
#define ASL_RDESC_END_DEPEND_SIZE               0x00
#define ASL_RDESC_IO_SIZE                       0x07
#define ASL_RDESC_FIXED_IO_SIZE                 0x03
#define ASL_RDESC_END_TAG_SIZE                  0x01
struct asl_resource_node ;
#define ACPI_AML_SIZE_LARGE(r)      (sizeof (r) - sizeof (struct aml_resource_large_header))
#define ACPI_AML_SIZE_SMALL(r)      (sizeof (r) - sizeof (struct aml_resource_small_header))
#define AML_RESOURCE_SMALL_HEADER_COMMON \
u8                              descriptor_type;
struct aml_resource_small_header ;
struct aml_resource_irq ;
struct aml_resource_irq_noflags ;
struct aml_resource_dma ;
struct aml_resource_start_dependent ;
struct aml_resource_start_dependent_noprio ;
struct aml_resource_end_dependent ;
struct aml_resource_io ;
struct aml_resource_fixed_io ;
struct aml_resource_vendor_small ;
struct aml_resource_end_tag ;
#define AML_RESOURCE_LARGE_HEADER_COMMON \
u8                              descriptor_type;\
u16                             resource_length;
struct aml_resource_large_header ;
struct aml_resource_memory24 ;
struct aml_resource_vendor_large ;
struct aml_resource_memory32 ;
struct aml_resource_fixed_memory32 ;
#define AML_RESOURCE_ADDRESS_COMMON \
u8                              resource_type; \
u8                              flags; \
u8                              specific_flags;
struct aml_resource_address ;
struct aml_resource_extended_address64 ;
#define AML_RESOURCE_EXTENDED_ADDRESS_REVISION          1
struct aml_resource_address64 ;
struct aml_resource_address32 ;
struct aml_resource_address16 ;
struct aml_resource_extended_irq ;
struct aml_resource_generic_register ;
union aml_resource ;
