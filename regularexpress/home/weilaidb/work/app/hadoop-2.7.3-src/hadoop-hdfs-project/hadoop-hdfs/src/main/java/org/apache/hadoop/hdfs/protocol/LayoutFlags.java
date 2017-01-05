package org.apache.hadoop.hdfs.protocol;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import com.google.common.base.Joiner;
import com.google.common.base.Preconditions;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Sets;
@InterfaceAudience.Private
public class LayoutFlags
