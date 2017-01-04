#define MoreAssert(x) (true)
#define MoreAssertQ(x)
#if ! MORE_FRAMEWORK_INCLUDES
#define MoreBlockZero BlockZero
#if TARGET_RT_MAC_MACHO
#error CFMLateImport is not suitable for use in a Mach-O project.
#elif !TARGET_RT_MAC_CFM || !TARGET_CPU_PPC
#error CFMLateImport has not been qualified for 68K or CFM-68K use.
static OSStatus FSReadAtOffset(SInt16 refNum, SInt32 offset, SInt32 count, void *buffer)
struct FragToFixInfo ;
typedef struct FragToFixInfo FragToFixInfo;
static OSStatus ReadContainerBasics(FragToFixInfo *fragToFix)
static UInt32 DecodeVCountValue(const UInt8 *start, UInt32 *outCount)
static UInt32 DecodeInstrCountValue(const UInt8 *inOpStart, UInt32 *outCount)
static OSStatus UnpackPEFDataSection(const UInt8 * const packedData,   UInt32 packedSize,
UInt8 * const unpackedData, UInt32 unpackedSize)
struct TVector ;
typedef struct TVector TVector;
static OSStatus SetupSectionBaseAddresses(FragToFixInfo *fragToFix)
static void *GetSectionBaseAddress(const FragToFixInfo *fragToFix, UInt16 sectionIndex)
static OSStatus FindImportLibrary(PEFLoaderInfoHeader *loaderSection, const char *libraryName, PEFImportedLibrary **importLibrary)
static OSStatus LookupSymbol(CFMLateImportLookupProc lookup, void *refCon,
PEFLoaderInfoHeader *loaderSection,
UInt32 symbolIndex,
UInt32 *symbolValue)
struct EngineState ;
typedef struct EngineState EngineState;
static OSStatus InitEngineState(const FragToFixInfo *fragToFix,
UInt16 relocHeaderIndex,
EngineState *state)
static UInt8 kPEFRelocBasicOpcodes[kPEFRelocBasicOpcodeRange] = ;
static OSStatus RunRelocationEngine(const FragToFixInfo *fragToFix,
PEFImportedLibrary  *importLibrary,
CFMLateImportLookupProc lookup, void *refCon)
extern pascal OSStatus CFMLateImportCore(const CFragSystem7DiskFlatLocator *fragToFixLocator,
CFragConnectionID fragToFixConnID,
CFragInitFunction fragToFixInitRoutine,
ConstStr255Param weakLinkedLibraryName,
CFMLateImportLookupProc lookup,
void *refCon)
static pascal OSStatus FragmentLookup(ConstStr255Param symName, CFragSymbolClass symClass,
void **symAddr, void *refCon)
extern pascal OSStatus CFMLateImportLibrary(const CFragSystem7DiskFlatLocator *fragToFixLocator,
CFragConnectionID fragToFixConnID,
CFragInitFunction fragToFixInitRoutine,
ConstStr255Param weakLinkedLibraryName,
CFragConnectionID connIDToImport)
static pascal OSStatus BundleLookup(ConstStr255Param symName, CFragSymbolClass symClass,
void **symAddr, void *refCon)
extern pascal OSStatus CFMLateImportBundle(const CFragSystem7DiskFlatLocator *fragToFixLocator,
CFragConnectionID fragToFixConnID,
CFragInitFunction fragToFixInitRoutine,
ConstStr255Param weakLinkedLibraryName,
CFBundleRef bundleToImport)
