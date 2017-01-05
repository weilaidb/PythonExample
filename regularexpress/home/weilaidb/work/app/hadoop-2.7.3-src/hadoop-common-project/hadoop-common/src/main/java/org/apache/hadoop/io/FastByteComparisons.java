package org.apache.hadoop.io;
import java.lang.reflect.Field;
import java.nio.ByteOrder;
import java.security.AccessController;
import java.security.PrivilegedAction;
import sun.misc.Unsafe;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import com.google.common.primitives.Longs;
import com.google.common.primitives.UnsignedBytes;
abstract class FastByteComparisons
