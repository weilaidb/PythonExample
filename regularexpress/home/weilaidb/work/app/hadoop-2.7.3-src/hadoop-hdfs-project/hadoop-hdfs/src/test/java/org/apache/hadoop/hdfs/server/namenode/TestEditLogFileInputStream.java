package org.apache.hadoop.hdfs.server.namenode;
import static org.junit.Assert.*;
import static org.hamcrest.CoreMatchers.is;
import static org.mockito.Matchers.anyBoolean;
import static org.mockito.Mockito.doReturn;
import static org.mockito.Mockito.mock;
import java.io.ByteArrayInputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.EnumMap;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.util.Holder;
import org.apache.hadoop.hdfs.web.URLConnectionFactory;
import org.junit.Test;
import org.mockito.Mockito;
public class TestEditLogFileInputStream
