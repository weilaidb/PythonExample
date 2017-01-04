static void EThCSGetPktInfo(PMINI_ADAPTER Adapter,PVOID pvEthPayload,PS_ETHCS_PKT_INFO pstEthCsPktInfo);
static BOOLEAN EThCSClassifyPkt(PMINI_ADAPTER Adapter,struct sk_buff* skb,PS_ETHCS_PKT_INFO pstEthCsPktInfo,S_CLASSIFIER_RULE *pstClassifierRule, B_UINT8 EthCSCupport);
static USHORT	IpVersion4(PMINI_ADAPTER Adapter, struct iphdr *iphd,
S_CLASSIFIER_RULE *pstClassifierRule );
static VOID PruneQueue(PMINI_ADAPTER Adapter, INT iIndex);
BOOLEAN MatchSrcIpAddress(S_CLASSIFIER_RULE *pstClassifierRule,ULONG ulSrcIP)
BOOLEAN MatchDestIpAddress(S_CLASSIFIER_RULE *pstClassifierRule,ULONG ulDestIP)
BOOLEAN MatchTos(S_CLASSIFIER_RULE *pstClassifierRule,UCHAR ucTypeOfService)
BOOLEAN MatchProtocol(S_CLASSIFIER_RULE *pstClassifierRule,UCHAR ucProtocol)
BOOLEAN MatchSrcPort(S_CLASSIFIER_RULE *pstClassifierRule,USHORT ushSrcPort)
BOOLEAN MatchDestPort(S_CLASSIFIER_RULE *pstClassifierRule,USHORT ushDestPort)
static USHORT	IpVersion4(PMINI_ADAPTER Adapter,
struct iphdr *iphd,
S_CLASSIFIER_RULE *pstClassifierRule )
VOID PruneQueueAllSF(PMINI_ADAPTER Adapter)
static VOID PruneQueue(PMINI_ADAPTER Adapter, INT iIndex)
VOID flush_all_queues(PMINI_ADAPTER Adapter)
USHORT ClassifyPacket(PMINI_ADAPTER Adapter,struct sk_buff* skb)
static BOOLEAN EthCSMatchSrcMACAddress(S_CLASSIFIER_RULE *pstClassifierRule,PUCHAR Mac)
static BOOLEAN EthCSMatchDestMACAddress(S_CLASSIFIER_RULE *pstClassifierRule,PUCHAR Mac)
static BOOLEAN EthCSMatchEThTypeSAP(S_CLASSIFIER_RULE *pstClassifierRule,struct sk_buff* skb,PS_ETHCS_PKT_INFO pstEthCsPktInfo)
static BOOLEAN EthCSMatchVLANRules(S_CLASSIFIER_RULE *pstClassifierRule,struct sk_buff* skb,PS_ETHCS_PKT_INFO pstEthCsPktInfo)
static BOOLEAN EThCSClassifyPkt(PMINI_ADAPTER Adapter,struct sk_buff* skb,
PS_ETHCS_PKT_INFO pstEthCsPktInfo,
S_CLASSIFIER_RULE *pstClassifierRule,
B_UINT8 EthCSCupport)
static void EThCSGetPktInfo(PMINI_ADAPTER Adapter,PVOID pvEthPayload,
PS_ETHCS_PKT_INFO pstEthCsPktInfo)
