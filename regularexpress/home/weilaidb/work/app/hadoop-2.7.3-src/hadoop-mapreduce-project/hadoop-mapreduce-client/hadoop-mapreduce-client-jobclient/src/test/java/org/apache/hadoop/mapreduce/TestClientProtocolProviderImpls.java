package org.apache.hadoop.mapreduce;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapred.LocalJobRunner;
import org.apache.hadoop.mapred.YARNRunner;
import org.apache.hadoop.mapreduce.server.jobtracker.JTConfig;
import org.junit.Test;
public class TestClientProtocolProviderImpls
