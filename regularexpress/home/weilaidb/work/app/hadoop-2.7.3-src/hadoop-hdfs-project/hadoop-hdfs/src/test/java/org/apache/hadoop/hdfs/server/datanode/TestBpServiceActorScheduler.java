package org.apache.hadoop.hdfs.server.datanode;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.Timeout;
import static java.lang.Math.abs;
import static org.hamcrest.core.Is.is;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertThat;
import static org.junit.Assert.assertTrue;
import static org.mockito.Mockito.doReturn;
import static org.mockito.Mockito.spy;
import org.apache.hadoop.hdfs.server.datanode.BPServiceActor.Scheduler;
import java.util.Arrays;
import java.util.List;
import java.util.Random;
public class TestBpServiceActorScheduler
