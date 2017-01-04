static BOOLEAN MatchSrcIpv6Address(S_CLASSIFIER_RULE *pstClassifierRule,IPV6Header *pstIpv6Header);
static BOOLEAN MatchDestIpv6Address(S_CLASSIFIER_RULE *pstClassifierRule,IPV6Header *pstIpv6Header);
static VOID DumpIpv6Header(IPV6Header *pstIpv6Header);
static UCHAR * GetNextIPV6ChainedHeader(UCHAR **ppucPayload,UCHAR *pucNextHeader,BOOLEAN *bParseDone,USHORT *pusPayloadLength)
static UCHAR GetIpv6ProtocolPorts(UCHAR *pucPayload,USHORT *pusSrcPort,USHORT *pusDestPort,USHORT usPayloadLength,UCHAR ucNextHeader)
USHORT	IpVersion6(PMINI_ADAPTER Adapter,
PVOID pcIpHeader,
S_CLASSIFIER_RULE *pstClassifierRule )
static BOOLEAN MatchSrcIpv6Address(S_CLASSIFIER_RULE *pstClassifierRule,IPV6Header *pstIpv6Header)
static BOOLEAN MatchDestIpv6Address(S_CLASSIFIER_RULE *pstClassifierRule,IPV6Header *pstIpv6Header)
VOID DumpIpv6Address(ULONG *puIpv6Address)
static VOID DumpIpv6Header(IPV6Header *pstIpv6Header)
