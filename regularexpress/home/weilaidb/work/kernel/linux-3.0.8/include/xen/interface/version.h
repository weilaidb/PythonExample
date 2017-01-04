#define __XEN_PUBLIC_VERSION_H__
#define XENVER_version      0
#define XENVER_extraversion 1
struct xen_extraversion ;
#define XEN_EXTRAVERSION_LEN (sizeof(struct xen_extraversion))
#define XENVER_compile_info 2
struct xen_compile_info ;
#define XENVER_capabilities 3
struct xen_capabilities_info ;
#define XEN_CAPABILITIES_INFO_LEN (sizeof(struct xen_capabilities_info))
#define XENVER_changeset 4
struct xen_changeset_info ;
#define XEN_CHANGESET_INFO_LEN (sizeof(struct xen_changeset_info))
#define XENVER_platform_parameters 5
struct xen_platform_parameters ;
#define XENVER_get_features 6
struct xen_feature_info ;
#define XENVER_pagesize 7
