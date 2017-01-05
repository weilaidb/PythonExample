package org.apache.hadoop.hdfs.qjournal;
import java.io.File;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.qjournal.server.JournalNode;
import org.apache.hadoop.net.NetUtils;
import com.google.common.base.Joiner;
import com.google.common.collect.Lists;
public class MiniJournalCluster
JournalNode newJN = new JournalNode();
newJN.setConf(conf);
newJN.start();
info.node = newJN;
}
public int getQuorumSize()
public int getNumNodes()
}
