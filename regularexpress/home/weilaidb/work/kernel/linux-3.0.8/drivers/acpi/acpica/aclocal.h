#define __ACLOCAL_H__
#define ACPI_SERIALIZED                 0xFF
typedef u32 acpi_mutex_handle;
#define ACPI_GLOBAL_LOCK                (acpi_semaphore) (-1)
#define AML_NUM_OPCODES                 0x7F
struct acpi_walk_state;
struct acpi_obj_mutex;
union acpi_parse_object;
#define ACPI_MTX_INTERPRETER            0
#define ACPI_MTX_NAMESPACE              1
#define ACPI_MTX_TABLES                 2
#define ACPI_MTX_EVENTS                 3
#define ACPI_MTX_CACHES                 4
#define ACPI_MTX_MEMORY                 5
#define ACPI_MTX_DEBUG_CMD_COMPLETE     6
#define ACPI_MTX_DEBUG_CMD_READY        7
#define ACPI_MAX_MUTEX                  7
#define ACPI_NUM_MUTEX                  ACPI_MAX_MUTEX+1
struct acpi_rw_lock ;
#define ACPI_LOCK_GPES                  0
#define ACPI_LOCK_HARDWARE              1
#define ACPI_MAX_LOCK                   1
#define ACPI_NUM_LOCK                   ACPI_MAX_LOCK+1
#define ACPI_MUTEX_NOT_ACQUIRED         (acpi_thread_id) 0
struct acpi_mutex_info ;
#define ACPI_MTX_DO_NOT_LOCK            0
#define ACPI_MTX_LOCK                   1
#define ACPI_FIELD_BYTE_GRANULARITY     1
#define ACPI_FIELD_WORD_GRANULARITY     2
#define ACPI_FIELD_DWORD_GRANULARITY    4
#define ACPI_FIELD_QWORD_GRANULARITY    8
#define ACPI_ENTRY_NOT_FOUND            NULL
typedef enum  acpi_interpreter_mode;
struct acpi_namespace_node ;
#define ANOBJ_RESERVED                  0x01
#define ANOBJ_TEMPORARY                 0x02
#define ANOBJ_METHOD_ARG                0x04
#define ANOBJ_METHOD_LOCAL              0x08
#define ANOBJ_SUBTREE_HAS_INI           0x10
#define ANOBJ_EVALUATED                 0x20
#define ANOBJ_ALLOCATED_BUFFER          0x40
#define ANOBJ_IS_EXTERNAL               0x08
#define ANOBJ_METHOD_NO_RETVAL          0x10
#define ANOBJ_METHOD_SOME_NO_RETVAL     0x20
#define ANOBJ_IS_BIT_OFFSET             0x40
#define ANOBJ_IS_REFERENCED             0x80
struct acpi_table_list ;
#define ACPI_ROOT_ORIGIN_UNKNOWN        (0)
#define ACPI_ROOT_ORIGIN_ALLOCATED      (1)
#define ACPI_ROOT_ALLOW_RESIZE          (2)
#define ACPI_TABLE_INDEX_DSDT           (0)
#define ACPI_TABLE_INDEX_FACS           (1)
struct acpi_find_context ;
struct acpi_ns_search_data ;
#define ACPI_COPY_TYPE_SIMPLE           0
#define ACPI_COPY_TYPE_PACKAGE          1
struct acpi_namestring_info ;
struct acpi_create_field_info ;
typedef
acpi_status(*ACPI_INTERNAL_METHOD) (struct acpi_walk_state * walk_state);
#define ACPI_BTYPE_ANY                  0x00000000
#define ACPI_BTYPE_INTEGER              0x00000001
#define ACPI_BTYPE_STRING               0x00000002
#define ACPI_BTYPE_BUFFER               0x00000004
#define ACPI_BTYPE_PACKAGE              0x00000008
#define ACPI_BTYPE_FIELD_UNIT           0x00000010
#define ACPI_BTYPE_DEVICE               0x00000020
#define ACPI_BTYPE_EVENT                0x00000040
#define ACPI_BTYPE_METHOD               0x00000080
#define ACPI_BTYPE_MUTEX                0x00000100
#define ACPI_BTYPE_REGION               0x00000200
#define ACPI_BTYPE_POWER                0x00000400
#define ACPI_BTYPE_PROCESSOR            0x00000800
#define ACPI_BTYPE_THERMAL              0x00001000
#define ACPI_BTYPE_BUFFER_FIELD         0x00002000
#define ACPI_BTYPE_DDB_HANDLE           0x00004000
#define ACPI_BTYPE_DEBUG_OBJECT         0x00008000
#define ACPI_BTYPE_REFERENCE            0x00010000
#define ACPI_BTYPE_RESOURCE             0x00020000
#define ACPI_BTYPE_COMPUTE_DATA         (ACPI_BTYPE_INTEGER | ACPI_BTYPE_STRING | ACPI_BTYPE_BUFFER)
#define ACPI_BTYPE_DATA                 (ACPI_BTYPE_COMPUTE_DATA  | ACPI_BTYPE_PACKAGE)
#define ACPI_BTYPE_DATA_REFERENCE       (ACPI_BTYPE_DATA | ACPI_BTYPE_REFERENCE | ACPI_BTYPE_DDB_HANDLE)
#define ACPI_BTYPE_DEVICE_OBJECTS       (ACPI_BTYPE_DEVICE | ACPI_BTYPE_THERMAL | ACPI_BTYPE_PROCESSOR)
#define ACPI_BTYPE_OBJECTS_AND_REFS     0x0001FFFF
#define ACPI_BTYPE_ALL_OBJECTS          0x0000FFFF
struct acpi_name_info ;
struct acpi_package_info ;
struct acpi_package_info2 ;
struct acpi_package_info3 ;
union acpi_predefined_info ;
struct acpi_predefined_data ;
#define ACPI_OBJECT_REPAIRED    1
#define ACPI_RTYPE_ANY                  0x00
#define ACPI_RTYPE_NONE                 0x01
#define ACPI_RTYPE_INTEGER              0x02
#define ACPI_RTYPE_STRING               0x04
#define ACPI_RTYPE_BUFFER               0x08
#define ACPI_RTYPE_PACKAGE              0x10
#define ACPI_RTYPE_REFERENCE            0x20
#define ACPI_RTYPE_ALL                  0x3F
#define ACPI_NUM_RTYPES                 5
struct acpi_gpe_handler_info ;
struct acpi_gpe_notify_object ;
union acpi_gpe_dispatch_info ;
struct acpi_gpe_event_info ;
struct acpi_gpe_register_info ;
struct acpi_gpe_block_info ;
struct acpi_gpe_xrupt_info ;
struct acpi_gpe_walk_info ;
struct acpi_gpe_device_info ;
typedef acpi_status(*acpi_gpe_callback) (struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block, void *context);
struct acpi_fixed_event_handler ;
struct acpi_fixed_event_info ;
struct acpi_field_info ;
#define ACPI_CONTROL_NORMAL                  0xC0
#define ACPI_CONTROL_CONDITIONAL_EXECUTING   0xC1
#define ACPI_CONTROL_PREDICATE_EXECUTING     0xC2
#define ACPI_CONTROL_PREDICATE_FALSE         0xC3
#define ACPI_CONTROL_PREDICATE_TRUE          0xC4
#define ACPI_STATE_COMMON \
void                            *next; \
u8                              descriptor_type;\
u8                              flags; \
u16                             value; \
u16                             state;
struct acpi_common_state ;
struct acpi_update_state ;
struct acpi_pkg_state ;
struct acpi_control_state ;
struct acpi_scope_state ;
struct acpi_pscope_state ;
struct acpi_thread_state ;
struct acpi_result_values ;
typedef
acpi_status(*acpi_parse_downwards) (struct acpi_walk_state * walk_state,
union acpi_parse_object ** out_op);
typedef acpi_status(*acpi_parse_upwards) (struct acpi_walk_state * walk_state);
struct acpi_notify_info ;
union acpi_generic_state ;
typedef acpi_status(*ACPI_EXECUTE_OP) (struct acpi_walk_state * walk_state);
struct acpi_opcode_info ;
union acpi_parse_value ;
#define ACPI_DISASM_ONLY_MEMBERS(a)     a;
#define ACPI_DISASM_ONLY_MEMBERS(a)
#define ACPI_PARSE_COMMON \
union acpi_parse_object         *parent;\
u8                              descriptor_type;\
u8                              flags;\
u16                             aml_opcode;\
u32                             aml_offset;\
union acpi_parse_object         *next;\
struct acpi_namespace_node      *node;\
union acpi_parse_value          value;\
u8                              arg_list_length;\
ACPI_DISASM_ONLY_MEMBERS (\
u8                              disasm_flags;\
u8                              disasm_opcode;\
char                            aml_op_name[16])
#define ACPI_DASM_BUFFER                0x00
#define ACPI_DASM_RESOURCE              0x01
#define ACPI_DASM_STRING                0x02
#define ACPI_DASM_UNICODE               0x03
#define ACPI_DASM_EISAID                0x04
#define ACPI_DASM_MATCHOP               0x05
#define ACPI_DASM_LNOT_PREFIX           0x06
#define ACPI_DASM_LNOT_SUFFIX           0x07
#define ACPI_DASM_IGNORE                0x08
struct acpi_parse_obj_common ;
struct acpi_parse_obj_named ;
#define ACPI_MAX_PARSEOP_NAME   20
struct acpi_parse_obj_asl ;
union acpi_parse_object ;
struct acpi_parse_state ;
#define ACPI_PARSEOP_GENERIC            0x01
#define ACPI_PARSEOP_NAMED              0x02
#define ACPI_PARSEOP_DEFERRED           0x04
#define ACPI_PARSEOP_BYTELIST           0x08
#define ACPI_PARSEOP_IN_STACK           0x10
#define ACPI_PARSEOP_TARGET             0x20
#define ACPI_PARSEOP_IN_CACHE           0x80
#define ACPI_PARSEOP_IGNORE             0x01
#define ACPI_PARSEOP_PARAMLIST          0x02
#define ACPI_PARSEOP_EMPTY_TERMLIST     0x04
#define ACPI_PARSEOP_SPECIAL            0x10
struct acpi_bit_register_info ;
#define ACPI_PM1_STATUS_PRESERVED_BITS          0x0800
#define ACPI_PM1_CONTROL_WRITEONLY_BITS         0x2004
#define ACPI_PM1_CONTROL_IGNORED_BITS           0x0200
#define ACPI_PM1_CONTROL_RESERVED_BITS          0xC1F8
#define ACPI_PM1_CONTROL_PRESERVED_BITS \
(ACPI_PM1_CONTROL_IGNORED_BITS | ACPI_PM1_CONTROL_RESERVED_BITS)
#define ACPI_PM2_CONTROL_PRESERVED_BITS         0xFFFFFFFE
#define ACPI_REGISTER_PM1_STATUS                0x01
#define ACPI_REGISTER_PM1_ENABLE                0x02
#define ACPI_REGISTER_PM1_CONTROL               0x03
#define ACPI_REGISTER_PM2_CONTROL               0x04
#define ACPI_REGISTER_PM_TIMER                  0x05
#define ACPI_REGISTER_PROCESSOR_BLOCK           0x06
#define ACPI_REGISTER_SMI_COMMAND_BLOCK         0x07
#define ACPI_BITMASK_TIMER_STATUS               0x0001
#define ACPI_BITMASK_BUS_MASTER_STATUS          0x0010
#define ACPI_BITMASK_GLOBAL_LOCK_STATUS         0x0020
#define ACPI_BITMASK_POWER_BUTTON_STATUS        0x0100
#define ACPI_BITMASK_SLEEP_BUTTON_STATUS        0x0200
#define ACPI_BITMASK_RT_CLOCK_STATUS            0x0400
#define ACPI_BITMASK_PCIEXP_WAKE_STATUS         0x4000
#define ACPI_BITMASK_WAKE_STATUS                0x8000
#define ACPI_BITMASK_ALL_FIXED_STATUS           (\
ACPI_BITMASK_TIMER_STATUS          | \
ACPI_BITMASK_BUS_MASTER_STATUS     | \
ACPI_BITMASK_GLOBAL_LOCK_STATUS    | \
ACPI_BITMASK_POWER_BUTTON_STATUS   | \
ACPI_BITMASK_SLEEP_BUTTON_STATUS   | \
ACPI_BITMASK_RT_CLOCK_STATUS       | \
ACPI_BITMASK_PCIEXP_WAKE_STATUS    | \
ACPI_BITMASK_WAKE_STATUS)
#define ACPI_BITMASK_TIMER_ENABLE               0x0001
#define ACPI_BITMASK_GLOBAL_LOCK_ENABLE         0x0020
#define ACPI_BITMASK_POWER_BUTTON_ENABLE        0x0100
#define ACPI_BITMASK_SLEEP_BUTTON_ENABLE        0x0200
#define ACPI_BITMASK_RT_CLOCK_ENABLE            0x0400
#define ACPI_BITMASK_PCIEXP_WAKE_DISABLE        0x4000
#define ACPI_BITMASK_SCI_ENABLE                 0x0001
#define ACPI_BITMASK_BUS_MASTER_RLD             0x0002
#define ACPI_BITMASK_GLOBAL_LOCK_RELEASE        0x0004
#define ACPI_BITMASK_SLEEP_TYPE                 0x1C00
#define ACPI_BITMASK_SLEEP_ENABLE               0x2000
#define ACPI_BITMASK_ARB_DISABLE                0x0001
#define ACPI_BITPOSITION_TIMER_STATUS           0x00
#define ACPI_BITPOSITION_BUS_MASTER_STATUS      0x04
#define ACPI_BITPOSITION_GLOBAL_LOCK_STATUS     0x05
#define ACPI_BITPOSITION_POWER_BUTTON_STATUS    0x08
#define ACPI_BITPOSITION_SLEEP_BUTTON_STATUS    0x09
#define ACPI_BITPOSITION_RT_CLOCK_STATUS        0x0A
#define ACPI_BITPOSITION_PCIEXP_WAKE_STATUS     0x0E
#define ACPI_BITPOSITION_WAKE_STATUS            0x0F
#define ACPI_BITPOSITION_TIMER_ENABLE           0x00
#define ACPI_BITPOSITION_GLOBAL_LOCK_ENABLE     0x05
#define ACPI_BITPOSITION_POWER_BUTTON_ENABLE    0x08
#define ACPI_BITPOSITION_SLEEP_BUTTON_ENABLE    0x09
#define ACPI_BITPOSITION_RT_CLOCK_ENABLE        0x0A
#define ACPI_BITPOSITION_PCIEXP_WAKE_DISABLE    0x0E
#define ACPI_BITPOSITION_SCI_ENABLE             0x00
#define ACPI_BITPOSITION_BUS_MASTER_RLD         0x01
#define ACPI_BITPOSITION_GLOBAL_LOCK_RELEASE    0x02
#define ACPI_BITPOSITION_SLEEP_TYPE             0x0A
#define ACPI_BITPOSITION_SLEEP_ENABLE           0x0D
#define ACPI_BITPOSITION_ARB_DISABLE            0x00
#define ACPI_OSI_WIN_2000               0x01
#define ACPI_OSI_WIN_XP                 0x02
#define ACPI_OSI_WIN_XP_SP1             0x03
#define ACPI_OSI_WINSRV_2003            0x04
#define ACPI_OSI_WIN_XP_SP2             0x05
#define ACPI_OSI_WINSRV_2003_SP1        0x06
#define ACPI_OSI_WIN_VISTA              0x07
#define ACPI_OSI_WINSRV_2008            0x08
#define ACPI_OSI_WIN_VISTA_SP1          0x09
#define ACPI_OSI_WIN_VISTA_SP2          0x0A
#define ACPI_OSI_WIN_7                  0x0B
#define ACPI_ALWAYS_ILLEGAL             0x00
struct acpi_interface_info ;
#define ACPI_OSI_INVALID                0x01
#define ACPI_OSI_DYNAMIC                0x02
struct acpi_port_info ;
#define ACPI_ADDRESS_TYPE_MEMORY_RANGE          0
#define ACPI_ADDRESS_TYPE_IO_RANGE              1
#define ACPI_ADDRESS_TYPE_BUS_NUMBER_RANGE      2
#define ACPI_RESOURCE_NAME_LARGE                0x80
#define ACPI_RESOURCE_NAME_SMALL                0x00
#define ACPI_RESOURCE_NAME_SMALL_MASK           0x78
#define ACPI_RESOURCE_NAME_SMALL_LENGTH_MASK    0x07
#define ACPI_RESOURCE_NAME_LARGE_MASK           0x7F
#define ACPI_RESOURCE_NAME_IRQ                  0x20
#define ACPI_RESOURCE_NAME_DMA                  0x28
#define ACPI_RESOURCE_NAME_START_DEPENDENT      0x30
#define ACPI_RESOURCE_NAME_END_DEPENDENT        0x38
#define ACPI_RESOURCE_NAME_IO                   0x40
#define ACPI_RESOURCE_NAME_FIXED_IO             0x48
#define ACPI_RESOURCE_NAME_RESERVED_S1          0x50
#define ACPI_RESOURCE_NAME_RESERVED_S2          0x58
#define ACPI_RESOURCE_NAME_RESERVED_S3          0x60
#define ACPI_RESOURCE_NAME_RESERVED_S4          0x68
#define ACPI_RESOURCE_NAME_VENDOR_SMALL         0x70
#define ACPI_RESOURCE_NAME_END_TAG              0x78
#define ACPI_RESOURCE_NAME_MEMORY24             0x81
#define ACPI_RESOURCE_NAME_GENERIC_REGISTER     0x82
#define ACPI_RESOURCE_NAME_RESERVED_L1          0x83
#define ACPI_RESOURCE_NAME_VENDOR_LARGE         0x84
#define ACPI_RESOURCE_NAME_MEMORY32             0x85
#define ACPI_RESOURCE_NAME_FIXED_MEMORY32       0x86
#define ACPI_RESOURCE_NAME_ADDRESS32            0x87
#define ACPI_RESOURCE_NAME_ADDRESS16            0x88
#define ACPI_RESOURCE_NAME_EXTENDED_IRQ         0x89
#define ACPI_RESOURCE_NAME_ADDRESS64            0x8A
#define ACPI_RESOURCE_NAME_EXTENDED_ADDRESS64   0x8B
#define ACPI_RESOURCE_NAME_LARGE_MAX            0x8B
#define ACPI_ASCII_ZERO                 0x30
struct acpi_db_method_info ;
struct acpi_integrity_info ;
#define ACPI_DB_REDIRECTABLE_OUTPUT     0x01
#define ACPI_DB_CONSOLE_OUTPUT          0x02
#define ACPI_DB_DUPLICATE_OUTPUT        0x03
#define ACPI_MEM_MALLOC                 0
#define ACPI_MEM_CALLOC                 1
#define ACPI_MAX_MODULE_NAME            16
#define ACPI_COMMON_DEBUG_MEM_HEADER \
struct acpi_debug_mem_block     *previous; \
struct acpi_debug_mem_block     *next; \
u32                             size; \
u32                             component; \
u32                             line; \
char                            module[ACPI_MAX_MODULE_NAME]; \
u8                              alloc_type;
struct acpi_debug_mem_header ;
struct acpi_debug_mem_block ;
#define ACPI_MEM_LIST_GLOBAL            0
#define ACPI_MEM_LIST_NSNODE            1
#define ACPI_MEM_LIST_MAX               1
#define ACPI_NUM_MEM_LISTS              2
