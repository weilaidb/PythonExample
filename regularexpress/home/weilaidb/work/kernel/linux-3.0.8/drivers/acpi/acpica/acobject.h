#define _ACOBJECT_H
#if ACPI_MACHINE_WIDTH == 64
#define ACPI_OBJECT_COMMON_HEADER \
union acpi_operand_object       *next_object;\
u8                              descriptor_type;\
u8                              type;\
u16                             reference_count;\
u8                              flags;
#define AOPOBJ_AML_CONSTANT         0x01
#define AOPOBJ_STATIC_POINTER       0x02
#define AOPOBJ_DATA_VALID           0x04
#define AOPOBJ_OBJECT_INITIALIZED   0x08
#define AOPOBJ_SETUP_COMPLETE       0x10
#define AOPOBJ_INVALID              0x20
struct acpi_object_common ;
struct acpi_object_integer ;
#define ACPI_COMMON_BUFFER_INFO(_type) \
_type                           *pointer; \
u32                             length;
struct acpi_object_string ;
struct acpi_object_buffer ;
struct acpi_object_package ;
struct acpi_object_event ;
struct acpi_object_mutex ;
struct acpi_object_region ;
struct acpi_object_method ;
#define ACPI_METHOD_MODULE_LEVEL        0x01
#define ACPI_METHOD_INTERNAL_ONLY       0x02
#define ACPI_METHOD_SERIALIZED          0x04
#define ACPI_METHOD_SERIALIZED_PENDING  0x08
#define ACPI_METHOD_MODIFIED_NAMESPACE  0x10
#define ACPI_COMMON_NOTIFY_INFO \
union acpi_operand_object       *system_notify;\
union acpi_operand_object       *device_notify;\
union acpi_operand_object       *handler;
struct acpi_object_notify_common ;
struct acpi_object_device ;
struct acpi_object_power_resource ;
struct acpi_object_processor ;
struct acpi_object_thermal_zone ;
#define ACPI_COMMON_FIELD_INFO \
u8                              field_flags;\
u8                              attribute;\
u8                              access_byte_width;\
struct acpi_namespace_node      *node;\
u32                             bit_length;\
u32                             base_byte_offset;\
u32                             value;\
u8                              start_field_bit_offset;\
struct acpi_object_field_common ;
struct acpi_object_region_field ;
struct acpi_object_bank_field ;
struct acpi_object_index_field ;
struct acpi_object_buffer_field ;
struct acpi_object_notify_handler ;
struct acpi_object_addr_handler ;
#define ACPI_ADDR_HANDLER_DEFAULT_INSTALLED  0x01
struct acpi_object_reference ;
typedef enum  ACPI_REFERENCE_CLASSES;
struct acpi_object_extra ;
struct acpi_object_data ;
struct acpi_object_cache_list ;
union acpi_operand_object ;
#define ACPI_DESC_TYPE_CACHED           0x01
#define ACPI_DESC_TYPE_STATE            0x02
#define ACPI_DESC_TYPE_STATE_UPDATE     0x03
#define ACPI_DESC_TYPE_STATE_PACKAGE    0x04
#define ACPI_DESC_TYPE_STATE_CONTROL    0x05
#define ACPI_DESC_TYPE_STATE_RPSCOPE    0x06
#define ACPI_DESC_TYPE_STATE_PSCOPE     0x07
#define ACPI_DESC_TYPE_STATE_WSCOPE     0x08
#define ACPI_DESC_TYPE_STATE_RESULT     0x09
#define ACPI_DESC_TYPE_STATE_NOTIFY     0x0A
#define ACPI_DESC_TYPE_STATE_THREAD     0x0B
#define ACPI_DESC_TYPE_WALK             0x0C
#define ACPI_DESC_TYPE_PARSER           0x0D
#define ACPI_DESC_TYPE_OPERAND          0x0E
#define ACPI_DESC_TYPE_NAMED            0x0F
#define ACPI_DESC_TYPE_MAX              0x0F
struct acpi_common_descriptor ;
union acpi_descriptor ;
