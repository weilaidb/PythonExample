package org.apache.hadoop.examples.pi;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.examples.pi.math.ArithmeticProgression;
import org.apache.hadoop.examples.pi.math.Summation;
import org.apache.hadoop.io.WritableComparable;
public final class SummationWritable implements WritableComparable<SummationWritable>, Container<Summation>
