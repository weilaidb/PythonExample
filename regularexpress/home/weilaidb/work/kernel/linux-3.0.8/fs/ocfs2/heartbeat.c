static inline void __ocfs2_node_map_set_bit(struct ocfs2_node_map *map,
int bit);
static inline void __ocfs2_node_map_clear_bit(struct ocfs2_node_map *map,
int bit);
static void ocfs2_node_map_init(struct ocfs2_node_map *map)
void ocfs2_init_node_maps(struct ocfs2_super *osb)
void ocfs2_do_node_down(int node_num, void *data)
static inline void __ocfs2_node_map_set_bit(struct ocfs2_node_map *map,
int bit)
void ocfs2_node_map_set_bit(struct ocfs2_super *osb,
struct ocfs2_node_map *map,
int bit)
static inline void __ocfs2_node_map_clear_bit(struct ocfs2_node_map *map,
int bit)
void ocfs2_node_map_clear_bit(struct ocfs2_super *osb,
struct ocfs2_node_map *map,
int bit)
int ocfs2_node_map_test_bit(struct ocfs2_super *osb,
struct ocfs2_node_map *map,
int bit)
