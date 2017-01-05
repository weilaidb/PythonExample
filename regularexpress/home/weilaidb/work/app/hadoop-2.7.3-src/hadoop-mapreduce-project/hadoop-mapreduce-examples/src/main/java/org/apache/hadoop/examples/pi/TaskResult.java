package org.apache.hadoop.examples.pi;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.examples.pi.math.Summation;
import org.apache.hadoop.io.Writable;
public class TaskResult implements Container<Summation>, Combinable<TaskResult>, Writable
