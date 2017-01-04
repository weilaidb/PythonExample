#define _XEN_XEN_H
enum xen_domain_type ;
extern enum xen_domain_type xen_domain_type;
#define xen_domain_type		XEN_NATIVE
#define xen_domain()		(xen_domain_type != XEN_NATIVE)
#define xen_pv_domain()		(xen_domain() &&			\
xen_domain_type == XEN_PV_DOMAIN)
#define xen_hvm_domain()	(xen_domain() &&			\
xen_domain_type == XEN_HVM_DOMAIN)
#define xen_initial_domain()	(xen_pv_domain() && \
xen_start_info->flags & SIF_INITDOMAIN)
#define xen_initial_domain()	(0)
