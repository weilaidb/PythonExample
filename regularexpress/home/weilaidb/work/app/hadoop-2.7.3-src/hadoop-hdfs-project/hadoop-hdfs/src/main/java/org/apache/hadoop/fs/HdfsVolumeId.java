package org.apache.hadoop.fs;
import org.apache.commons.lang.builder.EqualsBuilder;
import org.apache.commons.lang.builder.HashCodeBuilder;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.util.StringUtils;
import com.google.common.base.Preconditions;
@InterfaceStability.Unstable
@InterfaceAudience.Public
public class HdfsVolumeId implements VolumeId
