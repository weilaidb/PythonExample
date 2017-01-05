package org.apache.hadoop.fs;
import java.io.IOException;
import org.apache.commons.codec.DecoderException;
import org.apache.commons.codec.binary.Base64;
import org.apache.commons.codec.binary.Hex;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import com.google.common.base.Preconditions;
@InterfaceAudience.Public
@InterfaceStability.Stable
public enum XAttrCodec
