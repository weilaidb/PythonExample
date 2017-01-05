package org.apache.hadoop.security;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;
import java.util.LinkedList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.NativeCodeLoader;
import org.apache.hadoop.security.NetgroupCache;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class JniBasedUnixGroupsNetgroupMapping
extends JniBasedUnixGroupsMapping
