#define _MEDIA_ENTITY_H
struct media_pipeline ;
struct media_link ;
struct media_pad ;
struct media_entity_operations ;
struct media_entity ;
static inline u32 media_entity_type(struct media_entity *entity)
static inline u32 media_entity_subtype(struct media_entity *entity)
#define MEDIA_ENTITY_ENUM_MAX_DEPTH	16
struct media_entity_graph ;
int media_entity_init(struct media_entity *entity, u16 num_pads,
struct media_pad *pads, u16 extra_links);
void media_entity_cleanup(struct media_entity *entity);
int media_entity_create_link(struct media_entity *source, u16 source_pad,
struct media_entity *sink, u16 sink_pad, u32 flags);
int __media_entity_setup_link(struct media_link *link, u32 flags);
int media_entity_setup_link(struct media_link *link, u32 flags);
struct media_link *media_entity_find_link(struct media_pad *source,
struct media_pad *sink);
struct media_pad *media_entity_remote_source(struct media_pad *pad);
struct media_entity *media_entity_get(struct media_entity *entity);
void media_entity_put(struct media_entity *entity);
void media_entity_graph_walk_start(struct media_entity_graph *graph,
struct media_entity *entity);
struct media_entity *
media_entity_graph_walk_next(struct media_entity_graph *graph);
void media_entity_pipeline_start(struct media_entity *entity,
struct media_pipeline *pipe);
void media_entity_pipeline_stop(struct media_entity *entity);
#define media_entity_call(entity, operation, args...)			\
(((entity)->ops && (entity)->ops->operation) ?			\
(entity)->ops->operation((entity) , ##args) : -ENOIOCTLCMD)
