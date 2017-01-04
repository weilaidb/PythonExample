#define QL_DEBUG_LEVEL_2
#if defined(QL_DEBUG)
#define DEBUG(x)   do  while (0);
#define DEBUG(x)	do  while (0);
#if defined(QL_DEBUG_LEVEL_2)
#define DEBUG2(x)      do  while (0);
#define DEBUG2_3(x)   do  while (0);
#define DEBUG2(x)	do  while (0);
#if defined(QL_DEBUG_LEVEL_3)
#define DEBUG3(x)      do  while (0);
#define DEBUG3(x)	do  while (0);
#if !defined(QL_DEBUG_LEVEL_2)
#define DEBUG2_3(x)	do  while (0);
#if defined(QL_DEBUG_LEVEL_4)
#define DEBUG4(x)	do  while (0);
#define DEBUG4(x)	do  while (0);
#if defined(QL_DEBUG_LEVEL_5)
#define DEBUG5(x)	do  while (0);
#define DEBUG5(x)	do  while (0);
#if defined(QL_DEBUG_LEVEL_9)
#define DEBUG9(x)	do  while (0);
#define DEBUG9(x)	do  while (0);
