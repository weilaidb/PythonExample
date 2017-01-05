package org.apache.hadoop.metrics2.util;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.ListIterator;
import java.util.Map;
import java.util.TreeMap;
import org.apache.hadoop.classification.InterfaceAudience;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Joiner;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class SampleQuantiles
