#define VM_EVENT_ITEM_H_INCLUDED
#define DMA_ZONE(xx) xx##_DMA,
#define DMA_ZONE(xx)
#define DMA32_ZONE(xx) xx##_DMA32,
#define DMA32_ZONE(xx)
#define HIGHMEM_ZONE(xx) , xx##_HIGH
#define HIGHMEM_ZONE(xx)
#define FOR_ALL_ZONES(xx) DMA_ZONE(xx) DMA32_ZONE(xx) xx##_NORMAL HIGHMEM_ZONE(xx) , xx##_MOVABLE
enum vm_event_item ;
