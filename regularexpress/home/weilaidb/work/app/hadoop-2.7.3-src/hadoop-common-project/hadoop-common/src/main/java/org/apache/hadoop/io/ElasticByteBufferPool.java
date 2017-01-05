package org.apache.hadoop.io;
import com.google.common.collect.ComparisonChain;
import org.apache.commons.lang.builder.HashCodeBuilder;
import java.nio.ByteBuffer;
import java.util.Map;
import java.util.TreeMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public final class ElasticByteBufferPool implements ByteBufferPool
