struct agp_3_5_dev ;
static void agp_3_5_dev_list_insert(struct list_head *head, struct list_head *new)
static void agp_3_5_dev_list_sort(struct agp_3_5_dev *list, unsigned int ndevs)
static int agp_3_5_isochronous_node_enable(struct agp_bridge_data *bridge,
struct agp_3_5_dev *dev_list, unsigned int ndevs)
static void agp_3_5_nonisochronous_node_enable(struct agp_bridge_data *bridge,
struct agp_3_5_dev *dev_list, unsigned int ndevs)
int agp_3_5_enable(struct agp_bridge_data *bridge)
