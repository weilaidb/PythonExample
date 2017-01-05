package org.apache.hadoop.yarn.api.records;
import java.io.IOException;
import java.text.NumberFormat;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.util.Records;
@Public
@Unstable
public abstract class ReservationId implements Comparable<ReservationId>
