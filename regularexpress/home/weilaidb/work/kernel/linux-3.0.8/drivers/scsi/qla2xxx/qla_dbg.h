#define DEBUG(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_1)
#define DEBUG1(x)	do  while (0)
#define DEBUG1(x)	do  while (0)
#define DEBUG2(x)	do  while (0)
#define DEBUG2_3(x)	do  while (0)
#define DEBUG2_3_11(x)	do  while (0)
#define DEBUG2_9_10(x)	do  while (0)
#define DEBUG2_11(x)	do  while (0)
#define DEBUG2_13(x)	do  while (0)
#define DEBUG2_16(x)	do  while (0)
#define DEBUG2_17(x) 	do  while (0)
#if defined(QL_DEBUG_LEVEL_3)
#define DEBUG3(x)	do  while (0)
#define DEBUG3_11(x)	do  while (0)
#define DEBUG3(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_4)
#define DEBUG4(x)	do  while (0)
#define DEBUG4(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_5)
#define DEBUG5(x)          do  while (0)
#define DEBUG5(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_7)
#define DEBUG7(x)          do  while (0)
#define DEBUG7(x)	   do  while (0)
#if defined(QL_DEBUG_LEVEL_9)
#define DEBUG9(x)       do  while (0)
#define DEBUG9_10(x)    do  while (0)
#define DEBUG9(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_10)
#define DEBUG10(x)      do  while (0)
#define DEBUG9_10(x)	do  while (0)
#define DEBUG10(x)	do  while (0)
#if !defined(DEBUG9_10)
#define DEBUG9_10(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_11)
#define DEBUG11(x)      do while(0)
#if !defined(DEBUG3_11)
#define DEBUG3_11(x)    do while(0)
#define DEBUG11(x)	do while(0)
#if !defined(QL_DEBUG_LEVEL_3)
#define DEBUG3_11(x)	do while(0)
#if defined(QL_DEBUG_LEVEL_12)
#define DEBUG12(x)      do  while (0)
#define DEBUG12(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_13)
#define DEBUG13(x)      do  while (0)
#define DEBUG13(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_14)
#define DEBUG14(x)      do  while (0)
#define DEBUG14(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_15)
#define DEBUG15(x)      do  while (0)
#define DEBUG15(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_16)
#define DEBUG16(x)	do  while (0)
#define DEBUG16(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_17)
#define DEBUG17(x)	do  while (0)
#define DEBUG17(x)	do  while (0)
#if defined(QL_DEBUG_LEVEL_18)
#define DEBUG18(x)	do  while (0)
#define DEBUG18(x)	do  while (0)
struct qla2300_fw_dump ;
struct qla2100_fw_dump ;
struct qla24xx_fw_dump ;
struct qla25xx_fw_dump ;
struct qla81xx_fw_dump ;
#define EFT_NUM_BUFFERS		4
#define EFT_BYTES_PER_BUFFER	0x4000
#define EFT_SIZE		((EFT_BYTES_PER_BUFFER) * (EFT_NUM_BUFFERS))
#define FCE_NUM_BUFFERS		64
#define FCE_BYTES_PER_BUFFER	0x400
#define FCE_SIZE		((FCE_BYTES_PER_BUFFER) * (FCE_NUM_BUFFERS))
#define fce_calc_size(b)	((FCE_BYTES_PER_BUFFER) * (b))
struct qla2xxx_fce_chain ;
struct qla2xxx_mq_chain ;
#define DUMP_CHAIN_VARIANT	0x80000000
#define DUMP_CHAIN_FCE		0x7FFFFAF0
#define DUMP_CHAIN_MQ		0x7FFFFAF1
#define DUMP_CHAIN_LAST		0x80000000
struct qla2xxx_fw_dump ;
