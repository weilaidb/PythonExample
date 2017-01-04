#define __XEN_PUBLIC_MEMORY_H__
#define XENMEM_increase_reservation 0
#define XENMEM_decrease_reservation 1
#define XENMEM_populate_physmap     6
struct xen_memory_reservation ;
DEFINE_GUEST_HANDLE_STRUCT(xen_memory_reservation);
#define XENMEM_exchange             11
struct xen_memory_exchange ;
DEFINE_GUEST_HANDLE_STRUCT(xen_memory_exchange);
#define XENMEM_maximum_ram_page     2
#define XENMEM_current_reservation  3
#define XENMEM_maximum_reservation  4
#define XENMEM_machphys_mfn_list    5
struct xen_machphys_mfn_list ;
DEFINE_GUEST_HANDLE_STRUCT(xen_machphys_mfn_list);
#define XENMEM_machphys_mapping     12
struct xen_machphys_mapping ;
DEFINE_GUEST_HANDLE_STRUCT(xen_machphys_mapping_t);
#define XENMEM_add_to_physmap      7
struct xen_add_to_physmap ;
DEFINE_GUEST_HANDLE_STRUCT(xen_add_to_physmap);
#define XENMEM_translate_gpfn_list  8
struct xen_translate_gpfn_list ;
DEFINE_GUEST_HANDLE_STRUCT(xen_translate_gpfn_list);
#define XENMEM_memory_map           9
struct xen_memory_map ;
DEFINE_GUEST_HANDLE_STRUCT(xen_memory_map);
#define XENMEM_machine_memory_map   10
extern spinlock_t xen_reservation_lock;
