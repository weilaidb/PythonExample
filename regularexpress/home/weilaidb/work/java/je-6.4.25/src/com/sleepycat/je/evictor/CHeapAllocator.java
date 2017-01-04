package com.sleepycat.je.evictor;
import java.lang.reflect.Field;
import java.util.concurrent.atomic.AtomicLong;
import sun.misc.Unsafe;
class CHeapAllocator implements OffHeapAllocator
