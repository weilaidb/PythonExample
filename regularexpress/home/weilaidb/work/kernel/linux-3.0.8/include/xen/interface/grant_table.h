#define __XEN_PUBLIC_GRANT_TABLE_H__
struct grant_entry ;
#define GTF_invalid         (0U<<0)
#define GTF_permit_access   (1U<<0)
#define GTF_accept_transfer (2U<<0)
#define GTF_type_mask       (3U<<0)
#define _GTF_readonly       (2)
#define GTF_readonly        (1U<<_GTF_readonly)
#define _GTF_reading        (3)
#define GTF_reading         (1U<<_GTF_reading)
#define _GTF_writing        (4)
#define GTF_writing         (1U<<_GTF_writing)
#define _GTF_transfer_committed (2)
#define GTF_transfer_committed  (1U<<_GTF_transfer_committed)
#define _GTF_transfer_completed (3)
#define GTF_transfer_completed  (1U<<_GTF_transfer_completed)
typedef uint32_t grant_ref_t;
typedef uint32_t grant_handle_t;
#define GNTTABOP_map_grant_ref        0
struct gnttab_map_grant_ref ;
DEFINE_GUEST_HANDLE_STRUCT(gnttab_map_grant_ref);
#define GNTTABOP_unmap_grant_ref      1
struct gnttab_unmap_grant_ref ;
DEFINE_GUEST_HANDLE_STRUCT(gnttab_unmap_grant_ref);
#define GNTTABOP_setup_table          2
struct gnttab_setup_table ;
DEFINE_GUEST_HANDLE_STRUCT(gnttab_setup_table);
#define GNTTABOP_dump_table           3
struct gnttab_dump_table ;
DEFINE_GUEST_HANDLE_STRUCT(gnttab_dump_table);
#define GNTTABOP_transfer                4
struct gnttab_transfer ;
DEFINE_GUEST_HANDLE_STRUCT(gnttab_transfer);
#define _GNTCOPY_source_gref      (0)
#define GNTCOPY_source_gref       (1<<_GNTCOPY_source_gref)
#define _GNTCOPY_dest_gref        (1)
#define GNTCOPY_dest_gref         (1<<_GNTCOPY_dest_gref)
#define GNTTABOP_copy                 5
struct gnttab_copy ;
DEFINE_GUEST_HANDLE_STRUCT(gnttab_copy);
#define GNTTABOP_query_size           6
struct gnttab_query_size ;
DEFINE_GUEST_HANDLE_STRUCT(gnttab_query_size);
#define _GNTMAP_device_map      (0)
#define GNTMAP_device_map       (1<<_GNTMAP_device_map)
#define _GNTMAP_host_map        (1)
#define GNTMAP_host_map         (1<<_GNTMAP_host_map)
#define _GNTMAP_readonly        (2)
#define GNTMAP_readonly         (1<<_GNTMAP_readonly)
#define _GNTMAP_application_map (3)
#define GNTMAP_application_map  (1<<_GNTMAP_application_map)
#define _GNTMAP_contains_pte    (4)
#define GNTMAP_contains_pte     (1<<_GNTMAP_contains_pte)
#define GNTST_okay             (0)
#define GNTST_general_error    (-1)
#define GNTST_bad_domain       (-2)
#define GNTST_bad_gntref       (-3)
#define GNTST_bad_handle       (-4)
#define GNTST_bad_virt_addr    (-5)
#define GNTST_bad_dev_addr     (-6)
#define GNTST_no_device_space  (-7)
#define GNTST_permission_denied (-8)
#define GNTST_bad_page         (-9)
#define GNTST_bad_copy_arg    (-10)
#define GNTTABOP_error_msgs
