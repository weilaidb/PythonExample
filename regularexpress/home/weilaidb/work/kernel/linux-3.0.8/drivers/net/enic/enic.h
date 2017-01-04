#define _ENIC_H_
#define DRV_NAME		"enic"
#define DRV_DESCRIPTION		"Cisco VIC Ethernet NIC Driver"
#define DRV_VERSION		"2.1.1.13"
#define DRV_COPYRIGHT		"Copyright 2008-2011 Cisco Systems, Inc"
#define ENIC_BARS_MAX		6
#define ENIC_WQ_MAX		1
#define ENIC_RQ_MAX		1
#define ENIC_CQ_MAX		(ENIC_WQ_MAX + ENIC_RQ_MAX)
#define ENIC_INTR_MAX		(ENIC_CQ_MAX + 2)
struct enic_msix_entry ;
#define ENIC_PORT_REQUEST_APPLIED	(1 << 0)
#define ENIC_SET_REQUEST		(1 << 1)
#define ENIC_SET_NAME			(1 << 2)
#define ENIC_SET_INSTANCE		(1 << 3)
#define ENIC_SET_HOST			(1 << 4)
struct enic_port_profile ;
struct enic ;
static inline struct device *enic_get_dev(struct enic *enic)
void enic_reset_addr_lists(struct enic *enic);
