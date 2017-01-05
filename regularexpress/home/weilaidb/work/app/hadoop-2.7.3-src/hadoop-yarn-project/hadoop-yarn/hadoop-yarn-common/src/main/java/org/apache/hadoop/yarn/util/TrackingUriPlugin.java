package org.apache.hadoop.yarn.util;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.yarn.api.records.ApplicationId;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public abstract class TrackingUriPlugin extends Configured
