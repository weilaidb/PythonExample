#define _TRANSPORT_CLASS_H_
struct transport_container;
struct transport_class ;
#define DECLARE_TRANSPORT_CLASS(cls, nm, su, rm, cfg)			\
struct transport_class cls =
struct anon_transport_class ;
#define DECLARE_ANON_TRANSPORT_CLASS(cls, mtch, cfg)		\
struct anon_transport_class cls =
#define class_to_transport_class(x) \
container_of(x, struct transport_class, class)
struct transport_container ;
#define attribute_container_to_transport_container(x) \
container_of(x, struct transport_container, ac)
void transport_remove_device(struct device *);
void transport_add_device(struct device *);
void transport_setup_device(struct device *);
void transport_configure_device(struct device *);
void transport_destroy_device(struct device *);
static inline void
transport_register_device(struct device *dev)
static inline void
transport_unregister_device(struct device *dev)
static inline int transport_container_register(struct transport_container *tc)
static inline void transport_container_unregister(struct transport_container *tc)
int transport_class_register(struct transport_class *);
int anon_transport_class_register(struct anon_transport_class *);
void transport_class_unregister(struct transport_class *);
void anon_transport_class_unregister(struct anon_transport_class *);
