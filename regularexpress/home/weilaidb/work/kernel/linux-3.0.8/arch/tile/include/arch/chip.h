#if __tile_chip__ == 0
#elif __tile_chip__ == 1
#elif defined(__tilegx__)
#error Unexpected Tilera chip type
