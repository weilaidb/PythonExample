#define __ACSTRUCT_H__
#define ACPI_NEXT_OP_DOWNWARD       1
#define ACPI_NEXT_OP_UPWARD         2
#define ACPI_WALK_NON_METHOD        0
#define ACPI_WALK_METHOD            0x01
#define ACPI_WALK_METHOD_RESTART    0x02
#define ACPI_WALK_CONST_REQUIRED    0x10
#define ACPI_WALK_CONST_OPTIONAL    0x20
struct acpi_walk_state ;
struct acpi_init_walk_info ;
struct acpi_get_devices_info ;
union acpi_aml_operands ;
struct acpi_evaluate_info ;
#define ACPI_IGNORE_RETURN_VALUE        1
struct acpi_device_walk_info ;
struct acpi_walk_info ;
#define ACPI_DISPLAY_SUMMARY        (u8) 0
#define ACPI_DISPLAY_OBJECTS        (u8) 1
#define ACPI_DISPLAY_MASK           (u8) 1
#define ACPI_DISPLAY_SHORT          (u8) 2
