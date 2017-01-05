package org.apache.hadoop.util.bloom;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.Collection;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.util.hash.Hash;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public abstract class Filter implements Writable
