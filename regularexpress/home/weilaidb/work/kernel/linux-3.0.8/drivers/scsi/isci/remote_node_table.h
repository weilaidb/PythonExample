#define _SCIC_SDS_REMOTE_NODE_TABLE_H_
#define SCIC_SDS_REMOTE_NODE_SETS_PER_BYTE 2
#define SCIC_SDS_REMOTE_NODE_SETS_PER_DWORD \
(sizeof(u32) * SCIC_SDS_REMOTE_NODE_SETS_PER_BYTE)
#define SCIC_SDS_REMOTE_NODES_PER_BYTE	\
(SCU_STP_REMOTE_NODE_COUNT * SCIC_SDS_REMOTE_NODE_SETS_PER_BYTE)
#define SCIC_SDS_REMOTE_NODES_PER_DWORD	\
(sizeof(u32) * SCIC_SDS_REMOTE_NODES_PER_BYTE)
#define SCIC_SDS_REMOTE_NODES_BITS_PER_GROUP   4
#define SCIC_SDS_REMOTE_NODE_TABLE_INVALID_INDEX      (0xFFFFFFFF)
#define SCIC_SDS_REMOTE_NODE_TABLE_FULL_SLOT_VALUE    (0x07)
#define SCIC_SDS_REMOTE_NODE_TABLE_EMPTY_SLOT_VALUE   (0x00)
#define SCU_STP_REMOTE_NODE_COUNT        3
#define SCU_SSP_REMOTE_NODE_COUNT        1
#define SCU_SATA_REMOTE_NODE_COUNT       1
struct sci_remote_node_table ;
void sci_remote_node_table_initialize(
struct sci_remote_node_table *remote_node_table,
u32 remote_node_entries);
u16 sci_remote_node_table_allocate_remote_node(
struct sci_remote_node_table *remote_node_table,
u32 remote_node_count);
void sci_remote_node_table_release_remote_node_index(
struct sci_remote_node_table *remote_node_table,
u32 remote_node_count,
u16 remote_node_index);
