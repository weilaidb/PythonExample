package org.apache.hadoop.hdfs.shortcircuit;
import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.Iterator;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.hdfs.ExtendedBlockId;
import org.apache.hadoop.hdfs.shortcircuit.ShortCircuitShm;
import org.apache.hadoop.hdfs.shortcircuit.ShortCircuitShm.ShmId;
import org.apache.hadoop.hdfs.shortcircuit.ShortCircuitShm.Slot;
import org.apache.hadoop.io.nativeio.SharedFileDescriptorFactory;
import org.junit.Assert;
import org.junit.Assume;
import org.junit.Before;
import org.junit.Test;
public class TestShortCircuitShm
