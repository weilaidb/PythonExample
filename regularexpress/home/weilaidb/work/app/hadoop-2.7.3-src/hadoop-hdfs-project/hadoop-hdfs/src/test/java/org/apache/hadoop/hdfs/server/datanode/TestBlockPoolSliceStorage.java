package org.apache.hadoop.hdfs.server.datanode;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.hdfs.server.common.Storage;
import org.junit.Test;
import java.io.File;
import java.util.Random;
import java.util.UUID;
import static org.hamcrest.core.Is.is;
import static org.junit.Assert.assertThat;
public class TestBlockPoolSliceStorage
