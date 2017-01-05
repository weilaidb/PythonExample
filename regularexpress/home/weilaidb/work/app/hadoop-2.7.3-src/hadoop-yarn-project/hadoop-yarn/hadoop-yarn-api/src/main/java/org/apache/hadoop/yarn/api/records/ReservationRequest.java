package org.apache.hadoop.yarn.api.records;
import java.io.Serializable;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.util.Records;
@Public
@Unstable
public abstract class ReservationRequest implements
Comparable<ReservationRequest>
