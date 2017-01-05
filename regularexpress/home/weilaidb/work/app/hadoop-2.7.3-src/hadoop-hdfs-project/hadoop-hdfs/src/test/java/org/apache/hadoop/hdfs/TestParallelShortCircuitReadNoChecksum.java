package org.apache.hadoop.hdfs;
import java.io.File;
import org.apache.hadoop.net.unix.DomainSocket;
import org.apache.hadoop.net.unix.TemporarySocketDirectory;
import org.junit.AfterClass;
import org.junit.Assume;
import org.junit.Before;
import org.junit.BeforeClass;
import static org.hamcrest.CoreMatchers.*;
public class TestParallelShortCircuitReadNoChecksum extends TestParallelReadUtil
