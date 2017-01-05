package org.apache.hadoop.mapred.gridmix.emulators.resourceusage;
import java.io.IOException;
import java.util.ArrayList;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapred.gridmix.Progressive;
import org.apache.hadoop.tools.rumen.ResourceUsageMetrics;
import org.apache.hadoop.yarn.util.ResourceCalculatorPlugin;
public class TotalHeapUsageEmulatorPlugin
implements ResourceUsageEmulatorPlugin
