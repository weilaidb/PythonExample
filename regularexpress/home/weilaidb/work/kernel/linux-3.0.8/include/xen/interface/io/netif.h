#define __XEN_PUBLIC_IO_NETIF_H__
#define _XEN_NETTXF_csum_blank		(0)
#define  XEN_NETTXF_csum_blank		(1U<<_XEN_NETTXF_csum_blank)
#define _XEN_NETTXF_data_validated	(1)
#define  XEN_NETTXF_data_validated	(1U<<_XEN_NETTXF_data_validated)
#define _XEN_NETTXF_more_data		(2)
#define  XEN_NETTXF_more_data		(1U<<_XEN_NETTXF_more_data)
#define _XEN_NETTXF_extra_info		(3)
#define  XEN_NETTXF_extra_info		(1U<<_XEN_NETTXF_extra_info)
struct xen_netif_tx_request ;
#define XEN_NETIF_EXTRA_TYPE_NONE	(0)
#define XEN_NETIF_EXTRA_TYPE_GSO	(1)
#define XEN_NETIF_EXTRA_TYPE_MAX	(2)
#define _XEN_NETIF_EXTRA_FLAG_MORE	(0)
#define  XEN_NETIF_EXTRA_FLAG_MORE	(1U<<_XEN_NETIF_EXTRA_FLAG_MORE)
#define XEN_NETIF_GSO_TYPE_TCPV4	(1)
struct xen_netif_extra_info ;
struct xen_netif_tx_response ;
struct xen_netif_rx_request ;
#define _XEN_NETRXF_data_validated	(0)
#define  XEN_NETRXF_data_validated	(1U<<_XEN_NETRXF_data_validated)
#define _XEN_NETRXF_csum_blank		(1)
#define  XEN_NETRXF_csum_blank		(1U<<_XEN_NETRXF_csum_blank)
#define _XEN_NETRXF_more_data		(2)
#define  XEN_NETRXF_more_data		(1U<<_XEN_NETRXF_more_data)
#define _XEN_NETRXF_extra_info		(3)
#define  XEN_NETRXF_extra_info		(1U<<_XEN_NETRXF_extra_info)
#define _XEN_NETRXF_gso_prefix		(4)
#define  XEN_NETRXF_gso_prefix		(1U<<_XEN_NETRXF_gso_prefix)
struct xen_netif_rx_response ;
DEFINE_RING_TYPES(xen_netif_tx,
struct xen_netif_tx_request,
struct xen_netif_tx_response);
DEFINE_RING_TYPES(xen_netif_rx,
struct xen_netif_rx_request,
struct xen_netif_rx_response);
#define XEN_NETIF_RSP_DROPPED	-2
#define XEN_NETIF_RSP_ERROR	-1
#define XEN_NETIF_RSP_OKAY	 0
#define XEN_NETIF_RSP_NULL	 1
