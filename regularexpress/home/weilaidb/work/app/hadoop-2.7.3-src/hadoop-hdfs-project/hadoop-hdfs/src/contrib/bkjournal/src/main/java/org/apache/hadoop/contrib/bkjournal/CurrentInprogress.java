package org.apache.hadoop.contrib.bkjournal;
import java.io.IOException;
import java.net.InetAddress;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.zookeeper.CreateMode;
import org.apache.zookeeper.KeeperException;
import org.apache.zookeeper.ZooKeeper;
import org.apache.zookeeper.KeeperException.NodeExistsException;
import org.apache.zookeeper.ZooDefs.Ids;
import org.apache.zookeeper.data.Stat;
import org.apache.hadoop.contrib.bkjournal.BKJournalProtos.CurrentInprogressProto;
import com.google.protobuf.TextFormat;
import static com.google.common.base.Charsets.UTF_8;
class CurrentInprogress
