int
media_entity_init(struct media_entity *entity, u16 num_pads,
struct media_pad *pads, u16 extra_links)
EXPORT_SYMBOL_GPL(media_entity_init);
void
media_entity_cleanup(struct media_entity *entity)
EXPORT_SYMBOL_GPL(media_entity_cleanup);
static struct media_entity *
media_entity_other(struct media_entity *entity, struct media_link *link)
static void stack_push(struct media_entity_graph *graph,
struct media_entity *entity)
static struct media_entity *stack_pop(struct media_entity_graph *graph)
#define stack_peek(en)	((en)->stack[(en)->top - 1].entity)
#define link_top(en)	((en)->stack[(en)->top].link)
#define stack_top(en)	((en)->stack[(en)->top].entity)
void media_entity_graph_walk_start(struct media_entity_graph *graph,
struct media_entity *entity)
EXPORT_SYMBOL_GPL(media_entity_graph_walk_start);
struct media_entity *
media_entity_graph_walk_next(struct media_entity_graph *graph)
EXPORT_SYMBOL_GPL(media_entity_graph_walk_next);
void media_entity_pipeline_start(struct media_entity *entity,
struct media_pipeline *pipe)
EXPORT_SYMBOL_GPL(media_entity_pipeline_start);
void media_entity_pipeline_stop(struct media_entity *entity)
EXPORT_SYMBOL_GPL(media_entity_pipeline_stop);
struct media_entity *media_entity_get(struct media_entity *entity)
EXPORT_SYMBOL_GPL(media_entity_get);
void media_entity_put(struct media_entity *entity)
EXPORT_SYMBOL_GPL(media_entity_put);
static struct media_link *media_entity_add_link(struct media_entity *entity)
int
media_entity_create_link(struct media_entity *source, u16 source_pad,
struct media_entity *sink, u16 sink_pad, u32 flags)
EXPORT_SYMBOL_GPL(media_entity_create_link);
static int __media_entity_setup_link_notify(struct media_link *link, u32 flags)
int __media_entity_setup_link(struct media_link *link, u32 flags)
int media_entity_setup_link(struct media_link *link, u32 flags)
EXPORT_SYMBOL_GPL(media_entity_setup_link);
struct media_link *
media_entity_find_link(struct media_pad *source, struct media_pad *sink)
EXPORT_SYMBOL_GPL(media_entity_find_link);
struct media_pad *media_entity_remote_source(struct media_pad *pad)
EXPORT_SYMBOL_GPL(media_entity_remote_source);
