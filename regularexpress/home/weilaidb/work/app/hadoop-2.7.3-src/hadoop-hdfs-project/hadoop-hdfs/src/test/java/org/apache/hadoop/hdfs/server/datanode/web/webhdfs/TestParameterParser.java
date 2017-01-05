package org.apache.hadoop.hdfs.server.datanode.web.webhdfs;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSTestUtil;
import org.apache.hadoop.hdfs.HAUtil;
import org.apache.hadoop.hdfs.security.token.delegation.DelegationTokenIdentifier;
import org.apache.hadoop.hdfs.web.resources.DelegationParam;
import org.apache.hadoop.hdfs.web.resources.NamenodeAddressParam;
import org.apache.hadoop.hdfs.web.resources.OffsetParam;
import org.apache.hadoop.security.token.Token;
import org.junit.Assert;
import org.junit.Test;
import io.netty.handler.codec.http.QueryStringDecoder;
import javax.servlet.ServletContext;
import java.io.IOException;
import static org.mockito.Mockito.doReturn;
import static org.mockito.Mockito.mock;
public class TestParameterParser
