package org.apache.hadoop.hdfs.server.blockmanagement;
import static org.apache.hadoop.util.Time.monotonicNow;
import java.io.PrintWriter;
import java.sql.Time;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.util.Daemon;
import org.slf4j.Logger;
class PendingReplicationBlocks
