package org.apache.hadoop.tools.rumen;
import java.io.Serializable;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Comparator;
import org.apache.hadoop.tools.rumen.datatypes.NodeName;
import org.codehaus.jackson.annotate.JsonAnySetter;
public class LoggedNetworkTopology implements DeepCompare
