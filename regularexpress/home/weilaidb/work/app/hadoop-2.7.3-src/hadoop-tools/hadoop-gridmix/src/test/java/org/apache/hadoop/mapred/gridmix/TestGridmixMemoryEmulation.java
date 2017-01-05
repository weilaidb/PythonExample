package org.apache.hadoop.mapred.gridmix;
import org.junit.Test;
import static org.junit.Assert.*;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.gridmix.DebugJobProducer.MockJob;
import org.apache.hadoop.mapred.gridmix.TestHighRamJob.DummyGridmixJob;
import org.apache.hadoop.mapred.gridmix.TestResourceUsageEmulators.FakeProgressive;
import org.apache.hadoop.mapred.gridmix.emulators.resourceusage.TotalHeapUsageEmulatorPlugin;
import org.apache.hadoop.mapred.gridmix.emulators.resourceusage.TotalHeapUsageEmulatorPlugin.DefaultHeapUsageEmulator;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.tools.rumen.ResourceUsageMetrics;
import org.apache.hadoop.yarn.util.ResourceCalculatorPlugin;
public class TestGridmixMemoryEmulation
