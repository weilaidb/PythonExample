package org.apache.hadoop.hdfs.shortcircuit;
import java.io.FileInputStream;
import java.io.IOException;
import java.lang.reflect.Field;
import java.util.BitSet;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Random;
import org.apache.commons.lang.builder.EqualsBuilder;
import org.apache.commons.lang.builder.HashCodeBuilder;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.InvalidRequestException;
import org.apache.hadoop.hdfs.ExtendedBlockId;
import org.apache.hadoop.io.nativeio.NativeIO;
import org.apache.hadoop.io.nativeio.NativeIO.POSIX;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.util.StringUtils;
import sun.misc.Unsafe;
import com.google.common.base.Preconditions;
import com.google.common.collect.ComparisonChain;
import com.google.common.primitives.Ints;
public class ShortCircuitShm
