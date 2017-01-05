package org.apache.hadoop.hdfs.server.namenode.startupprogress;
import java.util.concurrent.atomic.AtomicInteger;
import org.apache.commons.lang.builder.CompareToBuilder;
import org.apache.commons.lang.builder.EqualsBuilder;
import org.apache.commons.lang.builder.HashCodeBuilder;
import org.apache.hadoop.classification.InterfaceAudience;
@InterfaceAudience.Private
public class Step implements Comparable<Step>
