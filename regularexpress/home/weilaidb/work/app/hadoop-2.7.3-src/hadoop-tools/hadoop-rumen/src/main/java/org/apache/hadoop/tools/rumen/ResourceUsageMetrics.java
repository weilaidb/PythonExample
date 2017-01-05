package org.apache.hadoop.tools.rumen;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
public class ResourceUsageMetrics implements Writable, DeepCompare
