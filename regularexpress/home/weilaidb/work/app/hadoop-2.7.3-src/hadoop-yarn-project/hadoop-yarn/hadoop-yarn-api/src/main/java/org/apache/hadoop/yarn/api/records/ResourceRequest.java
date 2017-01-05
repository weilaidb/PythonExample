package org.apache.hadoop.yarn.api.records;
import java.io.Serializable;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.classification.InterfaceStability.Stable;
import org.apache.hadoop.yarn.api.ApplicationMasterProtocol;
import org.apache.hadoop.yarn.util.Records;
@Public
@Stable
public abstract class ResourceRequest implements Comparable<ResourceRequest>
