package org.apache.hadoop.security;
import java.lang.annotation.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public @interface KerberosInfo
