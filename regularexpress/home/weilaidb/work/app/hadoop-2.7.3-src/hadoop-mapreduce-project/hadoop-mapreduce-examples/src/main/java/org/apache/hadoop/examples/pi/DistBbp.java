package org.apache.hadoop.examples.pi;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.examples.pi.DistSum.Computation;
import org.apache.hadoop.examples.pi.DistSum.Parameters;
import org.apache.hadoop.examples.pi.math.Bellard;
import org.apache.hadoop.examples.pi.math.Summation;
import org.apache.hadoop.examples.pi.math.Bellard.Parameter;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
public final class DistBbp extends Configured implements Tool
